#include <string.h>
#include <tb_platform.h>

struct device_config_data {
	int ver;
	char* cmd;
};

//      TB_HW_PLATFORM_TYPE1     For 7" 3G+Wifi
//	TB_HW_PLATFORM_TYPE2     For 10" 3G+Wifi
//
//	{TB_HW_PLATFORM_TYPE1, "ro.hw.gps.rx660=1234"},
//	{TB_HW_PLATFORM_TYPE1, "ro.hw.display.tr55=9999"},
static const struct device_config_data device_config[] = {
	// TB_HW_PLATFORM_TYPE1

	// TB_HW_PLATFORM_TYPE2
};

void tb_add_cmdline(char *cmdline)
{
	int i = 0;
	int ver;

	if (!cmdline)
		return;

	ver = tb_platform_get_version();
	for (i = 0; i < ARRAY_SIZE(device_config); i++) {
		if (ver != device_config[i].ver)
			continue;

		strcat(cmdline, " ");
		strcat(cmdline, device_config[i].cmd);
	}
}

