#ifndef __TB_PLATFORM
#define __TB_PLATFORM

/* define Gigabyte HW version */
#define TB_HW_PLATFORM_TYPE1	1001
#define TB_HW_PLATFORM_TYPE2	1002
#define TB_HW_PLATFORM_TYPE3	1003
#define TB_HW_PLATFORM_TYPE4	1004

extern int machine_is_msm8x30_type1(void);
extern int machine_is_msm8x30_type2(void);
extern int tb_platform_get_version(void);

#endif
