#ifndef __QRD_TABLET_PLATFORM
#define __QRD_TABLET_PLATFORM

/* define Gigabyte HW version */
#define QRD_TABLET_HW_PLATFORM_TYPE1	1001
#define QRD_TABLET_HW_PLATFORM_TYPE2	1002
#define QRD_TABLET_HW_PLATFORM_TYPE3	1003
#define QRD_TABLET_HW_PLATFORM_TYPE4	1004

extern int machine_is_msm8x30_type1(void);
extern int machine_is_msm8x30_type2(void);
extern int qrd_tablet_platform_get_version(void);

#endif
