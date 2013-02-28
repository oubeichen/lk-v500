/* Copyright (c) 2012-2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of The Linux Foundation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <debug.h>
#include <platform/iomap.h>
#include <reg.h>
#include <target.h>
#include <platform.h>
#include <uart_dm.h>
#include <mmc.h>
#include <spmi.h>
#include <board.h>
#include <smem.h>
#include <baseband.h>
#include <dev/keys.h>
#include <pm8x41.h>
#include <crypto5_wrapper.h>

#define HW_PLATFORM_APOLLO     20 /* these needs to match with apollo.dts */
#define LINUX_MACHTYPE_APOLLO  20

extern  bool target_use_signed_kernel(void);

static unsigned int target_id;

#define PMIC_ARB_CHANNEL_NUM    0
#define PMIC_ARB_OWNER_ID       0

#define WDOG_DEBUG_DISABLE_BIT  17

#define CE_INSTANCE             2
#define CE_EE                   1
#define CE_FIFO_SIZE            64
#define CE_READ_PIPE            3
#define CE_WRITE_PIPE           2
#define CE_ARRAY_SIZE           20

static uint32_t mmc_sdc_base[] =
	{ MSM_SDC1_BASE, MSM_SDC2_BASE, MSM_SDC3_BASE, MSM_SDC4_BASE };

void target_early_init(void)
{
#if WITH_DEBUG_UART
	uart_dm_init(1, 0, BLSP1_UART1_BASE);
#endif
}

#define VOL_UP_PMIC_GPIO 4
#define VOL_DN_PMIC_GPIO 1

static char emmc_size[16];
static char emmc_mid[8];

/* Return 1 if the specified GPIO is pressed (low) */
static int target_pmic_gpio_button_pressed(int gpio_number)
{
	uint8_t status = 0;
	struct pm8x41_gpio gpio;

	/* Configure the GPIO */
	gpio.direction = PM_GPIO_DIR_IN;
	gpio.function  = 0;
	gpio.pull      = PM_GPIO_PULL_UP_30;
	gpio.vin_sel   = 2;

	pm8x41_gpio_config(gpio_number, &gpio);

	/* Get status of the GPIO */
	pm8x41_gpio_get(gpio_number, &status);

	return !status; /* active low */
}

/* Return 1 if vol_up pressed */
int target_volume_up()
{
	return target_pmic_gpio_button_pressed(VOL_UP_PMIC_GPIO);
}

/* Return 1 if vol_down pressed */
int target_volume_down()
{
	return target_pmic_gpio_button_pressed(VOL_DN_PMIC_GPIO);
}

static void target_keystatus()
{
	keys_init();

	if(target_volume_down())
		keys_post_event(KEY_VOLUMEDOWN, 1);

	if(target_volume_up())
		keys_post_event(KEY_VOLUMEUP, 1);
}

/* Set up params for h/w CE. */
void target_crypto_init_params()
{
	struct crypto_init_params ce_params;

	/* Set up base addresses and instance. */
	ce_params.crypto_instance  = CE_INSTANCE;
	ce_params.crypto_base      = MSM_CE2_BASE;
	ce_params.bam_base         = MSM_CE2_BAM_BASE;

	/* Set up BAM config. */
	ce_params.bam_ee           = CE_EE;
	ce_params.pipes.read_pipe  = CE_READ_PIPE;
	ce_params.pipes.write_pipe = CE_WRITE_PIPE;

	/* Assign buffer sizes. */
	ce_params.num_ce           = CE_ARRAY_SIZE;
	ce_params.read_fifo_size   = CE_FIFO_SIZE;
	ce_params.write_fifo_size  = CE_FIFO_SIZE;

	crypto_init_params(&ce_params);
}

crypto_engine_type board_ce_type(void)
{
	return CRYPTO_ENGINE_TYPE_HW;
}

void target_init(void)
{
	uint32_t base_addr;
	uint8_t slot;

	dprintf(INFO, "target_init()\n");

	spmi_init(PMIC_ARB_CHANNEL_NUM, PMIC_ARB_OWNER_ID);

	target_keystatus();

	if (target_use_signed_kernel())
		target_crypto_init_params();
	/* Display splash screen if enabled */
#if DISPLAY_SPLASH_SCREEN
	display_init();
	dprintf(SPEW, "Diplay initialized\n");
#endif

	/* Trying Slot 1*/
	slot = 1;
	base_addr = mmc_sdc_base[slot - 1];
	if (mmc_boot_main(slot, base_addr))
	{

		/* Trying Slot 2 next */
		slot = 2;
		base_addr = mmc_sdc_base[slot - 1];
		if (mmc_boot_main(slot, base_addr)) {
			dprintf(CRITICAL, "mmc init failed!");
			ASSERT(0);
		}
	}
}

unsigned board_machtype(void)
{
	return target_id;
}

/* Do any target specific intialization needed before entering fastboot mode */
void target_fastboot_init(void)
{
	/* Set the BOOT_DONE flag in PM8921 */
	pm8x41_set_boot_done();

	struct mmc_boot_card *card = get_mmc_card();

	sprintf(emmc_size, "%lld", card->capacity);
	fastboot_publish("emmc_size", emmc_size);

	sprintf(emmc_mid, "0x%x", card->cid.mid);
	fastboot_publish("emmc_mid", emmc_mid);
}

/* Detect the target type */
void target_detect(struct board_data *board)
{
//	board->platform = MSM8974;
	board->platform_hw = HW_PLATFORM_APOLLO;
	board->target = LINUX_MACHTYPE_APOLLO;
}

/* Detect the modem type */
void target_baseband_detect(struct board_data *board)
{
	/* Check for baseband variants. Default to MSM */
	if (board->platform_subtype == HW_PLATFORM_SUBTYPE_MDM)
		board->baseband = BASEBAND_MDM;
	else
		board->baseband = BASEBAND_MSM;
}

void target_serialno(unsigned char *buf)
{
	unsigned int serialno;
// ACOS_MOD_BEGIN
#ifdef WITH_ENABLE_IDME
	int rc = idme_get_var_external("serial", (char *)buf, 16);
	buf[16] = '\0';

	dprintf(INFO, "Serial %s, %u, %u, rc=%d\n", buf, buf[0], buf[1], rc);
	if(!rc && buf[0] != '0' && buf[1] != '\0')
		return;
#endif
// ACOS_MOD_END
	if (target_is_emmc_boot()) {
		serialno = mmc_get_psn();
		snprintf((char *)buf, 13, "%x", serialno);
	}
}

unsigned check_reboot_mode(void)
{
	uint32_t restart_reason = 0;

	/* Read reboot reason and scrub it */
	restart_reason = readl(RESTART_REASON_ADDR);
	writel(0x00, RESTART_REASON_ADDR);

	return restart_reason;
}

void reboot_device(unsigned reboot_reason)
{
	/* Write the reboot reason */
	writel(reboot_reason, RESTART_REASON_ADDR);

	/* Configure PMIC for warm reset */
	pm8x41_reset_configure(PON_PSHOLD_WARM_RESET);

	/* Disable Watchdog Debug.
	 * Required becuase of a H/W bug which causes the system to
	 * reset partially even for non watchdog resets.
	 */
	writel(readl(GCC_WDOG_DEBUG) & ~(1 << WDOG_DEBUG_DISABLE_BIT), GCC_WDOG_DEBUG);

	dsb();

	/* Wait until the write takes effect. */
	while(readl(GCC_WDOG_DEBUG) & (1 << WDOG_DEBUG_DISABLE_BIT));

	/* Drop PS_HOLD for MSM */
	writel(0x00, MPM2_MPM_PS_HOLD);

	mdelay(5000);

	dprintf(CRITICAL, "Rebooting failed\n");
}

/* Returns 1 if target supports continuous splash screen. */
int target_cont_splash_screen()
{
	switch(board_platform_id())
	{
	case HW_PLATFORM_SURF:
	case HW_PLATFORM_FFA:
	default:
		return 0;
	}
}
