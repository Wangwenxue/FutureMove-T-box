/*HEADER**********************************************************************
*
* Copyright 2011 Freescale Semiconductor, Inc.
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
#define MQX_CPU                           PSP_CPU_MPXD10
//#define MQX_USE_INTERRUPTS                1
//#define MQX_KERNEL_LOGGING                1

//#define BSPCFG_ENABLE_IO_SUBSYSTEM        1

/*  PIT to be used as system timer */
#define BSPCFG_TIMER_PIT_DEVICE         (0)
#define BSPCFG_TIMER_PIT_CHANNEL        (0)
#define BSPCFG_TIMER_INT_LEVEL          (1)


#define BSPCFG_ENABLE_CPP                 0
#define BSPCFG_ENABLE_TTYA                0
#define BSPCFG_ENABLE_ITTYA               0
#define BSPCFG_ENABLE_TTYB                0
#define BSPCFG_ENABLE_ITTYB               0

#define BSPCFG_ENABLE_SPI0                0
#define BSPCFG_ENABLE_ISPI0               0
#define BSPCFG_ENABLE_SPI1                0
#define BSPCFG_ENABLE_ISPI1               0

#define BSPCFG_ENABLE_I2C0                0
#define BSPCFG_ENABLE_II2C0               0
#define BSPCFG_ENABLE_I2C1                0
#define BSPCFG_ENABLE_II2C1               0
#define BSPCFG_ENABLE_I2C2                0
#define BSPCFG_ENABLE_II2C2               0
#define BSPCFG_ENABLE_I2C3                0
#define BSPCFG_ENABLE_II2C3               0

#define BSPCFG_ENABLE_RTCDEV              0
#define BSPCFG_ENABLE_PCFLASH             0
#define BSPCFG_ENABLE_FLASHX              0

#define BSPCFG_ENABLE_LWADC               0
/*
** board-specific RTCS settings - see for defaults rtcs\source\include\rtcscfg.h
*/

#define SHELLCFG_USES_RTCS                0


#define MQX_USE_LWEVENTS 				  1 

/* PSP settings */
#include <smallest_config.h>
/* and enable verification checks in kernel */
#include "verif_enabled_config.h"

#endif
