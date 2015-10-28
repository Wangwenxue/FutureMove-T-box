/*HEADER**********************************************************************
*
* Copyright 2008 Freescale Semiconductor, Inc.
*
* This software is owned or controlled by Freescale Semiconductor.
* Use of this software is governed by the Freescale MQX RTOS License
* distributed with this Material.
* See the MQX_RTOS_LICENSE file distributed for more details.
*
* Brief License Summary:
* This software is provided in source form for you to use free of charge,
* but it is not open source software. You are allowed to use this software
* but you cannot redistribute it or derivative works of it in source form.
* The software may be used only in connection with a product containing
* a Freescale microprocessor, microcontroller, or digital signal processor.
* See license agreement file for full license terms including other
* restrictions.
*****************************************************************************
*
* Comments:
*
*   User configuration for MQX components
*
*
*END************************************************************************/

#ifndef __maximum_user_config_h__
#define __maximum_user_config_h__

// this is custom config for the codesize measurement
#define CODESIZE_USER_CONFIG 1

/* mandatory CPU identification */
#define MQX_CPU                 PSP_CPU_MCF52259

/*
** BSP settings - see for defaults mqx\source\bsp\m52259evb\m52259evb.h
*/
#define BSPCFG_ENABLE_ENET_STATS     1
#define BSPCFG_ENET_RESTORE          1
#define BSPCFG_ENABLE_CPP            1
#define BSPCFG_ENABLE_IO_SUBSYSTEM   1
#define BSPCFG_ENABLE_TTYA           1
#define BSPCFG_ENABLE_TTYB           1
#define BSPCFG_ENABLE_TTYC           1
#define BSPCFG_ENABLE_ITTYA          1
#define BSPCFG_ENABLE_ITTYB          1
#define BSPCFG_ENABLE_ITTYC          1
#define BSPCFG_ENABLE_I2C0           1
#define BSPCFG_ENABLE_I2C1           1
#define BSPCFG_ENABLE_II2C0          1
#define BSPCFG_ENABLE_II2C1          1
#define BSPCFG_ENABLE_GPIODEV        0
#define BSPCFG_ENABLE_RTCDEV         1
#define BSPCFG_ENABLE_PCFLASH        1
#define BSPCFG_ENABLE_SPI0           1
#define BSPCFG_ENABLE_ISPI0          1
#define BSPCFG_ENABLE_ADC            1
#define BSPCFG_ENABLE_FLASHX         1
#define BSPCFG_ENABLE_TCHRES         1

/* PSP settings */
#include <maximum_config.h>

/* and enable verification checks in kernel */
#include "verif_enabled_config.h"

#endif
/* EOF */
