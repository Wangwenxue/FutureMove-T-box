/*HEADER**********************************************************************
*
* Copyright 2010 Freescale Semiconductor, Inc.
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
*   Processor and platform identifiers defined here
*
*
*END************************************************************************/

#ifndef __psp_cpudef_h__
    #define __psp_cpudef_h__

#include "mqx_cpudef.h"

/* CPU groups for Kinetis K-Series */
#define PSP_CPU_GROUP_KINETIS_K1X       (0x01)
#define PSP_CPU_GROUP_KINETIS_K2X       (0x02)
#define PSP_CPU_GROUP_KINETIS_K3X       (0x03)
#define PSP_CPU_GROUP_KINETIS_K4X       (0x04)
#define PSP_CPU_GROUP_KINETIS_K5X       (0x05)
#define PSP_CPU_GROUP_KINETIS_K6X       (0x06)
#define PSP_CPU_GROUP_KINETIS_K7X       (0x07)

/* CPU groups for Kinetis GP L-Series */
#define PSP_CPU_GROUP_KINETIS_KL0X      (0x20)
#define PSP_CPU_GROUP_KINETIS_KL1X      (0x21)
#define PSP_CPU_GROUP_KINETIS_KL2X      (0x22)
#define PSP_CPU_GROUP_KINETIS_KL3X      (0x23)
#define PSP_CPU_GROUP_KINETIS_KL4X      (0x24)

/* TODO propose and check new numbers for Vybrid family a */
#define PSP_CPU_GROUP_VYBRID_M4         (0x41)
#define PSP_CPU_GROUP_VYBRID_A5         (0x51)


/* Specific CPU identification macros */
/* Kinetis GP K-Series K10 family with Cortex M4 core */
#define PSP_CPU_MK10DX128Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K1X, 0))
#define PSP_CPU_MK10DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K1X, 1))
#define PSP_CPU_MK10DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K1X, 2))
#define PSP_CPU_MK10F12         (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K1X, 3))
#define PSP_CPU_MK1X            (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K1X, 0xF))
#define PSP_CPU_MK10D100M       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K1X, 4)) // wenxue user for FutureMove
/* Kinetis GP K-Series K20 family with Cortex M4 core */
#define PSP_CPU_MK20DX128Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K2X, 0))
#define PSP_CPU_MK20DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K2X, 1))
#define PSP_CPU_MK20DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K2X, 2))
#define PSP_CPU_MK20F12         (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K2X, 3))
#define PSP_CPU_MK20DX256       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K2X, 4))
#define PSP_CPU_MK20D50M        (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K2X, 5))
#define PSP_CPU_MK21DN512       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K2X, 6))
#define PSP_CPU_MK21FN1M        (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K2X, 7))
#define PSP_CPU_MK2X            (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K2X, 0xF))
/* Kinetis GP K-Series K30 family with Cortex M4 core */
#define PSP_CPU_MK30DX128Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K3X, 0))
#define PSP_CPU_MK30DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K3X, 1))
#define PSP_CPU_MK30DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K3X, 2))
#define PSP_CPU_MK3X            (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K3X, 0xF))
/* Kinetis GP K-Series 40 family with Cortex M4 core */
#define PSP_CPU_MK40DX128Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K4X, 0))
#define PSP_CPU_MK40DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K4X, 1))
#define PSP_CPU_MK40DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K4X, 2))
#define PSP_CPU_MK40DX128       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K4X, 3))
#define PSP_CPU_MK40DX256       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K4X, 4))
#define PSP_CPU_MK40D100M       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K4X, 5))
#define PSP_CPU_MK4X            (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K4X, 0xF))
/* Kinetis GP K-Series K50 family with Cortex M4 core */
#define PSP_CPU_MK53DN256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K5X, 0))
#define PSP_CPU_MK53DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K5X, 1))
#define PSP_CPU_MK53DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K5X, 2))
#define PSP_CPU_MK50DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K5X, 3))
#define PSP_CPU_MK50DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K5X, 4))
#define PSP_CPU_MK51DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K5X, 5))
#define PSP_CPU_MK51DN256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K5X, 4))
#define PSP_CPU_MK51DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K5X, 7))
#define PSP_CPU_MK52DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K5X, 8))
#define PSP_CPU_MK5X            (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K5X, 0xF))
/* Kinetis GP K-Series K60 family with Cortex M4 core */
#define PSP_CPU_MK60DN256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K6X, 0))
#define PSP_CPU_MK60DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K6X, 1))
#define PSP_CPU_MK60DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K6X, 2))
#define PSP_CPU_MK60DF120M      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K6X, 3))
#define PSP_CPU_MK60D100M       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K6X, 4))
#define PSP_CPU_MK64F120M       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K6X, 5))
#define PSP_CPU_MK6X            (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K6X, 0xF))
/* Kinetis GP K-Series K70 family with Cortex M4 core */
#define PSP_CPU_MK70DP256       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K7X, 0))
#define PSP_CPU_MK70F120M       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K7X, 1))
#define PSP_CPU_MK70F150M       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K7X, 2))
#define PSP_CPU_MK7X            (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_KINETIS_K7X, 0xF))

/* Vybrid series family */
#define PSP_CPU_VF65GS10_M4     (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M4, PSP_CPU_GROUP_VYBRID_M4, 0))

/* Kinetis GP L-Series family with Cortex M0+ core */
#define PSP_CPU_KL0X            (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M0P, PSP_CPU_GROUP_KINETIS_KL0X, 0xF))
#define PSP_CPU_KL1X            (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M0P, PSP_CPU_GROUP_KINETIS_KL1X, 0xF))
#define PSP_CPU_KL2X            (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M0P, PSP_CPU_GROUP_KINETIS_KL2X, 0xF))
#define PSP_CPU_KL3X            (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M0P, PSP_CPU_GROUP_KINETIS_KL3X, 0xF))
#define PSP_CPU_KL4X            (PSP_CPU_NUM(PSP_CPU_ARCH_ARM_CORTEX_M0P, PSP_CPU_GROUP_KINETIS_KL4X, 0xF))


/* CPU id check support macros */
/* Kinetis GP K-Series family */
#define PSP_MQX_CPU_IS_KINETIS_K1X  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K1X))
#define PSP_MQX_CPU_IS_KINETIS_K2X  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K2X))
#define PSP_MQX_CPU_IS_KINETIS_K3X  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K3X))
#define PSP_MQX_CPU_IS_KINETIS_K4X  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K4X))
#define PSP_MQX_CPU_IS_KINETIS_K5X  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K5X))
#define PSP_MQX_CPU_IS_KINETIS_K6X  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K6X))
#define PSP_MQX_CPU_IS_KINETIS_K7X  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K7X))

/* Kinetis GP L-Series family */
#define PSP_MQX_CPU_IS_KINETIS_KL0X ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_KL0X))
#define PSP_MQX_CPU_IS_KINETIS_KL1X ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_KL1X))
#define PSP_MQX_CPU_IS_KINETIS_KL2X ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_KL2X))
#define PSP_MQX_CPU_IS_KINETIS_KL3X ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_KL3X))
#define PSP_MQX_CPU_IS_KINETIS_KL4X ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_KL4X))

/* Kinetis GP K-Series family */
#define PSP_MQX_CPU_IS_KINETIS_K    (PSP_MQX_CPU_IS_KINETIS_K1X | \
                                     PSP_MQX_CPU_IS_KINETIS_K2X | \
                                     PSP_MQX_CPU_IS_KINETIS_K3X | \
                                     PSP_MQX_CPU_IS_KINETIS_K4X | \
                                     PSP_MQX_CPU_IS_KINETIS_K5X | \
                                     PSP_MQX_CPU_IS_KINETIS_K6X | \
                                     PSP_MQX_CPU_IS_KINETIS_K7X )
/* Kinetis GP L-Series family */
#define PSP_MQX_CPU_IS_KINETIS_L    (PSP_MQX_CPU_IS_KINETIS_KL0X | \
                                     PSP_MQX_CPU_IS_KINETIS_KL1X | \
                                     PSP_MQX_CPU_IS_KINETIS_KL2X | \
                                     PSP_MQX_CPU_IS_KINETIS_KL3X | \
                                     PSP_MQX_CPU_IS_KINETIS_KL4X )

/* Vybrid series family */
#define PSP_MQX_CPU_IS_VYBRID_M4    ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_VYBRID_M4))
#define PSP_MQX_CPU_IS_VYBRID_A5    ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_VYBRID_A5))

#define PSP_MQX_CPU_IS_VYBRID       (PSP_MQX_CPU_IS_VYBRID_A5 | PSP_MQX_CPU_IS_VYBRID_M4)

/********************************************************************************************
 * Backward compatibility with older versions
 ********************************************************************************************/
#define PSP_CPU_GROUP_KINETIS_K10   PSP_CPU_GROUP_KINETIS_K1X
#define PSP_CPU_GROUP_KINETIS_K20   PSP_CPU_GROUP_KINETIS_K2X
#define PSP_CPU_GROUP_KINETIS_K30   PSP_CPU_GROUP_KINETIS_K3X
#define PSP_CPU_GROUP_KINETIS_K40   PSP_CPU_GROUP_KINETIS_K4X
#define PSP_CPU_GROUP_KINETIS_K50   PSP_CPU_GROUP_KINETIS_K5X
#define PSP_CPU_GROUP_KINETIS_K60   PSP_CPU_GROUP_KINETIS_K6X
#define PSP_CPU_GROUP_KINETIS_K70   PSP_CPU_GROUP_KINETIS_K7X

#define PSP_MQX_CPU_IS_KINETIS_K10  PSP_MQX_CPU_IS_KINETIS_K1X
#define PSP_MQX_CPU_IS_KINETIS_K20  PSP_MQX_CPU_IS_KINETIS_K2X
#define PSP_MQX_CPU_IS_KINETIS_K30  PSP_MQX_CPU_IS_KINETIS_K3X
#define PSP_MQX_CPU_IS_KINETIS_K40  PSP_MQX_CPU_IS_KINETIS_K4X
#define PSP_MQX_CPU_IS_KINETIS_K50  PSP_MQX_CPU_IS_KINETIS_K5X
#define PSP_MQX_CPU_IS_KINETIS_K60  PSP_MQX_CPU_IS_KINETIS_K6X
#define PSP_MQX_CPU_IS_KINETIS_K70  PSP_MQX_CPU_IS_KINETIS_K7X

#define PSP_MQX_CPU_IS_KINETIS      PSP_MQX_CPU_IS_KINETIS_K

/* K40 */
#define PSP_CPU_K40N256         PSP_CPU_MK40DX256Z
#define PSP_CPU_K40N512         PSP_CPU_MK40DN512Z
#define PSP_CPU_MK40X256        PSP_CPU_MK40DX256Z
/* K53 */
#define PSP_CPU_K53N512         PSP_CPU_MK53DN512Z
#define PSP_CPU_MK53N512        PSP_CPU_MK53DN512Z
/* K60 */
#define PSP_CPU_K60N512         PSP_CPU_MK60DN512Z
#define PSP_CPU_MK60N512        PSP_CPU_MK60DN512Z



#endif /* __psp_cpudef_h__ */