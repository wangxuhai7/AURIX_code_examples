/**
 * \file IfxPsi5_reg.h
 * \brief
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC27XD_UM_V2.2.R1
 * Specification: tc27xD_um_v2.2_SFR.xml (Revision: UM_V2.2)
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxLld_Psi5_Cfg Psi5 address
 * \ingroup IfxLld_Psi5
 * 
 * \defgroup IfxLld_Psi5_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Psi5_Cfg
 * 
 * \defgroup IfxLld_Psi5_Cfg_Psi5 2-PSI5
 * \ingroup IfxLld_Psi5_Cfg
 * 
 */
#ifndef IFXPSI5_REG_H
#define IFXPSI5_REG_H 1
/******************************************************************************/
#include "IfxPsi5_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Psi5_Cfg_BaseAddress
 * \{  */

/** \brief  PSI5 object */
#define MODULE_PSI5 /*lint --e(923)*/ (*(Ifx_PSI5*)0xF0005000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Psi5_Cfg_Psi5
 * \{  */

/** \brief  3D0, Access Enable Register 0 */
#define PSI5_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_ACCEN0*)0xF00053D0u)

/** \brief  3D4, Access Enable Register 1 */
#define PSI5_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_ACCEN1*)0xF00053D4u)

/** \brief  8C, Channel Trigger Value Register */
#define PSI5_CH0_CTV /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_CTV*)0xF000508Cu)

/** Alias (User Manual Name) for PSI5_CH0_CTV.
* To use register names with standard convension, please use PSI5_CH0_CTV.
*/
#define	PSI5_CTV0	(PSI5_CH0_CTV)

/** \brief  30, Input and Output Control Register */
#define PSI5_CH0_IOCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_IOCR*)0xF0005030u)

/** Alias (User Manual Name) for PSI5_CH0_IOCR.
* To use register names with standard convension, please use PSI5_CH0_IOCR.
*/
#define	PSI5_IOCR0	(PSI5_CH0_IOCR)

/** \brief  88, Pulse Generation Control Register */
#define PSI5_CH0_PGC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_PGC*)0xF0005088u)

/** Alias (User Manual Name) for PSI5_CH0_PGC.
* To use register names with standard convension, please use PSI5_CH0_PGC.
*/
#define	PSI5_PGC0	(PSI5_CH0_PGC)

/** \brief  34, Receiver Control Register A */
#define PSI5_CH0_RCRA /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRA*)0xF0005034u)

/** Alias (User Manual Name) for PSI5_CH0_RCRA.
* To use register names with standard convension, please use PSI5_CH0_RCRA.
*/
#define	PSI5_RCRA0	(PSI5_CH0_RCRA)

/** \brief  38, Receiver Control Register B */
#define PSI5_CH0_RCRB /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRB*)0xF0005038u)

/** Alias (User Manual Name) for PSI5_CH0_RCRB.
* To use register names with standard convension, please use PSI5_CH0_RCRB.
*/
#define	PSI5_RCRB0	(PSI5_CH0_RCRB)

/** \brief  3C, Receiver Control Register C */
#define PSI5_CH0_RCRC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRC*)0xF000503Cu)

/** Alias (User Manual Name) for PSI5_CH0_RCRC.
* To use register names with standard convension, please use PSI5_CH0_RCRC.
*/
#define	PSI5_RCRC0	(PSI5_CH0_RCRC)

/** \brief  84, Receive Data Register High */
#define PSI5_CH0_RDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRH*)0xF0005084u)

/** Alias (User Manual Name) for PSI5_CH0_RDRH.
* To use register names with standard convension, please use PSI5_CH0_RDRH.
*/
#define	PSI5_RDRH0	(PSI5_CH0_RDRH)

/** \brief  80, Receive Data Register Low */
#define PSI5_CH0_RDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRL*)0xF0005080u)

/** Alias (User Manual Name) for PSI5_CH0_RDRL.
* To use register names with standard convension, please use PSI5_CH0_RDRL.
*/
#define	PSI5_RDRL0	(PSI5_CH0_RDRL)

/** \brief  5C, Receive Status Register */
#define PSI5_CH0_RSR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RSR*)0xF000505Cu)

/** Alias (User Manual Name) for PSI5_CH0_RSR.
* To use register names with standard convension, please use PSI5_CH0_RSR.
*/
#define	PSI5_RSR0	(PSI5_CH0_RSR)

/** \brief  90, Send Control Register */
#define PSI5_CH0_SCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SCR*)0xF0005090u)

/** Alias (User Manual Name) for PSI5_CH0_SCR.
* To use register names with standard convension, please use PSI5_CH0_SCR.
*/
#define	PSI5_SCR0	(PSI5_CH0_SCR)

/** \brief  98, Send Data Register High */
#define PSI5_CH0_SDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRH*)0xF0005098u)

/** Alias (User Manual Name) for PSI5_CH0_SDRH.
* To use register names with standard convension, please use PSI5_CH0_SDRH.
*/
#define	PSI5_SDRH0	(PSI5_CH0_SDRH)

/** \brief  94, Send Data Register Low */
#define PSI5_CH0_SDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRL*)0xF0005094u)

/** Alias (User Manual Name) for PSI5_CH0_SDRL.
* To use register names with standard convension, please use PSI5_CH0_SDRL.
*/
#define	PSI5_SDRL0	(PSI5_CH0_SDRL)

/** \brief  60, Serial Data and Status Register */
#define PSI5_CH0_SDS0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005060u)

/** Alias (User Manual Name) for PSI5_CH0_SDS0.
* To use register names with standard convension, please use PSI5_CH0_SDS0.
*/
#define	PSI5_SDS00	(PSI5_CH0_SDS0)

/** \brief  64, Serial Data and Status Register */
#define PSI5_CH0_SDS1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005064u)

/** Alias (User Manual Name) for PSI5_CH0_SDS1.
* To use register names with standard convension, please use PSI5_CH0_SDS1.
*/
#define	PSI5_SDS01	(PSI5_CH0_SDS1)

/** \brief  68, Serial Data and Status Register */
#define PSI5_CH0_SDS2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005068u)

/** Alias (User Manual Name) for PSI5_CH0_SDS2.
* To use register names with standard convension, please use PSI5_CH0_SDS2.
*/
#define	PSI5_SDS02	(PSI5_CH0_SDS2)

/** \brief  6C, Serial Data and Status Register */
#define PSI5_CH0_SDS3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF000506Cu)

/** Alias (User Manual Name) for PSI5_CH0_SDS3.
* To use register names with standard convension, please use PSI5_CH0_SDS3.
*/
#define	PSI5_SDS03	(PSI5_CH0_SDS3)

/** \brief  70, Serial Data and Status Register */
#define PSI5_CH0_SDS4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005070u)

/** Alias (User Manual Name) for PSI5_CH0_SDS4.
* To use register names with standard convension, please use PSI5_CH0_SDS4.
*/
#define	PSI5_SDS04	(PSI5_CH0_SDS4)

/** \brief  74, Serial Data and Status Register */
#define PSI5_CH0_SDS5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005074u)

/** Alias (User Manual Name) for PSI5_CH0_SDS5.
* To use register names with standard convension, please use PSI5_CH0_SDS5.
*/
#define	PSI5_SDS05	(PSI5_CH0_SDS5)

/** \brief  7C, SOF TS Capture Register SFTSC */
#define PSI5_CH0_SFTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SFTSC*)0xF000507Cu)

/** Alias (User Manual Name) for PSI5_CH0_SFTSC.
* To use register names with standard convension, please use PSI5_CH0_SFTSC.
*/
#define	PSI5_SFTSC0	(PSI5_CH0_SFTSC)

/** \brief  A8, Send Output Register High */
#define PSI5_CH0_SORH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORH*)0xF00050A8u)

/** Alias (User Manual Name) for PSI5_CH0_SORH.
* To use register names with standard convension, please use PSI5_CH0_SORH.
*/
#define	PSI5_SORH0	(PSI5_CH0_SORH)

/** \brief  A4, Send Output Register Low */
#define PSI5_CH0_SORL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORL*)0xF00050A4u)

/** Alias (User Manual Name) for PSI5_CH0_SORL.
* To use register names with standard convension, please use PSI5_CH0_SORL.
*/
#define	PSI5_SORL0	(PSI5_CH0_SORL)

/** \brief  78, SOP TS Capture Register SPTSC */
#define PSI5_CH0_SPTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SPTSC*)0xF0005078u)

/** Alias (User Manual Name) for PSI5_CH0_SPTSC.
* To use register names with standard convension, please use PSI5_CH0_SPTSC.
*/
#define	PSI5_SPTSC0	(PSI5_CH0_SPTSC)

/** \brief  A0, Send Shift Register High */
#define PSI5_CH0_SSRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRH*)0xF00050A0u)

/** Alias (User Manual Name) for PSI5_CH0_SSRH.
* To use register names with standard convension, please use PSI5_CH0_SSRH.
*/
#define	PSI5_SSRH0	(PSI5_CH0_SSRH)

/** \brief  9C, Send Shift Register Low */
#define PSI5_CH0_SSRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRL*)0xF000509Cu)

/** Alias (User Manual Name) for PSI5_CH0_SSRL.
* To use register names with standard convension, please use PSI5_CH0_SSRL.
*/
#define	PSI5_SSRL0	(PSI5_CH0_SSRL)

/** \brief  40, Watch Dog Timer Register */
#define PSI5_CH0_WDT0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005040u)

/** Alias (User Manual Name) for PSI5_CH0_WDT0.
* To use register names with standard convension, please use PSI5_CH0_WDT0.
*/
#define	PSI5_WDT00	(PSI5_CH0_WDT0)

/** \brief  44, Watch Dog Timer Register */
#define PSI5_CH0_WDT1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005044u)

/** Alias (User Manual Name) for PSI5_CH0_WDT1.
* To use register names with standard convension, please use PSI5_CH0_WDT1.
*/
#define	PSI5_WDT01	(PSI5_CH0_WDT1)

/** \brief  48, Watch Dog Timer Register */
#define PSI5_CH0_WDT2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005048u)

/** Alias (User Manual Name) for PSI5_CH0_WDT2.
* To use register names with standard convension, please use PSI5_CH0_WDT2.
*/
#define	PSI5_WDT02	(PSI5_CH0_WDT2)

/** \brief  4C, Watch Dog Timer Register */
#define PSI5_CH0_WDT3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF000504Cu)

/** Alias (User Manual Name) for PSI5_CH0_WDT3.
* To use register names with standard convension, please use PSI5_CH0_WDT3.
*/
#define	PSI5_WDT03	(PSI5_CH0_WDT3)

/** \brief  50, Watch Dog Timer Register */
#define PSI5_CH0_WDT4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005050u)

/** Alias (User Manual Name) for PSI5_CH0_WDT4.
* To use register names with standard convension, please use PSI5_CH0_WDT4.
*/
#define	PSI5_WDT04	(PSI5_CH0_WDT4)

/** \brief  54, Watch Dog Timer Register */
#define PSI5_CH0_WDT5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005054u)

/** Alias (User Manual Name) for PSI5_CH0_WDT5.
* To use register names with standard convension, please use PSI5_CH0_WDT5.
*/
#define	PSI5_WDT05	(PSI5_CH0_WDT5)

/** \brief  58, Watch Dog Timer Register */
#define PSI5_CH0_WDT6 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005058u)

/** Alias (User Manual Name) for PSI5_CH0_WDT6.
* To use register names with standard convension, please use PSI5_CH0_WDT6.
*/
#define	PSI5_WDT06	(PSI5_CH0_WDT6)

/** \brief  11C, Channel Trigger Value Register */
#define PSI5_CH1_CTV /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_CTV*)0xF000511Cu)

/** Alias (User Manual Name) for PSI5_CH1_CTV.
* To use register names with standard convension, please use PSI5_CH1_CTV.
*/
#define	PSI5_CTV1	(PSI5_CH1_CTV)

/** \brief  C0, Input and Output Control Register */
#define PSI5_CH1_IOCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_IOCR*)0xF00050C0u)

/** Alias (User Manual Name) for PSI5_CH1_IOCR.
* To use register names with standard convension, please use PSI5_CH1_IOCR.
*/
#define	PSI5_IOCR1	(PSI5_CH1_IOCR)

/** \brief  118, Pulse Generation Control Register */
#define PSI5_CH1_PGC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_PGC*)0xF0005118u)

/** Alias (User Manual Name) for PSI5_CH1_PGC.
* To use register names with standard convension, please use PSI5_CH1_PGC.
*/
#define	PSI5_PGC1	(PSI5_CH1_PGC)

/** \brief  C4, Receiver Control Register A */
#define PSI5_CH1_RCRA /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRA*)0xF00050C4u)

/** Alias (User Manual Name) for PSI5_CH1_RCRA.
* To use register names with standard convension, please use PSI5_CH1_RCRA.
*/
#define	PSI5_RCRA1	(PSI5_CH1_RCRA)

/** \brief  C8, Receiver Control Register B */
#define PSI5_CH1_RCRB /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRB*)0xF00050C8u)

/** Alias (User Manual Name) for PSI5_CH1_RCRB.
* To use register names with standard convension, please use PSI5_CH1_RCRB.
*/
#define	PSI5_RCRB1	(PSI5_CH1_RCRB)

/** \brief  CC, Receiver Control Register C */
#define PSI5_CH1_RCRC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRC*)0xF00050CCu)

/** Alias (User Manual Name) for PSI5_CH1_RCRC.
* To use register names with standard convension, please use PSI5_CH1_RCRC.
*/
#define	PSI5_RCRC1	(PSI5_CH1_RCRC)

/** \brief  114, Receive Data Register High */
#define PSI5_CH1_RDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRH*)0xF0005114u)

/** Alias (User Manual Name) for PSI5_CH1_RDRH.
* To use register names with standard convension, please use PSI5_CH1_RDRH.
*/
#define	PSI5_RDRH1	(PSI5_CH1_RDRH)

/** \brief  110, Receive Data Register Low */
#define PSI5_CH1_RDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRL*)0xF0005110u)

/** Alias (User Manual Name) for PSI5_CH1_RDRL.
* To use register names with standard convension, please use PSI5_CH1_RDRL.
*/
#define	PSI5_RDRL1	(PSI5_CH1_RDRL)

/** \brief  EC, Receive Status Register */
#define PSI5_CH1_RSR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RSR*)0xF00050ECu)

/** Alias (User Manual Name) for PSI5_CH1_RSR.
* To use register names with standard convension, please use PSI5_CH1_RSR.
*/
#define	PSI5_RSR1	(PSI5_CH1_RSR)

/** \brief  120, Send Control Register */
#define PSI5_CH1_SCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SCR*)0xF0005120u)

/** Alias (User Manual Name) for PSI5_CH1_SCR.
* To use register names with standard convension, please use PSI5_CH1_SCR.
*/
#define	PSI5_SCR1	(PSI5_CH1_SCR)

/** \brief  128, Send Data Register High */
#define PSI5_CH1_SDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRH*)0xF0005128u)

/** Alias (User Manual Name) for PSI5_CH1_SDRH.
* To use register names with standard convension, please use PSI5_CH1_SDRH.
*/
#define	PSI5_SDRH1	(PSI5_CH1_SDRH)

/** \brief  124, Send Data Register Low */
#define PSI5_CH1_SDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRL*)0xF0005124u)

/** Alias (User Manual Name) for PSI5_CH1_SDRL.
* To use register names with standard convension, please use PSI5_CH1_SDRL.
*/
#define	PSI5_SDRL1	(PSI5_CH1_SDRL)

/** \brief  F0, Serial Data and Status Register */
#define PSI5_CH1_SDS0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00050F0u)

/** Alias (User Manual Name) for PSI5_CH1_SDS0.
* To use register names with standard convension, please use PSI5_CH1_SDS0.
*/
#define	PSI5_SDS10	(PSI5_CH1_SDS0)

/** \brief  F4, Serial Data and Status Register */
#define PSI5_CH1_SDS1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00050F4u)

/** Alias (User Manual Name) for PSI5_CH1_SDS1.
* To use register names with standard convension, please use PSI5_CH1_SDS1.
*/
#define	PSI5_SDS11	(PSI5_CH1_SDS1)

/** \brief  F8, Serial Data and Status Register */
#define PSI5_CH1_SDS2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00050F8u)

/** Alias (User Manual Name) for PSI5_CH1_SDS2.
* To use register names with standard convension, please use PSI5_CH1_SDS2.
*/
#define	PSI5_SDS12	(PSI5_CH1_SDS2)

/** \brief  FC, Serial Data and Status Register */
#define PSI5_CH1_SDS3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00050FCu)

/** Alias (User Manual Name) for PSI5_CH1_SDS3.
* To use register names with standard convension, please use PSI5_CH1_SDS3.
*/
#define	PSI5_SDS13	(PSI5_CH1_SDS3)

/** \brief  100, Serial Data and Status Register */
#define PSI5_CH1_SDS4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005100u)

/** Alias (User Manual Name) for PSI5_CH1_SDS4.
* To use register names with standard convension, please use PSI5_CH1_SDS4.
*/
#define	PSI5_SDS14	(PSI5_CH1_SDS4)

/** \brief  104, Serial Data and Status Register */
#define PSI5_CH1_SDS5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005104u)

/** Alias (User Manual Name) for PSI5_CH1_SDS5.
* To use register names with standard convension, please use PSI5_CH1_SDS5.
*/
#define	PSI5_SDS15	(PSI5_CH1_SDS5)

/** \brief  10C, SOF TS Capture Register SFTSC */
#define PSI5_CH1_SFTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SFTSC*)0xF000510Cu)

/** Alias (User Manual Name) for PSI5_CH1_SFTSC.
* To use register names with standard convension, please use PSI5_CH1_SFTSC.
*/
#define	PSI5_SFTSC1	(PSI5_CH1_SFTSC)

/** \brief  138, Send Output Register High */
#define PSI5_CH1_SORH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORH*)0xF0005138u)

/** Alias (User Manual Name) for PSI5_CH1_SORH.
* To use register names with standard convension, please use PSI5_CH1_SORH.
*/
#define	PSI5_SORH1	(PSI5_CH1_SORH)

/** \brief  134, Send Output Register Low */
#define PSI5_CH1_SORL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORL*)0xF0005134u)

/** Alias (User Manual Name) for PSI5_CH1_SORL.
* To use register names with standard convension, please use PSI5_CH1_SORL.
*/
#define	PSI5_SORL1	(PSI5_CH1_SORL)

/** \brief  108, SOP TS Capture Register SPTSC */
#define PSI5_CH1_SPTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SPTSC*)0xF0005108u)

/** Alias (User Manual Name) for PSI5_CH1_SPTSC.
* To use register names with standard convension, please use PSI5_CH1_SPTSC.
*/
#define	PSI5_SPTSC1	(PSI5_CH1_SPTSC)

/** \brief  130, Send Shift Register High */
#define PSI5_CH1_SSRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRH*)0xF0005130u)

/** Alias (User Manual Name) for PSI5_CH1_SSRH.
* To use register names with standard convension, please use PSI5_CH1_SSRH.
*/
#define	PSI5_SSRH1	(PSI5_CH1_SSRH)

/** \brief  12C, Send Shift Register Low */
#define PSI5_CH1_SSRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRL*)0xF000512Cu)

/** Alias (User Manual Name) for PSI5_CH1_SSRL.
* To use register names with standard convension, please use PSI5_CH1_SSRL.
*/
#define	PSI5_SSRL1	(PSI5_CH1_SSRL)

/** \brief  D0, Watch Dog Timer Register */
#define PSI5_CH1_WDT0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050D0u)

/** Alias (User Manual Name) for PSI5_CH1_WDT0.
* To use register names with standard convension, please use PSI5_CH1_WDT0.
*/
#define	PSI5_WDT10	(PSI5_CH1_WDT0)

/** \brief  D4, Watch Dog Timer Register */
#define PSI5_CH1_WDT1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050D4u)

/** Alias (User Manual Name) for PSI5_CH1_WDT1.
* To use register names with standard convension, please use PSI5_CH1_WDT1.
*/
#define	PSI5_WDT11	(PSI5_CH1_WDT1)

/** \brief  D8, Watch Dog Timer Register */
#define PSI5_CH1_WDT2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050D8u)

/** Alias (User Manual Name) for PSI5_CH1_WDT2.
* To use register names with standard convension, please use PSI5_CH1_WDT2.
*/
#define	PSI5_WDT12	(PSI5_CH1_WDT2)

/** \brief  DC, Watch Dog Timer Register */
#define PSI5_CH1_WDT3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050DCu)

/** Alias (User Manual Name) for PSI5_CH1_WDT3.
* To use register names with standard convension, please use PSI5_CH1_WDT3.
*/
#define	PSI5_WDT13	(PSI5_CH1_WDT3)

/** \brief  E0, Watch Dog Timer Register */
#define PSI5_CH1_WDT4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050E0u)

/** Alias (User Manual Name) for PSI5_CH1_WDT4.
* To use register names with standard convension, please use PSI5_CH1_WDT4.
*/
#define	PSI5_WDT14	(PSI5_CH1_WDT4)

/** \brief  E4, Watch Dog Timer Register */
#define PSI5_CH1_WDT5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050E4u)

/** Alias (User Manual Name) for PSI5_CH1_WDT5.
* To use register names with standard convension, please use PSI5_CH1_WDT5.
*/
#define	PSI5_WDT15	(PSI5_CH1_WDT5)

/** \brief  E8, Watch Dog Timer Register */
#define PSI5_CH1_WDT6 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050E8u)

/** Alias (User Manual Name) for PSI5_CH1_WDT6.
* To use register names with standard convension, please use PSI5_CH1_WDT6.
*/
#define	PSI5_WDT16	(PSI5_CH1_WDT6)

/** \brief  1AC, Channel Trigger Value Register */
#define PSI5_CH2_CTV /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_CTV*)0xF00051ACu)

/** Alias (User Manual Name) for PSI5_CH2_CTV.
* To use register names with standard convension, please use PSI5_CH2_CTV.
*/
#define	PSI5_CTV2	(PSI5_CH2_CTV)

/** \brief  150, Input and Output Control Register */
#define PSI5_CH2_IOCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_IOCR*)0xF0005150u)

/** Alias (User Manual Name) for PSI5_CH2_IOCR.
* To use register names with standard convension, please use PSI5_CH2_IOCR.
*/
#define	PSI5_IOCR2	(PSI5_CH2_IOCR)

/** \brief  1A8, Pulse Generation Control Register */
#define PSI5_CH2_PGC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_PGC*)0xF00051A8u)

/** Alias (User Manual Name) for PSI5_CH2_PGC.
* To use register names with standard convension, please use PSI5_CH2_PGC.
*/
#define	PSI5_PGC2	(PSI5_CH2_PGC)

/** \brief  154, Receiver Control Register A */
#define PSI5_CH2_RCRA /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRA*)0xF0005154u)

/** Alias (User Manual Name) for PSI5_CH2_RCRA.
* To use register names with standard convension, please use PSI5_CH2_RCRA.
*/
#define	PSI5_RCRA2	(PSI5_CH2_RCRA)

/** \brief  158, Receiver Control Register B */
#define PSI5_CH2_RCRB /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRB*)0xF0005158u)

/** Alias (User Manual Name) for PSI5_CH2_RCRB.
* To use register names with standard convension, please use PSI5_CH2_RCRB.
*/
#define	PSI5_RCRB2	(PSI5_CH2_RCRB)

/** \brief  15C, Receiver Control Register C */
#define PSI5_CH2_RCRC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRC*)0xF000515Cu)

/** Alias (User Manual Name) for PSI5_CH2_RCRC.
* To use register names with standard convension, please use PSI5_CH2_RCRC.
*/
#define	PSI5_RCRC2	(PSI5_CH2_RCRC)

/** \brief  1A4, Receive Data Register High */
#define PSI5_CH2_RDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRH*)0xF00051A4u)

/** Alias (User Manual Name) for PSI5_CH2_RDRH.
* To use register names with standard convension, please use PSI5_CH2_RDRH.
*/
#define	PSI5_RDRH2	(PSI5_CH2_RDRH)

/** \brief  1A0, Receive Data Register Low */
#define PSI5_CH2_RDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRL*)0xF00051A0u)

/** Alias (User Manual Name) for PSI5_CH2_RDRL.
* To use register names with standard convension, please use PSI5_CH2_RDRL.
*/
#define	PSI5_RDRL2	(PSI5_CH2_RDRL)

/** \brief  17C, Receive Status Register */
#define PSI5_CH2_RSR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RSR*)0xF000517Cu)

/** Alias (User Manual Name) for PSI5_CH2_RSR.
* To use register names with standard convension, please use PSI5_CH2_RSR.
*/
#define	PSI5_RSR2	(PSI5_CH2_RSR)

/** \brief  1B0, Send Control Register */
#define PSI5_CH2_SCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SCR*)0xF00051B0u)

/** Alias (User Manual Name) for PSI5_CH2_SCR.
* To use register names with standard convension, please use PSI5_CH2_SCR.
*/
#define	PSI5_SCR2	(PSI5_CH2_SCR)

/** \brief  1B8, Send Data Register High */
#define PSI5_CH2_SDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRH*)0xF00051B8u)

/** Alias (User Manual Name) for PSI5_CH2_SDRH.
* To use register names with standard convension, please use PSI5_CH2_SDRH.
*/
#define	PSI5_SDRH2	(PSI5_CH2_SDRH)

/** \brief  1B4, Send Data Register Low */
#define PSI5_CH2_SDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRL*)0xF00051B4u)

/** Alias (User Manual Name) for PSI5_CH2_SDRL.
* To use register names with standard convension, please use PSI5_CH2_SDRL.
*/
#define	PSI5_SDRL2	(PSI5_CH2_SDRL)

/** \brief  180, Serial Data and Status Register */
#define PSI5_CH2_SDS0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005180u)

/** Alias (User Manual Name) for PSI5_CH2_SDS0.
* To use register names with standard convension, please use PSI5_CH2_SDS0.
*/
#define	PSI5_SDS20	(PSI5_CH2_SDS0)

/** \brief  184, Serial Data and Status Register */
#define PSI5_CH2_SDS1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005184u)

/** Alias (User Manual Name) for PSI5_CH2_SDS1.
* To use register names with standard convension, please use PSI5_CH2_SDS1.
*/
#define	PSI5_SDS21	(PSI5_CH2_SDS1)

/** \brief  188, Serial Data and Status Register */
#define PSI5_CH2_SDS2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005188u)

/** Alias (User Manual Name) for PSI5_CH2_SDS2.
* To use register names with standard convension, please use PSI5_CH2_SDS2.
*/
#define	PSI5_SDS22	(PSI5_CH2_SDS2)

/** \brief  18C, Serial Data and Status Register */
#define PSI5_CH2_SDS3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF000518Cu)

/** Alias (User Manual Name) for PSI5_CH2_SDS3.
* To use register names with standard convension, please use PSI5_CH2_SDS3.
*/
#define	PSI5_SDS23	(PSI5_CH2_SDS3)

/** \brief  190, Serial Data and Status Register */
#define PSI5_CH2_SDS4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005190u)

/** Alias (User Manual Name) for PSI5_CH2_SDS4.
* To use register names with standard convension, please use PSI5_CH2_SDS4.
*/
#define	PSI5_SDS24	(PSI5_CH2_SDS4)

/** \brief  194, Serial Data and Status Register */
#define PSI5_CH2_SDS5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005194u)

/** Alias (User Manual Name) for PSI5_CH2_SDS5.
* To use register names with standard convension, please use PSI5_CH2_SDS5.
*/
#define	PSI5_SDS25	(PSI5_CH2_SDS5)

/** \brief  19C, SOF TS Capture Register SFTSC */
#define PSI5_CH2_SFTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SFTSC*)0xF000519Cu)

/** Alias (User Manual Name) for PSI5_CH2_SFTSC.
* To use register names with standard convension, please use PSI5_CH2_SFTSC.
*/
#define	PSI5_SFTSC2	(PSI5_CH2_SFTSC)

/** \brief  1C8, Send Output Register High */
#define PSI5_CH2_SORH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORH*)0xF00051C8u)

/** Alias (User Manual Name) for PSI5_CH2_SORH.
* To use register names with standard convension, please use PSI5_CH2_SORH.
*/
#define	PSI5_SORH2	(PSI5_CH2_SORH)

/** \brief  1C4, Send Output Register Low */
#define PSI5_CH2_SORL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORL*)0xF00051C4u)

/** Alias (User Manual Name) for PSI5_CH2_SORL.
* To use register names with standard convension, please use PSI5_CH2_SORL.
*/
#define	PSI5_SORL2	(PSI5_CH2_SORL)

/** \brief  198, SOP TS Capture Register SPTSC */
#define PSI5_CH2_SPTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SPTSC*)0xF0005198u)

/** Alias (User Manual Name) for PSI5_CH2_SPTSC.
* To use register names with standard convension, please use PSI5_CH2_SPTSC.
*/
#define	PSI5_SPTSC2	(PSI5_CH2_SPTSC)

/** \brief  1C0, Send Shift Register High */
#define PSI5_CH2_SSRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRH*)0xF00051C0u)

/** Alias (User Manual Name) for PSI5_CH2_SSRH.
* To use register names with standard convension, please use PSI5_CH2_SSRH.
*/
#define	PSI5_SSRH2	(PSI5_CH2_SSRH)

/** \brief  1BC, Send Shift Register Low */
#define PSI5_CH2_SSRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRL*)0xF00051BCu)

/** Alias (User Manual Name) for PSI5_CH2_SSRL.
* To use register names with standard convension, please use PSI5_CH2_SSRL.
*/
#define	PSI5_SSRL2	(PSI5_CH2_SSRL)

/** \brief  160, Watch Dog Timer Register */
#define PSI5_CH2_WDT0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005160u)

/** Alias (User Manual Name) for PSI5_CH2_WDT0.
* To use register names with standard convension, please use PSI5_CH2_WDT0.
*/
#define	PSI5_WDT20	(PSI5_CH2_WDT0)

/** \brief  164, Watch Dog Timer Register */
#define PSI5_CH2_WDT1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005164u)

/** Alias (User Manual Name) for PSI5_CH2_WDT1.
* To use register names with standard convension, please use PSI5_CH2_WDT1.
*/
#define	PSI5_WDT21	(PSI5_CH2_WDT1)

/** \brief  168, Watch Dog Timer Register */
#define PSI5_CH2_WDT2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005168u)

/** Alias (User Manual Name) for PSI5_CH2_WDT2.
* To use register names with standard convension, please use PSI5_CH2_WDT2.
*/
#define	PSI5_WDT22	(PSI5_CH2_WDT2)

/** \brief  16C, Watch Dog Timer Register */
#define PSI5_CH2_WDT3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF000516Cu)

/** Alias (User Manual Name) for PSI5_CH2_WDT3.
* To use register names with standard convension, please use PSI5_CH2_WDT3.
*/
#define	PSI5_WDT23	(PSI5_CH2_WDT3)

/** \brief  170, Watch Dog Timer Register */
#define PSI5_CH2_WDT4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005170u)

/** Alias (User Manual Name) for PSI5_CH2_WDT4.
* To use register names with standard convension, please use PSI5_CH2_WDT4.
*/
#define	PSI5_WDT24	(PSI5_CH2_WDT4)

/** \brief  174, Watch Dog Timer Register */
#define PSI5_CH2_WDT5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005174u)

/** Alias (User Manual Name) for PSI5_CH2_WDT5.
* To use register names with standard convension, please use PSI5_CH2_WDT5.
*/
#define	PSI5_WDT25	(PSI5_CH2_WDT5)

/** \brief  178, Watch Dog Timer Register */
#define PSI5_CH2_WDT6 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005178u)

/** Alias (User Manual Name) for PSI5_CH2_WDT6.
* To use register names with standard convension, please use PSI5_CH2_WDT6.
*/
#define	PSI5_WDT26	(PSI5_CH2_WDT6)

/** \brief  0, Clock Control Register */
#define PSI5_CLC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CLC*)0xF0005000u)

/** \brief  59C, CRCIOV Clear Register */
#define PSI5_CRCICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCICLR*)0xF000559Cu)

/** \brief  5A0, CRCIOV Clear Register */
#define PSI5_CRCICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCICLR*)0xF00055A0u)

/** \brief  5A4, CRCIOV Clear Register */
#define PSI5_CRCICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCICLR*)0xF00055A4u)

/** \brief  45C, CRCI Overview Register */
#define PSI5_CRCIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCIOV*)0xF000545Cu)

/** \brief  460, CRCI Overview Register */
#define PSI5_CRCIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCIOV*)0xF0005460u)

/** \brief  464, CRCI Overview Register */
#define PSI5_CRCIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCIOV*)0xF0005464u)

/** \brief  4FC, CRCIOV Set Register */
#define PSI5_CRCISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCISET*)0xF00054FCu)

/** \brief  500, CRCIOV Set Register */
#define PSI5_CRCISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCISET*)0xF0005500u)

/** \brief  504, CRCIOV Set Register */
#define PSI5_CRCISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCISET*)0xF0005504u)

/** \brief  C, PSI5 Fractional Divider Register */
#define PSI5_FDR /*lint --e(923)*/ (*(volatile Ifx_PSI5_FDR*)0xF000500Cu)

/** \brief  14, Fractional Divider Register for Higher Bit Rate */
#define PSI5_FDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_FDR*)0xF0005014u)

/** \brief  10, Fractional Divider Register for Lower Bit Rate */
#define PSI5_FDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_FDR*)0xF0005010u)

/** \brief  18, Fractional Divider Register for Time Stamp */
#define PSI5_FDRT /*lint --e(923)*/ (*(volatile Ifx_PSI5_FDRT*)0xF0005018u)

/** \brief  2C, Global Control Register */
#define PSI5_GCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_GCR*)0xF000502Cu)

/** \brief  8, Module Identification Register */
#define PSI5_ID /*lint --e(923)*/ (*(volatile Ifx_PSI5_ID*)0xF0005008u)

/** \brief  2FC, Interrupt Node Pointer Register */
#define PSI5_INP0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INP*)0xF00052FCu)

/** \brief  300, Interrupt Node Pointer Register */
#define PSI5_INP1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INP*)0xF0005300u)

/** \brief  304, Interrupt Node Pointer Register */
#define PSI5_INP2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INP*)0xF0005304u)

/** \brief  360, Interrupt Clear Register A */
#define PSI5_INTCLRA0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRA*)0xF0005360u)

/** \brief  364, Interrupt Clear Register A */
#define PSI5_INTCLRA1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRA*)0xF0005364u)

/** \brief  368, Interrupt Clear Register A */
#define PSI5_INTCLRA2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRA*)0xF0005368u)

/** \brief  374, Interrupt Clear Register A */
#define PSI5_INTCLRB0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRB*)0xF0005374u)

/** \brief  378, Interrupt Clear Register A */
#define PSI5_INTCLRB1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRB*)0xF0005378u)

/** \brief  37C, Interrupt Clear Register A */
#define PSI5_INTCLRB2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRB*)0xF000537Cu)

/** \brief  388, Interrupt Enable Register A */
#define PSI5_INTENA0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENA*)0xF0005388u)

/** \brief  38C, Interrupt Enable Register A */
#define PSI5_INTENA1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENA*)0xF000538Cu)

/** \brief  390, Interrupt Enable Register A */
#define PSI5_INTENA2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENA*)0xF0005390u)

/** \brief  39C, Interrupt Enable Register B */
#define PSI5_INTENB0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENB*)0xF000539Cu)

/** \brief  3A0, Interrupt Enable Register B */
#define PSI5_INTENB1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENB*)0xF00053A0u)

/** \brief  3A4, Interrupt Enable Register B */
#define PSI5_INTENB2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENB*)0xF00053A4u)

/** \brief  2F8, Interrupt Overview Register */
#define PSI5_INTOV /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTOV*)0xF00052F8u)

/** \brief  338, Interrupt Set Register A */
#define PSI5_INTSETA0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETA*)0xF0005338u)

/** \brief  33C, Interrupt Set Register A */
#define PSI5_INTSETA1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETA*)0xF000533Cu)

/** \brief  340, Interrupt Set Register A */
#define PSI5_INTSETA2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETA*)0xF0005340u)

/** \brief  34C, Interrupt Set Register B */
#define PSI5_INTSETB0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETB*)0xF000534Cu)

/** \brief  350, Interrupt Set Register B */
#define PSI5_INTSETB1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETB*)0xF0005350u)

/** \brief  354, Interrupt Set Register B */
#define PSI5_INTSETB2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETB*)0xF0005354u)

/** \brief  310, Interrupt Status Register A */
#define PSI5_INTSTATA0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATA*)0xF0005310u)

/** \brief  314, Interrupt Status Register A */
#define PSI5_INTSTATA1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATA*)0xF0005314u)

/** \brief  318, Interrupt Status Register A */
#define PSI5_INTSTATA2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATA*)0xF0005318u)

/** \brief  324, Interrupt Status Register B */
#define PSI5_INTSTATB0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATB*)0xF0005324u)

/** \brief  328, Interrupt Status Register B */
#define PSI5_INTSTATB1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATB*)0xF0005328u)

/** \brief  32C, Interrupt Status Register B */
#define PSI5_INTSTATB2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATB*)0xF000532Cu)

/** \brief  3D8, Kernel Reset Register 0 */
#define PSI5_KRST0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_KRST0*)0xF00053D8u)

/** \brief  3DC, Kernel Reset Register 1 */
#define PSI5_KRST1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_KRST1*)0xF00053DCu)

/** \brief  3E0, Kernel Reset Status Clear Register */
#define PSI5_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_PSI5_KRSTCLR*)0xF00053E0u)

/** \brief  5D8, MEIOV Clear Register */
#define PSI5_MEICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEICLR*)0xF00055D8u)

/** \brief  5DC, MEIOV Clear Register */
#define PSI5_MEICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEICLR*)0xF00055DCu)

/** \brief  5E0, MEIOV Clear Register */
#define PSI5_MEICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEICLR*)0xF00055E0u)

/** \brief  498, MEI Overview Register */
#define PSI5_MEIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEIOV*)0xF0005498u)

/** \brief  49C, MEI Overview Register */
#define PSI5_MEIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEIOV*)0xF000549Cu)

/** \brief  4A0, MEI Overview Register */
#define PSI5_MEIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEIOV*)0xF00054A0u)

/** \brief  538, MEIOV Set Register */
#define PSI5_MEISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEISET*)0xF0005538u)

/** \brief  53C, MEIOV Set Register */
#define PSI5_MEISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEISET*)0xF000553Cu)

/** \brief  540, MEIOV Set Register */
#define PSI5_MEISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEISET*)0xF0005540u)

/** \brief  574, NBIOV Clear Register */
#define PSI5_NBICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBICLR*)0xF0005574u)

/** \brief  578, NBIOV Clear Register */
#define PSI5_NBICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBICLR*)0xF0005578u)

/** \brief  57C, NBIOV Clear Register */
#define PSI5_NBICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBICLR*)0xF000557Cu)

/** \brief  434, NBI Overview Register */
#define PSI5_NBIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBIOV*)0xF0005434u)

/** \brief  438, NBI Overview Register */
#define PSI5_NBIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBIOV*)0xF0005438u)

/** \brief  43C, NBI Overview Register */
#define PSI5_NBIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBIOV*)0xF000543Cu)

/** \brief  4D4, NBIOV Set Register */
#define PSI5_NBISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBISET*)0xF00054D4u)

/** \brief  4D8, NBIOV Set Register */
#define PSI5_NBISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBISET*)0xF00054D8u)

/** \brief  4DC, NBIOV Set Register */
#define PSI5_NBISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBISET*)0xF00054DCu)

/** \brief  5C4, NFIOV Clear Register */
#define PSI5_NFICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFICLR*)0xF00055C4u)

/** \brief  5C8, NFIOV Clear Register */
#define PSI5_NFICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFICLR*)0xF00055C8u)

/** \brief  5CC, NFIOV Clear Register */
#define PSI5_NFICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFICLR*)0xF00055CCu)

/** \brief  484, NFI Overview Register */
#define PSI5_NFIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFIOV*)0xF0005484u)

/** \brief  488, NFI Overview Register */
#define PSI5_NFIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFIOV*)0xF0005488u)

/** \brief  48C, NFI Overview Register */
#define PSI5_NFIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFIOV*)0xF000548Cu)

/** \brief  524, NFIOV Set Register */
#define PSI5_NFISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFISET*)0xF0005524u)

/** \brief  528, NFIOV Set Register */
#define PSI5_NFISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFISET*)0xF0005528u)

/** \brief  52C, NFIOV Set Register */
#define PSI5_NFISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFISET*)0xF000552Cu)

/** \brief  3CC, OCDS Control and Status */
#define PSI5_OCS /*lint --e(923)*/ (*(volatile Ifx_PSI5_OCS*)0xF00053CCu)

/** \brief  3F8, Receive Data FIFO */
#define PSI5_RDF0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDF*)0xF00053F8u)

/** \brief  3FC, Receive Data FIFO */
#define PSI5_RDF1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDF*)0xF00053FCu)

/** \brief  400, Receive Data FIFO */
#define PSI5_RDF2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDF*)0xF0005400u)

/** \brief  5B0, RDIOV Clear Register */
#define PSI5_RDICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDICLR*)0xF00055B0u)

/** \brief  5B4, RDIOV Clear Register */
#define PSI5_RDICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDICLR*)0xF00055B4u)

/** \brief  5B8, RDIOV Clear Register */
#define PSI5_RDICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDICLR*)0xF00055B8u)

/** \brief  470, RDI Overview Register */
#define PSI5_RDIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDIOV*)0xF0005470u)

/** \brief  474, RDI Overview Register */
#define PSI5_RDIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDIOV*)0xF0005474u)

/** \brief  478, RDI Overview Register */
#define PSI5_RDIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDIOV*)0xF0005478u)

/** \brief  510, RDIOV Set Register */
#define PSI5_RDISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDISET*)0xF0005510u)

/** \brief  514, RDIOV Set Register */
#define PSI5_RDISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDISET*)0xF0005514u)

/** \brief  518, RDIOV Set Register */
#define PSI5_RDISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDISET*)0xF0005518u)

/** \brief  604, Receive Data Memory High */
#define PSI5_RDM0_0_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005604u)

/** Alias (User Manual Name) for PSI5_RDM0_0_H.
* To use register names with standard convension, please use PSI5_RDM0_0_H.
*/
#define	PSI5_RDMH00	(PSI5_RDM0_0_H)

/** \brief  600, Receive Data Memory Low */
#define PSI5_RDM0_0_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005600u)

/** Alias (User Manual Name) for PSI5_RDM0_0_L.
* To use register names with standard convension, please use PSI5_RDM0_0_L.
*/
#define	PSI5_RDML00	(PSI5_RDM0_0_L)

/** \brief  654, Receive Data Memory High */
#define PSI5_RDM0_10_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005654u)

/** Alias (User Manual Name) for PSI5_RDM0_10_H.
* To use register names with standard convension, please use PSI5_RDM0_10_H.
*/
#define	PSI5_RDMH010	(PSI5_RDM0_10_H)

/** \brief  650, Receive Data Memory Low */
#define PSI5_RDM0_10_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005650u)

/** Alias (User Manual Name) for PSI5_RDM0_10_L.
* To use register names with standard convension, please use PSI5_RDM0_10_L.
*/
#define	PSI5_RDML010	(PSI5_RDM0_10_L)

/** \brief  65C, Receive Data Memory High */
#define PSI5_RDM0_11_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000565Cu)

/** Alias (User Manual Name) for PSI5_RDM0_11_H.
* To use register names with standard convension, please use PSI5_RDM0_11_H.
*/
#define	PSI5_RDMH011	(PSI5_RDM0_11_H)

/** \brief  658, Receive Data Memory Low */
#define PSI5_RDM0_11_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005658u)

/** Alias (User Manual Name) for PSI5_RDM0_11_L.
* To use register names with standard convension, please use PSI5_RDM0_11_L.
*/
#define	PSI5_RDML011	(PSI5_RDM0_11_L)

/** \brief  664, Receive Data Memory High */
#define PSI5_RDM0_12_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005664u)

/** Alias (User Manual Name) for PSI5_RDM0_12_H.
* To use register names with standard convension, please use PSI5_RDM0_12_H.
*/
#define	PSI5_RDMH012	(PSI5_RDM0_12_H)

/** \brief  660, Receive Data Memory Low */
#define PSI5_RDM0_12_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005660u)

/** Alias (User Manual Name) for PSI5_RDM0_12_L.
* To use register names with standard convension, please use PSI5_RDM0_12_L.
*/
#define	PSI5_RDML012	(PSI5_RDM0_12_L)

/** \brief  66C, Receive Data Memory High */
#define PSI5_RDM0_13_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000566Cu)

/** Alias (User Manual Name) for PSI5_RDM0_13_H.
* To use register names with standard convension, please use PSI5_RDM0_13_H.
*/
#define	PSI5_RDMH013	(PSI5_RDM0_13_H)

/** \brief  668, Receive Data Memory Low */
#define PSI5_RDM0_13_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005668u)

/** Alias (User Manual Name) for PSI5_RDM0_13_L.
* To use register names with standard convension, please use PSI5_RDM0_13_L.
*/
#define	PSI5_RDML013	(PSI5_RDM0_13_L)

/** \brief  674, Receive Data Memory High */
#define PSI5_RDM0_14_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005674u)

/** Alias (User Manual Name) for PSI5_RDM0_14_H.
* To use register names with standard convension, please use PSI5_RDM0_14_H.
*/
#define	PSI5_RDMH014	(PSI5_RDM0_14_H)

/** \brief  670, Receive Data Memory Low */
#define PSI5_RDM0_14_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005670u)

/** Alias (User Manual Name) for PSI5_RDM0_14_L.
* To use register names with standard convension, please use PSI5_RDM0_14_L.
*/
#define	PSI5_RDML014	(PSI5_RDM0_14_L)

/** \brief  67C, Receive Data Memory High */
#define PSI5_RDM0_15_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000567Cu)

/** Alias (User Manual Name) for PSI5_RDM0_15_H.
* To use register names with standard convension, please use PSI5_RDM0_15_H.
*/
#define	PSI5_RDMH015	(PSI5_RDM0_15_H)

/** \brief  678, Receive Data Memory Low */
#define PSI5_RDM0_15_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005678u)

/** Alias (User Manual Name) for PSI5_RDM0_15_L.
* To use register names with standard convension, please use PSI5_RDM0_15_L.
*/
#define	PSI5_RDML015	(PSI5_RDM0_15_L)

/** \brief  684, Receive Data Memory High */
#define PSI5_RDM0_16_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005684u)

/** Alias (User Manual Name) for PSI5_RDM0_16_H.
* To use register names with standard convension, please use PSI5_RDM0_16_H.
*/
#define	PSI5_RDMH016	(PSI5_RDM0_16_H)

/** \brief  680, Receive Data Memory Low */
#define PSI5_RDM0_16_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005680u)

/** Alias (User Manual Name) for PSI5_RDM0_16_L.
* To use register names with standard convension, please use PSI5_RDM0_16_L.
*/
#define	PSI5_RDML016	(PSI5_RDM0_16_L)

/** \brief  68C, Receive Data Memory High */
#define PSI5_RDM0_17_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000568Cu)

/** Alias (User Manual Name) for PSI5_RDM0_17_H.
* To use register names with standard convension, please use PSI5_RDM0_17_H.
*/
#define	PSI5_RDMH017	(PSI5_RDM0_17_H)

/** \brief  688, Receive Data Memory Low */
#define PSI5_RDM0_17_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005688u)

/** Alias (User Manual Name) for PSI5_RDM0_17_L.
* To use register names with standard convension, please use PSI5_RDM0_17_L.
*/
#define	PSI5_RDML017	(PSI5_RDM0_17_L)

/** \brief  694, Receive Data Memory High */
#define PSI5_RDM0_18_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005694u)

/** Alias (User Manual Name) for PSI5_RDM0_18_H.
* To use register names with standard convension, please use PSI5_RDM0_18_H.
*/
#define	PSI5_RDMH018	(PSI5_RDM0_18_H)

/** \brief  690, Receive Data Memory Low */
#define PSI5_RDM0_18_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005690u)

/** Alias (User Manual Name) for PSI5_RDM0_18_L.
* To use register names with standard convension, please use PSI5_RDM0_18_L.
*/
#define	PSI5_RDML018	(PSI5_RDM0_18_L)

/** \brief  69C, Receive Data Memory High */
#define PSI5_RDM0_19_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000569Cu)

/** Alias (User Manual Name) for PSI5_RDM0_19_H.
* To use register names with standard convension, please use PSI5_RDM0_19_H.
*/
#define	PSI5_RDMH019	(PSI5_RDM0_19_H)

/** \brief  698, Receive Data Memory Low */
#define PSI5_RDM0_19_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005698u)

/** Alias (User Manual Name) for PSI5_RDM0_19_L.
* To use register names with standard convension, please use PSI5_RDM0_19_L.
*/
#define	PSI5_RDML019	(PSI5_RDM0_19_L)

/** \brief  60C, Receive Data Memory High */
#define PSI5_RDM0_1_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000560Cu)

/** Alias (User Manual Name) for PSI5_RDM0_1_H.
* To use register names with standard convension, please use PSI5_RDM0_1_H.
*/
#define	PSI5_RDMH01	(PSI5_RDM0_1_H)

/** \brief  608, Receive Data Memory Low */
#define PSI5_RDM0_1_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005608u)

/** Alias (User Manual Name) for PSI5_RDM0_1_L.
* To use register names with standard convension, please use PSI5_RDM0_1_L.
*/
#define	PSI5_RDML01	(PSI5_RDM0_1_L)

/** \brief  6A4, Receive Data Memory High */
#define PSI5_RDM0_20_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056A4u)

/** Alias (User Manual Name) for PSI5_RDM0_20_H.
* To use register names with standard convension, please use PSI5_RDM0_20_H.
*/
#define	PSI5_RDMH020	(PSI5_RDM0_20_H)

/** \brief  6A0, Receive Data Memory Low */
#define PSI5_RDM0_20_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056A0u)

/** Alias (User Manual Name) for PSI5_RDM0_20_L.
* To use register names with standard convension, please use PSI5_RDM0_20_L.
*/
#define	PSI5_RDML020	(PSI5_RDM0_20_L)

/** \brief  6AC, Receive Data Memory High */
#define PSI5_RDM0_21_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056ACu)

/** Alias (User Manual Name) for PSI5_RDM0_21_H.
* To use register names with standard convension, please use PSI5_RDM0_21_H.
*/
#define	PSI5_RDMH021	(PSI5_RDM0_21_H)

/** \brief  6A8, Receive Data Memory Low */
#define PSI5_RDM0_21_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056A8u)

/** Alias (User Manual Name) for PSI5_RDM0_21_L.
* To use register names with standard convension, please use PSI5_RDM0_21_L.
*/
#define	PSI5_RDML021	(PSI5_RDM0_21_L)

/** \brief  6B4, Receive Data Memory High */
#define PSI5_RDM0_22_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056B4u)

/** Alias (User Manual Name) for PSI5_RDM0_22_H.
* To use register names with standard convension, please use PSI5_RDM0_22_H.
*/
#define	PSI5_RDMH022	(PSI5_RDM0_22_H)

/** \brief  6B0, Receive Data Memory Low */
#define PSI5_RDM0_22_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056B0u)

/** Alias (User Manual Name) for PSI5_RDM0_22_L.
* To use register names with standard convension, please use PSI5_RDM0_22_L.
*/
#define	PSI5_RDML022	(PSI5_RDM0_22_L)

/** \brief  6BC, Receive Data Memory High */
#define PSI5_RDM0_23_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056BCu)

/** Alias (User Manual Name) for PSI5_RDM0_23_H.
* To use register names with standard convension, please use PSI5_RDM0_23_H.
*/
#define	PSI5_RDMH023	(PSI5_RDM0_23_H)

/** \brief  6B8, Receive Data Memory Low */
#define PSI5_RDM0_23_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056B8u)

/** Alias (User Manual Name) for PSI5_RDM0_23_L.
* To use register names with standard convension, please use PSI5_RDM0_23_L.
*/
#define	PSI5_RDML023	(PSI5_RDM0_23_L)

/** \brief  6C4, Receive Data Memory High */
#define PSI5_RDM0_24_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056C4u)

/** Alias (User Manual Name) for PSI5_RDM0_24_H.
* To use register names with standard convension, please use PSI5_RDM0_24_H.
*/
#define	PSI5_RDMH024	(PSI5_RDM0_24_H)

/** \brief  6C0, Receive Data Memory Low */
#define PSI5_RDM0_24_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056C0u)

/** Alias (User Manual Name) for PSI5_RDM0_24_L.
* To use register names with standard convension, please use PSI5_RDM0_24_L.
*/
#define	PSI5_RDML024	(PSI5_RDM0_24_L)

/** \brief  6CC, Receive Data Memory High */
#define PSI5_RDM0_25_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056CCu)

/** Alias (User Manual Name) for PSI5_RDM0_25_H.
* To use register names with standard convension, please use PSI5_RDM0_25_H.
*/
#define	PSI5_RDMH025	(PSI5_RDM0_25_H)

/** \brief  6C8, Receive Data Memory Low */
#define PSI5_RDM0_25_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056C8u)

/** Alias (User Manual Name) for PSI5_RDM0_25_L.
* To use register names with standard convension, please use PSI5_RDM0_25_L.
*/
#define	PSI5_RDML025	(PSI5_RDM0_25_L)

/** \brief  6D4, Receive Data Memory High */
#define PSI5_RDM0_26_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056D4u)

/** Alias (User Manual Name) for PSI5_RDM0_26_H.
* To use register names with standard convension, please use PSI5_RDM0_26_H.
*/
#define	PSI5_RDMH026	(PSI5_RDM0_26_H)

/** \brief  6D0, Receive Data Memory Low */
#define PSI5_RDM0_26_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056D0u)

/** Alias (User Manual Name) for PSI5_RDM0_26_L.
* To use register names with standard convension, please use PSI5_RDM0_26_L.
*/
#define	PSI5_RDML026	(PSI5_RDM0_26_L)

/** \brief  6DC, Receive Data Memory High */
#define PSI5_RDM0_27_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056DCu)

/** Alias (User Manual Name) for PSI5_RDM0_27_H.
* To use register names with standard convension, please use PSI5_RDM0_27_H.
*/
#define	PSI5_RDMH027	(PSI5_RDM0_27_H)

/** \brief  6D8, Receive Data Memory Low */
#define PSI5_RDM0_27_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056D8u)

/** Alias (User Manual Name) for PSI5_RDM0_27_L.
* To use register names with standard convension, please use PSI5_RDM0_27_L.
*/
#define	PSI5_RDML027	(PSI5_RDM0_27_L)

/** \brief  6E4, Receive Data Memory High */
#define PSI5_RDM0_28_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056E4u)

/** Alias (User Manual Name) for PSI5_RDM0_28_H.
* To use register names with standard convension, please use PSI5_RDM0_28_H.
*/
#define	PSI5_RDMH028	(PSI5_RDM0_28_H)

/** \brief  6E0, Receive Data Memory Low */
#define PSI5_RDM0_28_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056E0u)

/** Alias (User Manual Name) for PSI5_RDM0_28_L.
* To use register names with standard convension, please use PSI5_RDM0_28_L.
*/
#define	PSI5_RDML028	(PSI5_RDM0_28_L)

/** \brief  6EC, Receive Data Memory High */
#define PSI5_RDM0_29_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056ECu)

/** Alias (User Manual Name) for PSI5_RDM0_29_H.
* To use register names with standard convension, please use PSI5_RDM0_29_H.
*/
#define	PSI5_RDMH029	(PSI5_RDM0_29_H)

/** \brief  6E8, Receive Data Memory Low */
#define PSI5_RDM0_29_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056E8u)

/** Alias (User Manual Name) for PSI5_RDM0_29_L.
* To use register names with standard convension, please use PSI5_RDM0_29_L.
*/
#define	PSI5_RDML029	(PSI5_RDM0_29_L)

/** \brief  614, Receive Data Memory High */
#define PSI5_RDM0_2_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005614u)

/** Alias (User Manual Name) for PSI5_RDM0_2_H.
* To use register names with standard convension, please use PSI5_RDM0_2_H.
*/
#define	PSI5_RDMH02	(PSI5_RDM0_2_H)

/** \brief  610, Receive Data Memory Low */
#define PSI5_RDM0_2_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005610u)

/** Alias (User Manual Name) for PSI5_RDM0_2_L.
* To use register names with standard convension, please use PSI5_RDM0_2_L.
*/
#define	PSI5_RDML02	(PSI5_RDM0_2_L)

/** \brief  6F4, Receive Data Memory High */
#define PSI5_RDM0_30_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056F4u)

/** Alias (User Manual Name) for PSI5_RDM0_30_H.
* To use register names with standard convension, please use PSI5_RDM0_30_H.
*/
#define	PSI5_RDMH030	(PSI5_RDM0_30_H)

/** \brief  6F0, Receive Data Memory Low */
#define PSI5_RDM0_30_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056F0u)

/** Alias (User Manual Name) for PSI5_RDM0_30_L.
* To use register names with standard convension, please use PSI5_RDM0_30_L.
*/
#define	PSI5_RDML030	(PSI5_RDM0_30_L)

/** \brief  6FC, Receive Data Memory High */
#define PSI5_RDM0_31_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056FCu)

/** Alias (User Manual Name) for PSI5_RDM0_31_H.
* To use register names with standard convension, please use PSI5_RDM0_31_H.
*/
#define	PSI5_RDMH031	(PSI5_RDM0_31_H)

/** \brief  6F8, Receive Data Memory Low */
#define PSI5_RDM0_31_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056F8u)

/** Alias (User Manual Name) for PSI5_RDM0_31_L.
* To use register names with standard convension, please use PSI5_RDM0_31_L.
*/
#define	PSI5_RDML031	(PSI5_RDM0_31_L)

/** \brief  61C, Receive Data Memory High */
#define PSI5_RDM0_3_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000561Cu)

/** Alias (User Manual Name) for PSI5_RDM0_3_H.
* To use register names with standard convension, please use PSI5_RDM0_3_H.
*/
#define	PSI5_RDMH03	(PSI5_RDM0_3_H)

/** \brief  618, Receive Data Memory Low */
#define PSI5_RDM0_3_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005618u)

/** Alias (User Manual Name) for PSI5_RDM0_3_L.
* To use register names with standard convension, please use PSI5_RDM0_3_L.
*/
#define	PSI5_RDML03	(PSI5_RDM0_3_L)

/** \brief  624, Receive Data Memory High */
#define PSI5_RDM0_4_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005624u)

/** Alias (User Manual Name) for PSI5_RDM0_4_H.
* To use register names with standard convension, please use PSI5_RDM0_4_H.
*/
#define	PSI5_RDMH04	(PSI5_RDM0_4_H)

/** \brief  620, Receive Data Memory Low */
#define PSI5_RDM0_4_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005620u)

/** Alias (User Manual Name) for PSI5_RDM0_4_L.
* To use register names with standard convension, please use PSI5_RDM0_4_L.
*/
#define	PSI5_RDML04	(PSI5_RDM0_4_L)

/** \brief  62C, Receive Data Memory High */
#define PSI5_RDM0_5_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000562Cu)

/** Alias (User Manual Name) for PSI5_RDM0_5_H.
* To use register names with standard convension, please use PSI5_RDM0_5_H.
*/
#define	PSI5_RDMH05	(PSI5_RDM0_5_H)

/** \brief  628, Receive Data Memory Low */
#define PSI5_RDM0_5_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005628u)

/** Alias (User Manual Name) for PSI5_RDM0_5_L.
* To use register names with standard convension, please use PSI5_RDM0_5_L.
*/
#define	PSI5_RDML05	(PSI5_RDM0_5_L)

/** \brief  634, Receive Data Memory High */
#define PSI5_RDM0_6_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005634u)

/** Alias (User Manual Name) for PSI5_RDM0_6_H.
* To use register names with standard convension, please use PSI5_RDM0_6_H.
*/
#define	PSI5_RDMH06	(PSI5_RDM0_6_H)

/** \brief  630, Receive Data Memory Low */
#define PSI5_RDM0_6_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005630u)

/** Alias (User Manual Name) for PSI5_RDM0_6_L.
* To use register names with standard convension, please use PSI5_RDM0_6_L.
*/
#define	PSI5_RDML06	(PSI5_RDM0_6_L)

/** \brief  63C, Receive Data Memory High */
#define PSI5_RDM0_7_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000563Cu)

/** Alias (User Manual Name) for PSI5_RDM0_7_H.
* To use register names with standard convension, please use PSI5_RDM0_7_H.
*/
#define	PSI5_RDMH07	(PSI5_RDM0_7_H)

/** \brief  638, Receive Data Memory Low */
#define PSI5_RDM0_7_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005638u)

/** Alias (User Manual Name) for PSI5_RDM0_7_L.
* To use register names with standard convension, please use PSI5_RDM0_7_L.
*/
#define	PSI5_RDML07	(PSI5_RDM0_7_L)

/** \brief  644, Receive Data Memory High */
#define PSI5_RDM0_8_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005644u)

/** Alias (User Manual Name) for PSI5_RDM0_8_H.
* To use register names with standard convension, please use PSI5_RDM0_8_H.
*/
#define	PSI5_RDMH08	(PSI5_RDM0_8_H)

/** \brief  640, Receive Data Memory Low */
#define PSI5_RDM0_8_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005640u)

/** Alias (User Manual Name) for PSI5_RDM0_8_L.
* To use register names with standard convension, please use PSI5_RDM0_8_L.
*/
#define	PSI5_RDML08	(PSI5_RDM0_8_L)

/** \brief  64C, Receive Data Memory High */
#define PSI5_RDM0_9_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000564Cu)

/** Alias (User Manual Name) for PSI5_RDM0_9_H.
* To use register names with standard convension, please use PSI5_RDM0_9_H.
*/
#define	PSI5_RDMH09	(PSI5_RDM0_9_H)

/** \brief  648, Receive Data Memory Low */
#define PSI5_RDM0_9_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005648u)

/** Alias (User Manual Name) for PSI5_RDM0_9_L.
* To use register names with standard convension, please use PSI5_RDM0_9_L.
*/
#define	PSI5_RDML09	(PSI5_RDM0_9_L)

/** \brief  704, Receive Data Memory High */
#define PSI5_RDM1_0_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005704u)

/** Alias (User Manual Name) for PSI5_RDM1_0_H.
* To use register names with standard convension, please use PSI5_RDM1_0_H.
*/
#define	PSI5_RDMH10	(PSI5_RDM1_0_H)

/** \brief  700, Receive Data Memory Low */
#define PSI5_RDM1_0_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005700u)

/** Alias (User Manual Name) for PSI5_RDM1_0_L.
* To use register names with standard convension, please use PSI5_RDM1_0_L.
*/
#define	PSI5_RDML10	(PSI5_RDM1_0_L)

/** \brief  754, Receive Data Memory High */
#define PSI5_RDM1_10_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005754u)

/** Alias (User Manual Name) for PSI5_RDM1_10_H.
* To use register names with standard convension, please use PSI5_RDM1_10_H.
*/
#define	PSI5_RDMH110	(PSI5_RDM1_10_H)

/** \brief  750, Receive Data Memory Low */
#define PSI5_RDM1_10_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005750u)

/** Alias (User Manual Name) for PSI5_RDM1_10_L.
* To use register names with standard convension, please use PSI5_RDM1_10_L.
*/
#define	PSI5_RDML110	(PSI5_RDM1_10_L)

/** \brief  75C, Receive Data Memory High */
#define PSI5_RDM1_11_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000575Cu)

/** Alias (User Manual Name) for PSI5_RDM1_11_H.
* To use register names with standard convension, please use PSI5_RDM1_11_H.
*/
#define	PSI5_RDMH111	(PSI5_RDM1_11_H)

/** \brief  758, Receive Data Memory Low */
#define PSI5_RDM1_11_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005758u)

/** Alias (User Manual Name) for PSI5_RDM1_11_L.
* To use register names with standard convension, please use PSI5_RDM1_11_L.
*/
#define	PSI5_RDML111	(PSI5_RDM1_11_L)

/** \brief  764, Receive Data Memory High */
#define PSI5_RDM1_12_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005764u)

/** Alias (User Manual Name) for PSI5_RDM1_12_H.
* To use register names with standard convension, please use PSI5_RDM1_12_H.
*/
#define	PSI5_RDMH112	(PSI5_RDM1_12_H)

/** \brief  760, Receive Data Memory Low */
#define PSI5_RDM1_12_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005760u)

/** Alias (User Manual Name) for PSI5_RDM1_12_L.
* To use register names with standard convension, please use PSI5_RDM1_12_L.
*/
#define	PSI5_RDML112	(PSI5_RDM1_12_L)

/** \brief  76C, Receive Data Memory High */
#define PSI5_RDM1_13_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000576Cu)

/** Alias (User Manual Name) for PSI5_RDM1_13_H.
* To use register names with standard convension, please use PSI5_RDM1_13_H.
*/
#define	PSI5_RDMH113	(PSI5_RDM1_13_H)

/** \brief  768, Receive Data Memory Low */
#define PSI5_RDM1_13_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005768u)

/** Alias (User Manual Name) for PSI5_RDM1_13_L.
* To use register names with standard convension, please use PSI5_RDM1_13_L.
*/
#define	PSI5_RDML113	(PSI5_RDM1_13_L)

/** \brief  774, Receive Data Memory High */
#define PSI5_RDM1_14_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005774u)

/** Alias (User Manual Name) for PSI5_RDM1_14_H.
* To use register names with standard convension, please use PSI5_RDM1_14_H.
*/
#define	PSI5_RDMH114	(PSI5_RDM1_14_H)

/** \brief  770, Receive Data Memory Low */
#define PSI5_RDM1_14_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005770u)

/** Alias (User Manual Name) for PSI5_RDM1_14_L.
* To use register names with standard convension, please use PSI5_RDM1_14_L.
*/
#define	PSI5_RDML114	(PSI5_RDM1_14_L)

/** \brief  77C, Receive Data Memory High */
#define PSI5_RDM1_15_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000577Cu)

/** Alias (User Manual Name) for PSI5_RDM1_15_H.
* To use register names with standard convension, please use PSI5_RDM1_15_H.
*/
#define	PSI5_RDMH115	(PSI5_RDM1_15_H)

/** \brief  778, Receive Data Memory Low */
#define PSI5_RDM1_15_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005778u)

/** Alias (User Manual Name) for PSI5_RDM1_15_L.
* To use register names with standard convension, please use PSI5_RDM1_15_L.
*/
#define	PSI5_RDML115	(PSI5_RDM1_15_L)

/** \brief  784, Receive Data Memory High */
#define PSI5_RDM1_16_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005784u)

/** Alias (User Manual Name) for PSI5_RDM1_16_H.
* To use register names with standard convension, please use PSI5_RDM1_16_H.
*/
#define	PSI5_RDMH116	(PSI5_RDM1_16_H)

/** \brief  780, Receive Data Memory Low */
#define PSI5_RDM1_16_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005780u)

/** Alias (User Manual Name) for PSI5_RDM1_16_L.
* To use register names with standard convension, please use PSI5_RDM1_16_L.
*/
#define	PSI5_RDML116	(PSI5_RDM1_16_L)

/** \brief  78C, Receive Data Memory High */
#define PSI5_RDM1_17_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000578Cu)

/** Alias (User Manual Name) for PSI5_RDM1_17_H.
* To use register names with standard convension, please use PSI5_RDM1_17_H.
*/
#define	PSI5_RDMH117	(PSI5_RDM1_17_H)

/** \brief  788, Receive Data Memory Low */
#define PSI5_RDM1_17_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005788u)

/** Alias (User Manual Name) for PSI5_RDM1_17_L.
* To use register names with standard convension, please use PSI5_RDM1_17_L.
*/
#define	PSI5_RDML117	(PSI5_RDM1_17_L)

/** \brief  794, Receive Data Memory High */
#define PSI5_RDM1_18_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005794u)

/** Alias (User Manual Name) for PSI5_RDM1_18_H.
* To use register names with standard convension, please use PSI5_RDM1_18_H.
*/
#define	PSI5_RDMH118	(PSI5_RDM1_18_H)

/** \brief  790, Receive Data Memory Low */
#define PSI5_RDM1_18_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005790u)

/** Alias (User Manual Name) for PSI5_RDM1_18_L.
* To use register names with standard convension, please use PSI5_RDM1_18_L.
*/
#define	PSI5_RDML118	(PSI5_RDM1_18_L)

/** \brief  79C, Receive Data Memory High */
#define PSI5_RDM1_19_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000579Cu)

/** Alias (User Manual Name) for PSI5_RDM1_19_H.
* To use register names with standard convension, please use PSI5_RDM1_19_H.
*/
#define	PSI5_RDMH119	(PSI5_RDM1_19_H)

/** \brief  798, Receive Data Memory Low */
#define PSI5_RDM1_19_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005798u)

/** Alias (User Manual Name) for PSI5_RDM1_19_L.
* To use register names with standard convension, please use PSI5_RDM1_19_L.
*/
#define	PSI5_RDML119	(PSI5_RDM1_19_L)

/** \brief  70C, Receive Data Memory High */
#define PSI5_RDM1_1_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000570Cu)

/** Alias (User Manual Name) for PSI5_RDM1_1_H.
* To use register names with standard convension, please use PSI5_RDM1_1_H.
*/
#define	PSI5_RDMH11	(PSI5_RDM1_1_H)

/** \brief  708, Receive Data Memory Low */
#define PSI5_RDM1_1_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005708u)

/** Alias (User Manual Name) for PSI5_RDM1_1_L.
* To use register names with standard convension, please use PSI5_RDM1_1_L.
*/
#define	PSI5_RDML11	(PSI5_RDM1_1_L)

/** \brief  7A4, Receive Data Memory High */
#define PSI5_RDM1_20_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057A4u)

/** Alias (User Manual Name) for PSI5_RDM1_20_H.
* To use register names with standard convension, please use PSI5_RDM1_20_H.
*/
#define	PSI5_RDMH120	(PSI5_RDM1_20_H)

/** \brief  7A0, Receive Data Memory Low */
#define PSI5_RDM1_20_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057A0u)

/** Alias (User Manual Name) for PSI5_RDM1_20_L.
* To use register names with standard convension, please use PSI5_RDM1_20_L.
*/
#define	PSI5_RDML120	(PSI5_RDM1_20_L)

/** \brief  7AC, Receive Data Memory High */
#define PSI5_RDM1_21_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057ACu)

/** Alias (User Manual Name) for PSI5_RDM1_21_H.
* To use register names with standard convension, please use PSI5_RDM1_21_H.
*/
#define	PSI5_RDMH121	(PSI5_RDM1_21_H)

/** \brief  7A8, Receive Data Memory Low */
#define PSI5_RDM1_21_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057A8u)

/** Alias (User Manual Name) for PSI5_RDM1_21_L.
* To use register names with standard convension, please use PSI5_RDM1_21_L.
*/
#define	PSI5_RDML121	(PSI5_RDM1_21_L)

/** \brief  7B4, Receive Data Memory High */
#define PSI5_RDM1_22_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057B4u)

/** Alias (User Manual Name) for PSI5_RDM1_22_H.
* To use register names with standard convension, please use PSI5_RDM1_22_H.
*/
#define	PSI5_RDMH122	(PSI5_RDM1_22_H)

/** \brief  7B0, Receive Data Memory Low */
#define PSI5_RDM1_22_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057B0u)

/** Alias (User Manual Name) for PSI5_RDM1_22_L.
* To use register names with standard convension, please use PSI5_RDM1_22_L.
*/
#define	PSI5_RDML122	(PSI5_RDM1_22_L)

/** \brief  7BC, Receive Data Memory High */
#define PSI5_RDM1_23_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057BCu)

/** Alias (User Manual Name) for PSI5_RDM1_23_H.
* To use register names with standard convension, please use PSI5_RDM1_23_H.
*/
#define	PSI5_RDMH123	(PSI5_RDM1_23_H)

/** \brief  7B8, Receive Data Memory Low */
#define PSI5_RDM1_23_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057B8u)

/** Alias (User Manual Name) for PSI5_RDM1_23_L.
* To use register names with standard convension, please use PSI5_RDM1_23_L.
*/
#define	PSI5_RDML123	(PSI5_RDM1_23_L)

/** \brief  7C4, Receive Data Memory High */
#define PSI5_RDM1_24_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057C4u)

/** Alias (User Manual Name) for PSI5_RDM1_24_H.
* To use register names with standard convension, please use PSI5_RDM1_24_H.
*/
#define	PSI5_RDMH124	(PSI5_RDM1_24_H)

/** \brief  7C0, Receive Data Memory Low */
#define PSI5_RDM1_24_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057C0u)

/** Alias (User Manual Name) for PSI5_RDM1_24_L.
* To use register names with standard convension, please use PSI5_RDM1_24_L.
*/
#define	PSI5_RDML124	(PSI5_RDM1_24_L)

/** \brief  7CC, Receive Data Memory High */
#define PSI5_RDM1_25_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057CCu)

/** Alias (User Manual Name) for PSI5_RDM1_25_H.
* To use register names with standard convension, please use PSI5_RDM1_25_H.
*/
#define	PSI5_RDMH125	(PSI5_RDM1_25_H)

/** \brief  7C8, Receive Data Memory Low */
#define PSI5_RDM1_25_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057C8u)

/** Alias (User Manual Name) for PSI5_RDM1_25_L.
* To use register names with standard convension, please use PSI5_RDM1_25_L.
*/
#define	PSI5_RDML125	(PSI5_RDM1_25_L)

/** \brief  7D4, Receive Data Memory High */
#define PSI5_RDM1_26_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057D4u)

/** Alias (User Manual Name) for PSI5_RDM1_26_H.
* To use register names with standard convension, please use PSI5_RDM1_26_H.
*/
#define	PSI5_RDMH126	(PSI5_RDM1_26_H)

/** \brief  7D0, Receive Data Memory Low */
#define PSI5_RDM1_26_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057D0u)

/** Alias (User Manual Name) for PSI5_RDM1_26_L.
* To use register names with standard convension, please use PSI5_RDM1_26_L.
*/
#define	PSI5_RDML126	(PSI5_RDM1_26_L)

/** \brief  7DC, Receive Data Memory High */
#define PSI5_RDM1_27_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057DCu)

/** Alias (User Manual Name) for PSI5_RDM1_27_H.
* To use register names with standard convension, please use PSI5_RDM1_27_H.
*/
#define	PSI5_RDMH127	(PSI5_RDM1_27_H)

/** \brief  7D8, Receive Data Memory Low */
#define PSI5_RDM1_27_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057D8u)

/** Alias (User Manual Name) for PSI5_RDM1_27_L.
* To use register names with standard convension, please use PSI5_RDM1_27_L.
*/
#define	PSI5_RDML127	(PSI5_RDM1_27_L)

/** \brief  7E4, Receive Data Memory High */
#define PSI5_RDM1_28_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057E4u)

/** Alias (User Manual Name) for PSI5_RDM1_28_H.
* To use register names with standard convension, please use PSI5_RDM1_28_H.
*/
#define	PSI5_RDMH128	(PSI5_RDM1_28_H)

/** \brief  7E0, Receive Data Memory Low */
#define PSI5_RDM1_28_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057E0u)

/** Alias (User Manual Name) for PSI5_RDM1_28_L.
* To use register names with standard convension, please use PSI5_RDM1_28_L.
*/
#define	PSI5_RDML128	(PSI5_RDM1_28_L)

/** \brief  7EC, Receive Data Memory High */
#define PSI5_RDM1_29_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057ECu)

/** Alias (User Manual Name) for PSI5_RDM1_29_H.
* To use register names with standard convension, please use PSI5_RDM1_29_H.
*/
#define	PSI5_RDMH129	(PSI5_RDM1_29_H)

/** \brief  7E8, Receive Data Memory Low */
#define PSI5_RDM1_29_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057E8u)

/** Alias (User Manual Name) for PSI5_RDM1_29_L.
* To use register names with standard convension, please use PSI5_RDM1_29_L.
*/
#define	PSI5_RDML129	(PSI5_RDM1_29_L)

/** \brief  714, Receive Data Memory High */
#define PSI5_RDM1_2_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005714u)

/** Alias (User Manual Name) for PSI5_RDM1_2_H.
* To use register names with standard convension, please use PSI5_RDM1_2_H.
*/
#define	PSI5_RDMH12	(PSI5_RDM1_2_H)

/** \brief  710, Receive Data Memory Low */
#define PSI5_RDM1_2_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005710u)

/** Alias (User Manual Name) for PSI5_RDM1_2_L.
* To use register names with standard convension, please use PSI5_RDM1_2_L.
*/
#define	PSI5_RDML12	(PSI5_RDM1_2_L)

/** \brief  7F4, Receive Data Memory High */
#define PSI5_RDM1_30_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057F4u)

/** Alias (User Manual Name) for PSI5_RDM1_30_H.
* To use register names with standard convension, please use PSI5_RDM1_30_H.
*/
#define	PSI5_RDMH130	(PSI5_RDM1_30_H)

/** \brief  7F0, Receive Data Memory Low */
#define PSI5_RDM1_30_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057F0u)

/** Alias (User Manual Name) for PSI5_RDM1_30_L.
* To use register names with standard convension, please use PSI5_RDM1_30_L.
*/
#define	PSI5_RDML130	(PSI5_RDM1_30_L)

/** \brief  7FC, Receive Data Memory High */
#define PSI5_RDM1_31_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057FCu)

/** Alias (User Manual Name) for PSI5_RDM1_31_H.
* To use register names with standard convension, please use PSI5_RDM1_31_H.
*/
#define	PSI5_RDMH131	(PSI5_RDM1_31_H)

/** \brief  7F8, Receive Data Memory Low */
#define PSI5_RDM1_31_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057F8u)

/** Alias (User Manual Name) for PSI5_RDM1_31_L.
* To use register names with standard convension, please use PSI5_RDM1_31_L.
*/
#define	PSI5_RDML131	(PSI5_RDM1_31_L)

/** \brief  71C, Receive Data Memory High */
#define PSI5_RDM1_3_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000571Cu)

/** Alias (User Manual Name) for PSI5_RDM1_3_H.
* To use register names with standard convension, please use PSI5_RDM1_3_H.
*/
#define	PSI5_RDMH13	(PSI5_RDM1_3_H)

/** \brief  718, Receive Data Memory Low */
#define PSI5_RDM1_3_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005718u)

/** Alias (User Manual Name) for PSI5_RDM1_3_L.
* To use register names with standard convension, please use PSI5_RDM1_3_L.
*/
#define	PSI5_RDML13	(PSI5_RDM1_3_L)

/** \brief  724, Receive Data Memory High */
#define PSI5_RDM1_4_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005724u)

/** Alias (User Manual Name) for PSI5_RDM1_4_H.
* To use register names with standard convension, please use PSI5_RDM1_4_H.
*/
#define	PSI5_RDMH14	(PSI5_RDM1_4_H)

/** \brief  720, Receive Data Memory Low */
#define PSI5_RDM1_4_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005720u)

/** Alias (User Manual Name) for PSI5_RDM1_4_L.
* To use register names with standard convension, please use PSI5_RDM1_4_L.
*/
#define	PSI5_RDML14	(PSI5_RDM1_4_L)

/** \brief  72C, Receive Data Memory High */
#define PSI5_RDM1_5_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000572Cu)

/** Alias (User Manual Name) for PSI5_RDM1_5_H.
* To use register names with standard convension, please use PSI5_RDM1_5_H.
*/
#define	PSI5_RDMH15	(PSI5_RDM1_5_H)

/** \brief  728, Receive Data Memory Low */
#define PSI5_RDM1_5_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005728u)

/** Alias (User Manual Name) for PSI5_RDM1_5_L.
* To use register names with standard convension, please use PSI5_RDM1_5_L.
*/
#define	PSI5_RDML15	(PSI5_RDM1_5_L)

/** \brief  734, Receive Data Memory High */
#define PSI5_RDM1_6_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005734u)

/** Alias (User Manual Name) for PSI5_RDM1_6_H.
* To use register names with standard convension, please use PSI5_RDM1_6_H.
*/
#define	PSI5_RDMH16	(PSI5_RDM1_6_H)

/** \brief  730, Receive Data Memory Low */
#define PSI5_RDM1_6_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005730u)

/** Alias (User Manual Name) for PSI5_RDM1_6_L.
* To use register names with standard convension, please use PSI5_RDM1_6_L.
*/
#define	PSI5_RDML16	(PSI5_RDM1_6_L)

/** \brief  73C, Receive Data Memory High */
#define PSI5_RDM1_7_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000573Cu)

/** Alias (User Manual Name) for PSI5_RDM1_7_H.
* To use register names with standard convension, please use PSI5_RDM1_7_H.
*/
#define	PSI5_RDMH17	(PSI5_RDM1_7_H)

/** \brief  738, Receive Data Memory Low */
#define PSI5_RDM1_7_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005738u)

/** Alias (User Manual Name) for PSI5_RDM1_7_L.
* To use register names with standard convension, please use PSI5_RDM1_7_L.
*/
#define	PSI5_RDML17	(PSI5_RDM1_7_L)

/** \brief  744, Receive Data Memory High */
#define PSI5_RDM1_8_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005744u)

/** Alias (User Manual Name) for PSI5_RDM1_8_H.
* To use register names with standard convension, please use PSI5_RDM1_8_H.
*/
#define	PSI5_RDMH18	(PSI5_RDM1_8_H)

/** \brief  740, Receive Data Memory Low */
#define PSI5_RDM1_8_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005740u)

/** Alias (User Manual Name) for PSI5_RDM1_8_L.
* To use register names with standard convension, please use PSI5_RDM1_8_L.
*/
#define	PSI5_RDML18	(PSI5_RDM1_8_L)

/** \brief  74C, Receive Data Memory High */
#define PSI5_RDM1_9_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000574Cu)

/** Alias (User Manual Name) for PSI5_RDM1_9_H.
* To use register names with standard convension, please use PSI5_RDM1_9_H.
*/
#define	PSI5_RDMH19	(PSI5_RDM1_9_H)

/** \brief  748, Receive Data Memory Low */
#define PSI5_RDM1_9_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005748u)

/** Alias (User Manual Name) for PSI5_RDM1_9_L.
* To use register names with standard convension, please use PSI5_RDM1_9_L.
*/
#define	PSI5_RDML19	(PSI5_RDM1_9_L)

/** \brief  804, Receive Data Memory High */
#define PSI5_RDM2_0_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005804u)

/** Alias (User Manual Name) for PSI5_RDM2_0_H.
* To use register names with standard convension, please use PSI5_RDM2_0_H.
*/
#define	PSI5_RDMH20	(PSI5_RDM2_0_H)

/** \brief  800, Receive Data Memory Low */
#define PSI5_RDM2_0_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005800u)

/** Alias (User Manual Name) for PSI5_RDM2_0_L.
* To use register names with standard convension, please use PSI5_RDM2_0_L.
*/
#define	PSI5_RDML20	(PSI5_RDM2_0_L)

/** \brief  854, Receive Data Memory High */
#define PSI5_RDM2_10_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005854u)

/** Alias (User Manual Name) for PSI5_RDM2_10_H.
* To use register names with standard convension, please use PSI5_RDM2_10_H.
*/
#define	PSI5_RDMH210	(PSI5_RDM2_10_H)

/** \brief  850, Receive Data Memory Low */
#define PSI5_RDM2_10_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005850u)

/** Alias (User Manual Name) for PSI5_RDM2_10_L.
* To use register names with standard convension, please use PSI5_RDM2_10_L.
*/
#define	PSI5_RDML210	(PSI5_RDM2_10_L)

/** \brief  85C, Receive Data Memory High */
#define PSI5_RDM2_11_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000585Cu)

/** Alias (User Manual Name) for PSI5_RDM2_11_H.
* To use register names with standard convension, please use PSI5_RDM2_11_H.
*/
#define	PSI5_RDMH211	(PSI5_RDM2_11_H)

/** \brief  858, Receive Data Memory Low */
#define PSI5_RDM2_11_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005858u)

/** Alias (User Manual Name) for PSI5_RDM2_11_L.
* To use register names with standard convension, please use PSI5_RDM2_11_L.
*/
#define	PSI5_RDML211	(PSI5_RDM2_11_L)

/** \brief  864, Receive Data Memory High */
#define PSI5_RDM2_12_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005864u)

/** Alias (User Manual Name) for PSI5_RDM2_12_H.
* To use register names with standard convension, please use PSI5_RDM2_12_H.
*/
#define	PSI5_RDMH212	(PSI5_RDM2_12_H)

/** \brief  860, Receive Data Memory Low */
#define PSI5_RDM2_12_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005860u)

/** Alias (User Manual Name) for PSI5_RDM2_12_L.
* To use register names with standard convension, please use PSI5_RDM2_12_L.
*/
#define	PSI5_RDML212	(PSI5_RDM2_12_L)

/** \brief  86C, Receive Data Memory High */
#define PSI5_RDM2_13_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000586Cu)

/** Alias (User Manual Name) for PSI5_RDM2_13_H.
* To use register names with standard convension, please use PSI5_RDM2_13_H.
*/
#define	PSI5_RDMH213	(PSI5_RDM2_13_H)

/** \brief  868, Receive Data Memory Low */
#define PSI5_RDM2_13_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005868u)

/** Alias (User Manual Name) for PSI5_RDM2_13_L.
* To use register names with standard convension, please use PSI5_RDM2_13_L.
*/
#define	PSI5_RDML213	(PSI5_RDM2_13_L)

/** \brief  874, Receive Data Memory High */
#define PSI5_RDM2_14_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005874u)

/** Alias (User Manual Name) for PSI5_RDM2_14_H.
* To use register names with standard convension, please use PSI5_RDM2_14_H.
*/
#define	PSI5_RDMH214	(PSI5_RDM2_14_H)

/** \brief  870, Receive Data Memory Low */
#define PSI5_RDM2_14_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005870u)

/** Alias (User Manual Name) for PSI5_RDM2_14_L.
* To use register names with standard convension, please use PSI5_RDM2_14_L.
*/
#define	PSI5_RDML214	(PSI5_RDM2_14_L)

/** \brief  87C, Receive Data Memory High */
#define PSI5_RDM2_15_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000587Cu)

/** Alias (User Manual Name) for PSI5_RDM2_15_H.
* To use register names with standard convension, please use PSI5_RDM2_15_H.
*/
#define	PSI5_RDMH215	(PSI5_RDM2_15_H)

/** \brief  878, Receive Data Memory Low */
#define PSI5_RDM2_15_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005878u)

/** Alias (User Manual Name) for PSI5_RDM2_15_L.
* To use register names with standard convension, please use PSI5_RDM2_15_L.
*/
#define	PSI5_RDML215	(PSI5_RDM2_15_L)

/** \brief  884, Receive Data Memory High */
#define PSI5_RDM2_16_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005884u)

/** Alias (User Manual Name) for PSI5_RDM2_16_H.
* To use register names with standard convension, please use PSI5_RDM2_16_H.
*/
#define	PSI5_RDMH216	(PSI5_RDM2_16_H)

/** \brief  880, Receive Data Memory Low */
#define PSI5_RDM2_16_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005880u)

/** Alias (User Manual Name) for PSI5_RDM2_16_L.
* To use register names with standard convension, please use PSI5_RDM2_16_L.
*/
#define	PSI5_RDML216	(PSI5_RDM2_16_L)

/** \brief  88C, Receive Data Memory High */
#define PSI5_RDM2_17_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000588Cu)

/** Alias (User Manual Name) for PSI5_RDM2_17_H.
* To use register names with standard convension, please use PSI5_RDM2_17_H.
*/
#define	PSI5_RDMH217	(PSI5_RDM2_17_H)

/** \brief  888, Receive Data Memory Low */
#define PSI5_RDM2_17_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005888u)

/** Alias (User Manual Name) for PSI5_RDM2_17_L.
* To use register names with standard convension, please use PSI5_RDM2_17_L.
*/
#define	PSI5_RDML217	(PSI5_RDM2_17_L)

/** \brief  894, Receive Data Memory High */
#define PSI5_RDM2_18_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005894u)

/** Alias (User Manual Name) for PSI5_RDM2_18_H.
* To use register names with standard convension, please use PSI5_RDM2_18_H.
*/
#define	PSI5_RDMH218	(PSI5_RDM2_18_H)

/** \brief  890, Receive Data Memory Low */
#define PSI5_RDM2_18_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005890u)

/** Alias (User Manual Name) for PSI5_RDM2_18_L.
* To use register names with standard convension, please use PSI5_RDM2_18_L.
*/
#define	PSI5_RDML218	(PSI5_RDM2_18_L)

/** \brief  89C, Receive Data Memory High */
#define PSI5_RDM2_19_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000589Cu)

/** Alias (User Manual Name) for PSI5_RDM2_19_H.
* To use register names with standard convension, please use PSI5_RDM2_19_H.
*/
#define	PSI5_RDMH219	(PSI5_RDM2_19_H)

/** \brief  898, Receive Data Memory Low */
#define PSI5_RDM2_19_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005898u)

/** Alias (User Manual Name) for PSI5_RDM2_19_L.
* To use register names with standard convension, please use PSI5_RDM2_19_L.
*/
#define	PSI5_RDML219	(PSI5_RDM2_19_L)

/** \brief  80C, Receive Data Memory High */
#define PSI5_RDM2_1_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000580Cu)

/** Alias (User Manual Name) for PSI5_RDM2_1_H.
* To use register names with standard convension, please use PSI5_RDM2_1_H.
*/
#define	PSI5_RDMH21	(PSI5_RDM2_1_H)

/** \brief  808, Receive Data Memory Low */
#define PSI5_RDM2_1_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005808u)

/** Alias (User Manual Name) for PSI5_RDM2_1_L.
* To use register names with standard convension, please use PSI5_RDM2_1_L.
*/
#define	PSI5_RDML21	(PSI5_RDM2_1_L)

/** \brief  8A4, Receive Data Memory High */
#define PSI5_RDM2_20_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058A4u)

/** Alias (User Manual Name) for PSI5_RDM2_20_H.
* To use register names with standard convension, please use PSI5_RDM2_20_H.
*/
#define	PSI5_RDMH220	(PSI5_RDM2_20_H)

/** \brief  8A0, Receive Data Memory Low */
#define PSI5_RDM2_20_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058A0u)

/** Alias (User Manual Name) for PSI5_RDM2_20_L.
* To use register names with standard convension, please use PSI5_RDM2_20_L.
*/
#define	PSI5_RDML220	(PSI5_RDM2_20_L)

/** \brief  8AC, Receive Data Memory High */
#define PSI5_RDM2_21_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058ACu)

/** Alias (User Manual Name) for PSI5_RDM2_21_H.
* To use register names with standard convension, please use PSI5_RDM2_21_H.
*/
#define	PSI5_RDMH221	(PSI5_RDM2_21_H)

/** \brief  8A8, Receive Data Memory Low */
#define PSI5_RDM2_21_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058A8u)

/** Alias (User Manual Name) for PSI5_RDM2_21_L.
* To use register names with standard convension, please use PSI5_RDM2_21_L.
*/
#define	PSI5_RDML221	(PSI5_RDM2_21_L)

/** \brief  8B4, Receive Data Memory High */
#define PSI5_RDM2_22_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058B4u)

/** Alias (User Manual Name) for PSI5_RDM2_22_H.
* To use register names with standard convension, please use PSI5_RDM2_22_H.
*/
#define	PSI5_RDMH222	(PSI5_RDM2_22_H)

/** \brief  8B0, Receive Data Memory Low */
#define PSI5_RDM2_22_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058B0u)

/** Alias (User Manual Name) for PSI5_RDM2_22_L.
* To use register names with standard convension, please use PSI5_RDM2_22_L.
*/
#define	PSI5_RDML222	(PSI5_RDM2_22_L)

/** \brief  8BC, Receive Data Memory High */
#define PSI5_RDM2_23_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058BCu)

/** Alias (User Manual Name) for PSI5_RDM2_23_H.
* To use register names with standard convension, please use PSI5_RDM2_23_H.
*/
#define	PSI5_RDMH223	(PSI5_RDM2_23_H)

/** \brief  8B8, Receive Data Memory Low */
#define PSI5_RDM2_23_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058B8u)

/** Alias (User Manual Name) for PSI5_RDM2_23_L.
* To use register names with standard convension, please use PSI5_RDM2_23_L.
*/
#define	PSI5_RDML223	(PSI5_RDM2_23_L)

/** \brief  8C4, Receive Data Memory High */
#define PSI5_RDM2_24_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058C4u)

/** Alias (User Manual Name) for PSI5_RDM2_24_H.
* To use register names with standard convension, please use PSI5_RDM2_24_H.
*/
#define	PSI5_RDMH224	(PSI5_RDM2_24_H)

/** \brief  8C0, Receive Data Memory Low */
#define PSI5_RDM2_24_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058C0u)

/** Alias (User Manual Name) for PSI5_RDM2_24_L.
* To use register names with standard convension, please use PSI5_RDM2_24_L.
*/
#define	PSI5_RDML224	(PSI5_RDM2_24_L)

/** \brief  8CC, Receive Data Memory High */
#define PSI5_RDM2_25_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058CCu)

/** Alias (User Manual Name) for PSI5_RDM2_25_H.
* To use register names with standard convension, please use PSI5_RDM2_25_H.
*/
#define	PSI5_RDMH225	(PSI5_RDM2_25_H)

/** \brief  8C8, Receive Data Memory Low */
#define PSI5_RDM2_25_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058C8u)

/** Alias (User Manual Name) for PSI5_RDM2_25_L.
* To use register names with standard convension, please use PSI5_RDM2_25_L.
*/
#define	PSI5_RDML225	(PSI5_RDM2_25_L)

/** \brief  8D4, Receive Data Memory High */
#define PSI5_RDM2_26_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058D4u)

/** Alias (User Manual Name) for PSI5_RDM2_26_H.
* To use register names with standard convension, please use PSI5_RDM2_26_H.
*/
#define	PSI5_RDMH226	(PSI5_RDM2_26_H)

/** \brief  8D0, Receive Data Memory Low */
#define PSI5_RDM2_26_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058D0u)

/** Alias (User Manual Name) for PSI5_RDM2_26_L.
* To use register names with standard convension, please use PSI5_RDM2_26_L.
*/
#define	PSI5_RDML226	(PSI5_RDM2_26_L)

/** \brief  8DC, Receive Data Memory High */
#define PSI5_RDM2_27_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058DCu)

/** Alias (User Manual Name) for PSI5_RDM2_27_H.
* To use register names with standard convension, please use PSI5_RDM2_27_H.
*/
#define	PSI5_RDMH227	(PSI5_RDM2_27_H)

/** \brief  8D8, Receive Data Memory Low */
#define PSI5_RDM2_27_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058D8u)

/** Alias (User Manual Name) for PSI5_RDM2_27_L.
* To use register names with standard convension, please use PSI5_RDM2_27_L.
*/
#define	PSI5_RDML227	(PSI5_RDM2_27_L)

/** \brief  8E4, Receive Data Memory High */
#define PSI5_RDM2_28_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058E4u)

/** Alias (User Manual Name) for PSI5_RDM2_28_H.
* To use register names with standard convension, please use PSI5_RDM2_28_H.
*/
#define	PSI5_RDMH228	(PSI5_RDM2_28_H)

/** \brief  8E0, Receive Data Memory Low */
#define PSI5_RDM2_28_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058E0u)

/** Alias (User Manual Name) for PSI5_RDM2_28_L.
* To use register names with standard convension, please use PSI5_RDM2_28_L.
*/
#define	PSI5_RDML228	(PSI5_RDM2_28_L)

/** \brief  8EC, Receive Data Memory High */
#define PSI5_RDM2_29_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058ECu)

/** Alias (User Manual Name) for PSI5_RDM2_29_H.
* To use register names with standard convension, please use PSI5_RDM2_29_H.
*/
#define	PSI5_RDMH229	(PSI5_RDM2_29_H)

/** \brief  8E8, Receive Data Memory Low */
#define PSI5_RDM2_29_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058E8u)

/** Alias (User Manual Name) for PSI5_RDM2_29_L.
* To use register names with standard convension, please use PSI5_RDM2_29_L.
*/
#define	PSI5_RDML229	(PSI5_RDM2_29_L)

/** \brief  814, Receive Data Memory High */
#define PSI5_RDM2_2_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005814u)

/** Alias (User Manual Name) for PSI5_RDM2_2_H.
* To use register names with standard convension, please use PSI5_RDM2_2_H.
*/
#define	PSI5_RDMH22	(PSI5_RDM2_2_H)

/** \brief  810, Receive Data Memory Low */
#define PSI5_RDM2_2_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005810u)

/** Alias (User Manual Name) for PSI5_RDM2_2_L.
* To use register names with standard convension, please use PSI5_RDM2_2_L.
*/
#define	PSI5_RDML22	(PSI5_RDM2_2_L)

/** \brief  8F4, Receive Data Memory High */
#define PSI5_RDM2_30_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058F4u)

/** Alias (User Manual Name) for PSI5_RDM2_30_H.
* To use register names with standard convension, please use PSI5_RDM2_30_H.
*/
#define	PSI5_RDMH230	(PSI5_RDM2_30_H)

/** \brief  8F0, Receive Data Memory Low */
#define PSI5_RDM2_30_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058F0u)

/** Alias (User Manual Name) for PSI5_RDM2_30_L.
* To use register names with standard convension, please use PSI5_RDM2_30_L.
*/
#define	PSI5_RDML230	(PSI5_RDM2_30_L)

/** \brief  8FC, Receive Data Memory High */
#define PSI5_RDM2_31_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058FCu)

/** Alias (User Manual Name) for PSI5_RDM2_31_H.
* To use register names with standard convension, please use PSI5_RDM2_31_H.
*/
#define	PSI5_RDMH231	(PSI5_RDM2_31_H)

/** \brief  8F8, Receive Data Memory Low */
#define PSI5_RDM2_31_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058F8u)

/** Alias (User Manual Name) for PSI5_RDM2_31_L.
* To use register names with standard convension, please use PSI5_RDM2_31_L.
*/
#define	PSI5_RDML231	(PSI5_RDM2_31_L)

/** \brief  81C, Receive Data Memory High */
#define PSI5_RDM2_3_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000581Cu)

/** Alias (User Manual Name) for PSI5_RDM2_3_H.
* To use register names with standard convension, please use PSI5_RDM2_3_H.
*/
#define	PSI5_RDMH23	(PSI5_RDM2_3_H)

/** \brief  818, Receive Data Memory Low */
#define PSI5_RDM2_3_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005818u)

/** Alias (User Manual Name) for PSI5_RDM2_3_L.
* To use register names with standard convension, please use PSI5_RDM2_3_L.
*/
#define	PSI5_RDML23	(PSI5_RDM2_3_L)

/** \brief  824, Receive Data Memory High */
#define PSI5_RDM2_4_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005824u)

/** Alias (User Manual Name) for PSI5_RDM2_4_H.
* To use register names with standard convension, please use PSI5_RDM2_4_H.
*/
#define	PSI5_RDMH24	(PSI5_RDM2_4_H)

/** \brief  820, Receive Data Memory Low */
#define PSI5_RDM2_4_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005820u)

/** Alias (User Manual Name) for PSI5_RDM2_4_L.
* To use register names with standard convension, please use PSI5_RDM2_4_L.
*/
#define	PSI5_RDML24	(PSI5_RDM2_4_L)

/** \brief  82C, Receive Data Memory High */
#define PSI5_RDM2_5_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000582Cu)

/** Alias (User Manual Name) for PSI5_RDM2_5_H.
* To use register names with standard convension, please use PSI5_RDM2_5_H.
*/
#define	PSI5_RDMH25	(PSI5_RDM2_5_H)

/** \brief  828, Receive Data Memory Low */
#define PSI5_RDM2_5_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005828u)

/** Alias (User Manual Name) for PSI5_RDM2_5_L.
* To use register names with standard convension, please use PSI5_RDM2_5_L.
*/
#define	PSI5_RDML25	(PSI5_RDM2_5_L)

/** \brief  834, Receive Data Memory High */
#define PSI5_RDM2_6_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005834u)

/** Alias (User Manual Name) for PSI5_RDM2_6_H.
* To use register names with standard convension, please use PSI5_RDM2_6_H.
*/
#define	PSI5_RDMH26	(PSI5_RDM2_6_H)

/** \brief  830, Receive Data Memory Low */
#define PSI5_RDM2_6_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005830u)

/** Alias (User Manual Name) for PSI5_RDM2_6_L.
* To use register names with standard convension, please use PSI5_RDM2_6_L.
*/
#define	PSI5_RDML26	(PSI5_RDM2_6_L)

/** \brief  83C, Receive Data Memory High */
#define PSI5_RDM2_7_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000583Cu)

/** Alias (User Manual Name) for PSI5_RDM2_7_H.
* To use register names with standard convension, please use PSI5_RDM2_7_H.
*/
#define	PSI5_RDMH27	(PSI5_RDM2_7_H)

/** \brief  838, Receive Data Memory Low */
#define PSI5_RDM2_7_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005838u)

/** Alias (User Manual Name) for PSI5_RDM2_7_L.
* To use register names with standard convension, please use PSI5_RDM2_7_L.
*/
#define	PSI5_RDML27	(PSI5_RDM2_7_L)

/** \brief  844, Receive Data Memory High */
#define PSI5_RDM2_8_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005844u)

/** Alias (User Manual Name) for PSI5_RDM2_8_H.
* To use register names with standard convension, please use PSI5_RDM2_8_H.
*/
#define	PSI5_RDMH28	(PSI5_RDM2_8_H)

/** \brief  840, Receive Data Memory Low */
#define PSI5_RDM2_8_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005840u)

/** Alias (User Manual Name) for PSI5_RDM2_8_L.
* To use register names with standard convension, please use PSI5_RDM2_8_L.
*/
#define	PSI5_RDML28	(PSI5_RDM2_8_L)

/** \brief  84C, Receive Data Memory High */
#define PSI5_RDM2_9_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000584Cu)

/** Alias (User Manual Name) for PSI5_RDM2_9_H.
* To use register names with standard convension, please use PSI5_RDM2_9_H.
*/
#define	PSI5_RDMH29	(PSI5_RDM2_9_H)

/** \brief  848, Receive Data Memory Low */
#define PSI5_RDM2_9_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005848u)

/** Alias (User Manual Name) for PSI5_RDM2_9_L.
* To use register names with standard convension, please use PSI5_RDM2_9_L.
*/
#define	PSI5_RDML29	(PSI5_RDM2_9_L)

/** \brief  3E4, Receive FIFO Control Register */
#define PSI5_RFC0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RFC*)0xF00053E4u)

/** \brief  3E8, Receive FIFO Control Register */
#define PSI5_RFC1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RFC*)0xF00053E8u)

/** \brief  3EC, Receive FIFO Control Register */
#define PSI5_RFC2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RFC*)0xF00053ECu)

/** \brief  560, RMIOV Clear Register */
#define PSI5_RMICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMICLR*)0xF0005560u)

/** \brief  564, RMIOV Clear Register */
#define PSI5_RMICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMICLR*)0xF0005564u)

/** \brief  568, RMIOV Clear Register */
#define PSI5_RMICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMICLR*)0xF0005568u)

/** \brief  420, RMI Overview Register */
#define PSI5_RMIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMIOV*)0xF0005420u)

/** \brief  424, RMI Overview Register */
#define PSI5_RMIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMIOV*)0xF0005424u)

/** \brief  428, RMI Overview Register */
#define PSI5_RMIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMIOV*)0xF0005428u)

/** \brief  4C0, RMIOV Set Register */
#define PSI5_RMISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMISET*)0xF00054C0u)

/** \brief  4C4, RMIOV Set Register */
#define PSI5_RMISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMISET*)0xF00054C4u)

/** \brief  4C8, RMIOV Set Register */
#define PSI5_RMISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMISET*)0xF00054C8u)

/** \brief  54C, RSIOV Clear Register */
#define PSI5_RSICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSICLR*)0xF000554Cu)

/** \brief  550, RSIOV Clear Register */
#define PSI5_RSICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSICLR*)0xF0005550u)

/** \brief  554, RSIOV Clear Register */
#define PSI5_RSICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSICLR*)0xF0005554u)

/** \brief  40C, RSI Overview Register */
#define PSI5_RSIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSIOV*)0xF000540Cu)

/** \brief  410, RSI Overview Register */
#define PSI5_RSIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSIOV*)0xF0005410u)

/** \brief  414, RSI Overview Register */
#define PSI5_RSIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSIOV*)0xF0005414u)

/** \brief  4AC, RSIOV Set Register */
#define PSI5_RSISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSISET*)0xF00054ACu)

/** \brief  4B0, RSIOV Set Register */
#define PSI5_RSISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSISET*)0xF00054B0u)

/** \brief  4B4, RSIOV Set Register */
#define PSI5_RSISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSISET*)0xF00054B4u)

/** \brief  588, TEIOV Clear Register */
#define PSI5_TEICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEICLR*)0xF0005588u)

/** \brief  58C, TEIOV Clear Register */
#define PSI5_TEICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEICLR*)0xF000558Cu)

/** \brief  590, TEIOV Clear Register */
#define PSI5_TEICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEICLR*)0xF0005590u)

/** \brief  448, TEI Overview Register */
#define PSI5_TEIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEIOV*)0xF0005448u)

/** \brief  44C, TEI Overview Register */
#define PSI5_TEIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEIOV*)0xF000544Cu)

/** \brief  450, TEI Overview Register */
#define PSI5_TEIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEIOV*)0xF0005450u)

/** \brief  4E8, TEIOV Set Register */
#define PSI5_TEISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEISET*)0xF00054E8u)

/** \brief  4EC, TEIOV Set Register */
#define PSI5_TEISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEISET*)0xF00054ECu)

/** \brief  4F0, TEIOV Set Register */
#define PSI5_TEISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEISET*)0xF00054F0u)

/** \brief  1C, Time Stamp Register A */
#define PSI5_TSRA /*lint --e(923)*/ (*(volatile Ifx_PSI5_TSR*)0xF000501Cu)

/** \brief  20, Time Stamp Register B */
#define PSI5_TSRB /*lint --e(923)*/ (*(volatile Ifx_PSI5_TSR*)0xF0005020u)

/** \brief  24, Time Stamp Register C */
#define PSI5_TSRC /*lint --e(923)*/ (*(volatile Ifx_PSI5_TSR*)0xF0005024u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXPSI5_REG_H */