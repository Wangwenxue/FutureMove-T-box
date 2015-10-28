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
#define MQX_CPU                 PSP_CPU_MK60DN512Z

/*
** BSP settings - for defaults see mqx\source\bsp\<board_name>\<board_name>.h
*/
#define BSPCFG_ENABLE_TTYA       1
#define BSPCFG_ENABLE_ITTYA      1
#define BSPCFG_ENABLE_TTYB       1
#define BSPCFG_ENABLE_ITTYB      1
#define BSPCFG_ENABLE_TTYC       1
#define BSPCFG_ENABLE_ITTYC      1
#define BSPCFG_ENABLE_TTYD       1
#define BSPCFG_ENABLE_ITTYD      1
#define BSPCFG_ENABLE_TTYE       1
#define BSPCFG_ENABLE_ITTYE      1
#define BSPCFG_ENABLE_TTYF       1
#define BSPCFG_ENABLE_ITTYF      1
#define BSPCFG_ENABLE_I2C0       1
#define BSPCFG_ENABLE_II2C0      1
#define BSPCFG_ENABLE_I2C1       1
#define BSPCFG_ENABLE_II2C1      1
#define BSPCFG_ENABLE_SPI0       1
#define BSPCFG_ENABLE_ISPI0      1
#define BSPCFG_ENABLE_SPI1       1
#define BSPCFG_ENABLE_ISPI1      1
#define BSPCFG_ENABLE_SPI2       1
#define BSPCFG_ENABLE_ISPI2      1
#define BSPCFG_ENABLE_GPIODEV    0
#define BSPCFG_ENABLE_RTCDEV     1
#define BSPCFG_ENABLE_PCFLASH    1
#define BSPCFG_ENABLE_ADC0       1
#define BSPCFG_ENABLE_ADC1       1
#define BSPCFG_ENABLE_FLASHX     1
#define BSPCFG_ENABLE_ESDHC      1


/*
** board-specific MQX settings - see for defaults mqx\source\include\mqx_cnfg.h
*/

#define MQX_USE_IDLE_TASK        1
#define MQXCFG_MEM_COPY          1

/*
** board-specific RTCS settings - see for defaults rtcs\source\include\rtcscfg.h
*/

#define RTCSCFG_ENABLE_ICMP      1
#define RTCSCFG_ENABLE_UDP       1
#define RTCSCFG_ENABLE_TCP       1
#define RTCSCFG_ENABLE_STATS     1
#define RTCSCFG_ENABLE_GATEWAYS  1
#define FTPDCFG_USES_MFS         1
#define RTCSCFG_ENABLE_SNMP      1

#define TELNETDCFG_NOWAIT        FALSE 

/*
** include common settings
*/
#define PSP_HAS_SUPPORT_STRUCT  1

/* PSP settings */
#include <maximum_config.h>

#endif
