# top level project rules for the msm8974 project
#
LOCAL_DIR := $(GET_LOCAL_DIR)

TARGET := msm8974

MODULES += app/aboot

DEBUG := 1
EMMC_BOOT := 1
ENABLE_SDHCI_SUPPORT := 0
ENABLE_USB30_SUPPORT := 1

#DEFINES += WITH_DEBUG_DCC=1
DEFINES += WITH_DEBUG_UART=1
#DEFINES += WITH_DEBUG_FBCON=1
DEFINES += DEVICE_TREE=1
#DEFINES += MMC_BOOT_BAM=1
DEFINES += CRYPTO_BAM=1
DEFINES += CRYPTO_REG_ACCESS=1
DEFINES += ABOOT_IGNORE_BOOT_HEADER_ADDRS=1

#Disable thumb mode
ENABLE_THUMB := false

DEFINES += ABOOT_FORCE_KERNEL_ADDR=0x00008000
DEFINES += ABOOT_FORCE_RAMDISK_ADDR=0x02000000
DEFINES += ABOOT_FORCE_TAGS_ADDR=0x01e00000

ifeq ($(EMMC_BOOT),1)
DEFINES += _EMMC_BOOT=1
endif

ifeq ($(ENABLE_SDHCI_SUPPORT),1)
DEFINES += MMC_SDHCI_SUPPORT=1
endif

ifeq ($(ENABLE_USB30_SUPPORT),1)
DEFINES += USB30_SUPPORT=1
endif

DEFINES += WITH_ENABLE_IDME=1
DEFINES += WITH_FBGFX_SPLASH=1
DEFINES += WITH_FBGFX_FASTBOOT_OUTPUT=1
