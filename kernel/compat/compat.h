#ifndef COMPAT_H
#define COMPAT_H

#if defined(hi3516ev200)

/* hi3516ev200 hi3516ev300 hi3518ev300 hi3516dv200 */
#define MAIN_CHIPNAME "hi3516ev200"

#define C_HI3516EV200 "hi3516ev200"
#define C_HI3518EV300 "hi3518ev300"
#define C_HI3516EV300 "hi3516ev300"
#define C_HI3516DV200 "hi3516dv200"

#define PLATFORM_NAME "hisilicon"
#define PLATFORM_PRX "hi_"
#define HISI_PRX "hisi-"
#define HI_PRX "hi_"
#define VENDOR_PRX "hi35xx_"

#define I2C_MASTER_SEND hi_i2c_master_send
#define GET_CMA_ZONE hisi_get_cma_zone

#elif defined(gk7205v200)

/* gk7205v200 gk7205v300 gk7202v300 gk7605v100 */
#define MAIN_CHIPNAME "gk7205v200"

#define C_HI3516EV200 "gk7205v200"
#define C_HI3518EV300 "gk7202v300"
#define C_HI3516EV300 "gk7205v300"
#define C_HI3516DV200 "gk7605v100"

#define PLATFORM_NAME "goke"
#define PLATFORM_PRX ""
#define HISI_PRX ""
#define HI_PRX ""
#define VENDOR_PRX "vendor_"

#define I2C_MASTER_SEND gk_i2c_master_send
#define GET_CMA_ZONE goke_get_cma_zone

#else
#error CHIPSET must be set to supported values
#endif

#endif /* COMPAT_H */