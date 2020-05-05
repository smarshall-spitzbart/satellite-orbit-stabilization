/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* I2C_1 */
.set I2C_1_I2C_FF__ADR, CYREG_I2C_ADR
.set I2C_1_I2C_FF__CFG, CYREG_I2C_CFG
.set I2C_1_I2C_FF__CLK_DIV1, CYREG_I2C_CLK_DIV1
.set I2C_1_I2C_FF__CLK_DIV2, CYREG_I2C_CLK_DIV2
.set I2C_1_I2C_FF__CSR, CYREG_I2C_CSR
.set I2C_1_I2C_FF__D, CYREG_I2C_D
.set I2C_1_I2C_FF__MCSR, CYREG_I2C_MCSR
.set I2C_1_I2C_FF__PM_ACT_CFG, CYREG_PM_ACT_CFG5
.set I2C_1_I2C_FF__PM_ACT_MSK, 0x04
.set I2C_1_I2C_FF__PM_STBY_CFG, CYREG_PM_STBY_CFG5
.set I2C_1_I2C_FF__PM_STBY_MSK, 0x04
.set I2C_1_I2C_FF__TMOUT_CFG0, CYREG_I2C_TMOUT_CFG0
.set I2C_1_I2C_FF__TMOUT_CFG1, CYREG_I2C_TMOUT_CFG1
.set I2C_1_I2C_FF__TMOUT_CSR, CYREG_I2C_TMOUT_CSR
.set I2C_1_I2C_FF__TMOUT_SR, CYREG_I2C_TMOUT_SR
.set I2C_1_I2C_FF__XCFG, CYREG_I2C_XCFG
.set I2C_1_I2C_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set I2C_1_I2C_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set I2C_1_I2C_IRQ__INTC_MASK, 0x8000
.set I2C_1_I2C_IRQ__INTC_NUMBER, 15
.set I2C_1_I2C_IRQ__INTC_PRIOR_NUM, 7
.set I2C_1_I2C_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_15
.set I2C_1_I2C_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set I2C_1_I2C_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* SCL_1 */
.set SCL_1__0__INTTYPE, CYREG_PICU12_INTTYPE0
.set SCL_1__0__MASK, 0x01
.set SCL_1__0__PC, CYREG_PRT12_PC0
.set SCL_1__0__PORT, 12
.set SCL_1__0__SHIFT, 0
.set SCL_1__AG, CYREG_PRT12_AG
.set SCL_1__BIE, CYREG_PRT12_BIE
.set SCL_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SCL_1__BYP, CYREG_PRT12_BYP
.set SCL_1__DM0, CYREG_PRT12_DM0
.set SCL_1__DM1, CYREG_PRT12_DM1
.set SCL_1__DM2, CYREG_PRT12_DM2
.set SCL_1__DR, CYREG_PRT12_DR
.set SCL_1__INP_DIS, CYREG_PRT12_INP_DIS
.set SCL_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SCL_1__MASK, 0x01
.set SCL_1__PORT, 12
.set SCL_1__PRT, CYREG_PRT12_PRT
.set SCL_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SCL_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SCL_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SCL_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SCL_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SCL_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SCL_1__PS, CYREG_PRT12_PS
.set SCL_1__SHIFT, 0
.set SCL_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SCL_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SCL_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SCL_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SCL_1__SLW, CYREG_PRT12_SLW

/* SDA_1 */
.set SDA_1__0__INTTYPE, CYREG_PICU12_INTTYPE1
.set SDA_1__0__MASK, 0x02
.set SDA_1__0__PC, CYREG_PRT12_PC1
.set SDA_1__0__PORT, 12
.set SDA_1__0__SHIFT, 1
.set SDA_1__AG, CYREG_PRT12_AG
.set SDA_1__BIE, CYREG_PRT12_BIE
.set SDA_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SDA_1__BYP, CYREG_PRT12_BYP
.set SDA_1__DM0, CYREG_PRT12_DM0
.set SDA_1__DM1, CYREG_PRT12_DM1
.set SDA_1__DM2, CYREG_PRT12_DM2
.set SDA_1__DR, CYREG_PRT12_DR
.set SDA_1__INP_DIS, CYREG_PRT12_INP_DIS
.set SDA_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SDA_1__MASK, 0x02
.set SDA_1__PORT, 12
.set SDA_1__PRT, CYREG_PRT12_PRT
.set SDA_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SDA_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SDA_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SDA_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SDA_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SDA_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SDA_1__PS, CYREG_PRT12_PS
.set SDA_1__SHIFT, 1
.set SDA_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SDA_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SDA_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SDA_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SDA_1__SLW, CYREG_PRT12_SLW

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 18
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 18
.set CYDEV_CHIP_MEMBER_4D, 13
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 19
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 17
.set CYDEV_CHIP_MEMBER_4I, 23
.set CYDEV_CHIP_MEMBER_4J, 14
.set CYDEV_CHIP_MEMBER_4K, 15
.set CYDEV_CHIP_MEMBER_4L, 22
.set CYDEV_CHIP_MEMBER_4M, 21
.set CYDEV_CHIP_MEMBER_4N, 10
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 20
.set CYDEV_CHIP_MEMBER_4Q, 12
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 11
.set CYDEV_CHIP_MEMBER_4T, 9
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 16
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 24
.set CYDEV_CHIP_MEMBER_FM3, 28
.set CYDEV_CHIP_MEMBER_FM4, 29
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 26
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 27
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00008000
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif