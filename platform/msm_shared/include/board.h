/* Copyright (c) 2012, Code Aurora Forum. All rights reserved.
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
 *     * Neither the name of Code Aurora Forum, Inc. nor the names of its
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
 *
 */

#ifndef __BOARD_H
#define __BOARD_H

#define LINUX_MACHTYPE_UNKNOWN 0

typedef enum {
	PMIC_VERSION_UNKNOWN = 0
} PMIC_VERSION;

typedef enum {
	BOARD_ID_UNKNOWN = 0,
	BOARD_ID_START = 1001,
	BOARD_ID_MSM8X30_TYPE1 = BOARD_ID_START,
	BOARD_ID_MSM8X30_TYPE2,
	BOARD_ID_MSM8X30_TYPE3,
	BOARD_ID_MSM8X30_TYPE4,
	BOARD_ID_END
} BOARD_ID;

typedef enum {
	ADC_UNKNOWN = 0
} ADC;

struct board_data {
	uint32_t platform;         // cpu: msm8960
	uint32_t platform_hw;      // MTP, CDP
	uint32_t platform_subtype; // ?
	uint32_t target;           // platform + hw, M8960_CDP
	uint32_t baseband;
	uint32_t pmic_type;
	uint32_t pmic_version;
	uint32_t id;
	uint32_t adc;
};

void board_init();
void target_detect(struct board_data *);
void target_baseband_detect(struct board_data *);
uint32_t board_platform_id();
uint32_t board_target_id();
uint32_t board_baseband();
uint32_t board_hardware_id();
uint32_t board_pmic_type();
uint32_t board_pmic_ver();
uint32_t board_id();
uint32_t board_adc();

#endif
