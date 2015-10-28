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

#ifndef __user_config_h__
#define __user_config_h__

// this is custom config for the codesize measurement
#define CODESIZE_USER_CONFIG 1

/* mandatory CPU identification */
#define MQX_CPU                 PSP_CPU_MCF54418

/*
** BSP settings - for defaults see mqx\source\bsp\<board_name>\<board_name>.h
*/

/*
** board-specific MQX settings - see for defaults mqx\source\include\mqx_cnfg.h
*/

#define BSPCFG_ENABLE_TTYA          0
#define BSPCFG_ENABLE_TTYB          0
#define BSPCFG_ENABLE_TTYC          0   
#define BSPCFG_ENABLE_TTYD          0
#define BSPCFG_ENABLE_TTYE          0
#define BSPCFG_ENABLE_ITTYA         0
#define BSPCFG_ENABLE_ITTYB         0
#define BSPCFG_ENABLE_ITTYC         0
#define BSPCFG_ENABLE_ITTYD         0
#define BSPCFG_ENABLE_ITTYE         0
#define BSPCFG_ENABLE_SPI0          0
#define BSPCFG_ENABLE_ISPI0         0
#define BSPCFG_ENABLE_SPI1          0
#define BSPCFG_ENABLE_ISPI1         0
#define BSPCFG_ENABLE_I2C0          0
#define BSPCFG_ENABLE_II2C0         0
#define BSPCFG_ENABLE_I2C5          0
#define BSPCFG_ENABLE_II2C5         0
#define BSPCFG_ENABLE_NANDFLASH     0
#define BSPCFG_ENABLE_ADC           0
#define BSPCFG_ENABLE_ESDHC         0
#define BSPCFG_ENABLE_PCFLASH       0
#define BSPCFG_ENABLE_RTCDEV        0
#define BSPCFG_ENABLE_II2S0         0
#define BSPCFG_ENABLE_II2S1         0

#define BSPCFG_HAS_SRAM_POOL        1
#define BSPCFG_ENET_SRAM_BUF        1

#define MQX_USE_LWMEM_ALLOCATOR     0 /* TODO: need this for cached memory support */

/*
** board-specific MFS settings
*/

/*
** board-specific RTCS settings
*/

/* maximum config */
#include <smallest_config.h>

#endif
/* EOF */
