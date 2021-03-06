;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.4
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; Rx_uart
Rx_uart__0__INTTYPE EQU CYREG_PICU12_INTTYPE6
Rx_uart__0__MASK EQU 0x40
Rx_uart__0__PC EQU CYREG_PRT12_PC6
Rx_uart__0__PORT EQU 12
Rx_uart__0__SHIFT EQU 6
Rx_uart__AG EQU CYREG_PRT12_AG
Rx_uart__BIE EQU CYREG_PRT12_BIE
Rx_uart__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Rx_uart__BYP EQU CYREG_PRT12_BYP
Rx_uart__DM0 EQU CYREG_PRT12_DM0
Rx_uart__DM1 EQU CYREG_PRT12_DM1
Rx_uart__DM2 EQU CYREG_PRT12_DM2
Rx_uart__DR EQU CYREG_PRT12_DR
Rx_uart__INP_DIS EQU CYREG_PRT12_INP_DIS
Rx_uart__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Rx_uart__MASK EQU 0x40
Rx_uart__PORT EQU 12
Rx_uart__PRT EQU CYREG_PRT12_PRT
Rx_uart__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Rx_uart__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Rx_uart__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Rx_uart__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Rx_uart__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Rx_uart__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Rx_uart__PS EQU CYREG_PRT12_PS
Rx_uart__SHIFT EQU 6
Rx_uart__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Rx_uart__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Rx_uart__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Rx_uart__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Rx_uart__SLW EQU CYREG_PRT12_SLW

; Tx_uart
Tx_uart__0__INTTYPE EQU CYREG_PICU12_INTTYPE7
Tx_uart__0__MASK EQU 0x80
Tx_uart__0__PC EQU CYREG_PRT12_PC7
Tx_uart__0__PORT EQU 12
Tx_uart__0__SHIFT EQU 7
Tx_uart__AG EQU CYREG_PRT12_AG
Tx_uart__BIE EQU CYREG_PRT12_BIE
Tx_uart__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Tx_uart__BYP EQU CYREG_PRT12_BYP
Tx_uart__DM0 EQU CYREG_PRT12_DM0
Tx_uart__DM1 EQU CYREG_PRT12_DM1
Tx_uart__DM2 EQU CYREG_PRT12_DM2
Tx_uart__DR EQU CYREG_PRT12_DR
Tx_uart__INP_DIS EQU CYREG_PRT12_INP_DIS
Tx_uart__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Tx_uart__MASK EQU 0x80
Tx_uart__PORT EQU 12
Tx_uart__PRT EQU CYREG_PRT12_PRT
Tx_uart__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Tx_uart__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Tx_uart__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Tx_uart__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Tx_uart__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Tx_uart__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Tx_uart__PS EQU CYREG_PRT12_PS
Tx_uart__SHIFT EQU 7
Tx_uart__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Tx_uart__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Tx_uart__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Tx_uart__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Tx_uart__SLW EQU CYREG_PRT12_SLW

; PWM_Engine
PWM_Engine_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB08_09_ACTL
PWM_Engine_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB08_09_CTL
PWM_Engine_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB08_09_CTL
PWM_Engine_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB08_09_CTL
PWM_Engine_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB08_09_CTL
PWM_Engine_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB08_09_MSK
PWM_Engine_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB08_09_MSK
PWM_Engine_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB08_09_MSK
PWM_Engine_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB08_09_MSK
PWM_Engine_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_Engine_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_Engine_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB08_ACTL
PWM_Engine_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB08_CTL
PWM_Engine_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB08_ST_CTL
PWM_Engine_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B0_UDB08_CTL
PWM_Engine_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB08_ST_CTL
PWM_Engine_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_Engine_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB08_MSK_ACTL
PWM_Engine_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB08_MSK_ACTL
PWM_Engine_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB08_MSK
PWM_Engine_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_Engine_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_Engine_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB08_09_ACTL
PWM_Engine_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB08_09_ST
PWM_Engine_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_Engine_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_Engine_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_Engine_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_Engine_PWMUDB_genblk8_stsreg__MASK EQU 0x0D
PWM_Engine_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_B0_UDB08_MSK
PWM_Engine_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB08_MSK_ACTL
PWM_Engine_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB08_MSK_ACTL
PWM_Engine_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB08_ACTL
PWM_Engine_PWMUDB_genblk8_stsreg__STATUS_CNT_REG EQU CYREG_B0_UDB08_ST_CTL
PWM_Engine_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG EQU CYREG_B0_UDB08_ST_CTL
PWM_Engine_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_B0_UDB08_ST
PWM_Engine_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB08_09_A0
PWM_Engine_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB08_09_A1
PWM_Engine_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB08_09_D0
PWM_Engine_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB08_09_D1
PWM_Engine_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB08_09_ACTL
PWM_Engine_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB08_09_F0
PWM_Engine_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB08_09_F1
PWM_Engine_PWMUDB_sP8_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB08_A0_A1
PWM_Engine_PWMUDB_sP8_pwmdp_u0__A0_REG EQU CYREG_B0_UDB08_A0
PWM_Engine_PWMUDB_sP8_pwmdp_u0__A1_REG EQU CYREG_B0_UDB08_A1
PWM_Engine_PWMUDB_sP8_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB08_D0_D1
PWM_Engine_PWMUDB_sP8_pwmdp_u0__D0_REG EQU CYREG_B0_UDB08_D0
PWM_Engine_PWMUDB_sP8_pwmdp_u0__D1_REG EQU CYREG_B0_UDB08_D1
PWM_Engine_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB08_ACTL
PWM_Engine_PWMUDB_sP8_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB08_F0_F1
PWM_Engine_PWMUDB_sP8_pwmdp_u0__F0_REG EQU CYREG_B0_UDB08_F0
PWM_Engine_PWMUDB_sP8_pwmdp_u0__F1_REG EQU CYREG_B0_UDB08_F1
PWM_Engine_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB08_MSK_ACTL
PWM_Engine_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB08_MSK_ACTL

; Pin_RedLed
Pin_RedLed__0__INTTYPE EQU CYREG_PICU0_INTTYPE6
Pin_RedLed__0__MASK EQU 0x40
Pin_RedLed__0__PC EQU CYREG_PRT0_PC6
Pin_RedLed__0__PORT EQU 0
Pin_RedLed__0__SHIFT EQU 6
Pin_RedLed__AG EQU CYREG_PRT0_AG
Pin_RedLed__AMUX EQU CYREG_PRT0_AMUX
Pin_RedLed__BIE EQU CYREG_PRT0_BIE
Pin_RedLed__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_RedLed__BYP EQU CYREG_PRT0_BYP
Pin_RedLed__CTL EQU CYREG_PRT0_CTL
Pin_RedLed__DM0 EQU CYREG_PRT0_DM0
Pin_RedLed__DM1 EQU CYREG_PRT0_DM1
Pin_RedLed__DM2 EQU CYREG_PRT0_DM2
Pin_RedLed__DR EQU CYREG_PRT0_DR
Pin_RedLed__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_RedLed__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_RedLed__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_RedLed__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_RedLed__MASK EQU 0x40
Pin_RedLed__PORT EQU 0
Pin_RedLed__PRT EQU CYREG_PRT0_PRT
Pin_RedLed__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_RedLed__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_RedLed__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_RedLed__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_RedLed__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_RedLed__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_RedLed__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_RedLed__PS EQU CYREG_PRT0_PS
Pin_RedLed__SHIFT EQU 6
Pin_RedLed__SLW EQU CYREG_PRT0_SLW

; ADC_JoyStick
ADC_JoyStick_ADC_SAR__CLK EQU CYREG_SAR0_CLK
ADC_JoyStick_ADC_SAR__CSR0 EQU CYREG_SAR0_CSR0
ADC_JoyStick_ADC_SAR__CSR1 EQU CYREG_SAR0_CSR1
ADC_JoyStick_ADC_SAR__CSR2 EQU CYREG_SAR0_CSR2
ADC_JoyStick_ADC_SAR__CSR3 EQU CYREG_SAR0_CSR3
ADC_JoyStick_ADC_SAR__CSR4 EQU CYREG_SAR0_CSR4
ADC_JoyStick_ADC_SAR__CSR5 EQU CYREG_SAR0_CSR5
ADC_JoyStick_ADC_SAR__CSR6 EQU CYREG_SAR0_CSR6
ADC_JoyStick_ADC_SAR__PM_ACT_CFG EQU CYREG_PM_ACT_CFG11
ADC_JoyStick_ADC_SAR__PM_ACT_MSK EQU 0x01
ADC_JoyStick_ADC_SAR__PM_STBY_CFG EQU CYREG_PM_STBY_CFG11
ADC_JoyStick_ADC_SAR__PM_STBY_MSK EQU 0x01
ADC_JoyStick_ADC_SAR__SW0 EQU CYREG_SAR0_SW0
ADC_JoyStick_ADC_SAR__SW2 EQU CYREG_SAR0_SW2
ADC_JoyStick_ADC_SAR__SW3 EQU CYREG_SAR0_SW3
ADC_JoyStick_ADC_SAR__SW4 EQU CYREG_SAR0_SW4
ADC_JoyStick_ADC_SAR__SW6 EQU CYREG_SAR0_SW6
ADC_JoyStick_ADC_SAR__TR0 EQU CYREG_SAR0_TR0
ADC_JoyStick_ADC_SAR__WRK0 EQU CYREG_SAR0_WRK0
ADC_JoyStick_ADC_SAR__WRK1 EQU CYREG_SAR0_WRK1
ADC_JoyStick_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ADC_JoyStick_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ADC_JoyStick_IRQ__INTC_MASK EQU 0x01
ADC_JoyStick_IRQ__INTC_NUMBER EQU 0
ADC_JoyStick_IRQ__INTC_PRIOR_NUM EQU 7
ADC_JoyStick_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
ADC_JoyStick_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ADC_JoyStick_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
ADC_JoyStick_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
ADC_JoyStick_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
ADC_JoyStick_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
ADC_JoyStick_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
ADC_JoyStick_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
ADC_JoyStick_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
ADC_JoyStick_theACLK__INDEX EQU 0x00
ADC_JoyStick_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
ADC_JoyStick_theACLK__PM_ACT_MSK EQU 0x01
ADC_JoyStick_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
ADC_JoyStick_theACLK__PM_STBY_MSK EQU 0x01

; Pin_RGB_Green
Pin_RGB_Green__0__INTTYPE EQU CYREG_PICU2_INTTYPE4
Pin_RGB_Green__0__MASK EQU 0x10
Pin_RGB_Green__0__PC EQU CYREG_PRT2_PC4
Pin_RGB_Green__0__PORT EQU 2
Pin_RGB_Green__0__SHIFT EQU 4
Pin_RGB_Green__AG EQU CYREG_PRT2_AG
Pin_RGB_Green__AMUX EQU CYREG_PRT2_AMUX
Pin_RGB_Green__BIE EQU CYREG_PRT2_BIE
Pin_RGB_Green__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Pin_RGB_Green__BYP EQU CYREG_PRT2_BYP
Pin_RGB_Green__CTL EQU CYREG_PRT2_CTL
Pin_RGB_Green__DM0 EQU CYREG_PRT2_DM0
Pin_RGB_Green__DM1 EQU CYREG_PRT2_DM1
Pin_RGB_Green__DM2 EQU CYREG_PRT2_DM2
Pin_RGB_Green__DR EQU CYREG_PRT2_DR
Pin_RGB_Green__INP_DIS EQU CYREG_PRT2_INP_DIS
Pin_RGB_Green__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Pin_RGB_Green__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Pin_RGB_Green__LCD_EN EQU CYREG_PRT2_LCD_EN
Pin_RGB_Green__MASK EQU 0x10
Pin_RGB_Green__PORT EQU 2
Pin_RGB_Green__PRT EQU CYREG_PRT2_PRT
Pin_RGB_Green__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Pin_RGB_Green__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Pin_RGB_Green__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Pin_RGB_Green__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Pin_RGB_Green__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Pin_RGB_Green__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Pin_RGB_Green__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Pin_RGB_Green__PS EQU CYREG_PRT2_PS
Pin_RGB_Green__SHIFT EQU 4
Pin_RGB_Green__SLW EQU CYREG_PRT2_SLW

; Pin_WDGButton
Pin_WDGButton__0__INTTYPE EQU CYREG_PICU0_INTTYPE3
Pin_WDGButton__0__MASK EQU 0x08
Pin_WDGButton__0__PC EQU CYREG_PRT0_PC3
Pin_WDGButton__0__PORT EQU 0
Pin_WDGButton__0__SHIFT EQU 3
Pin_WDGButton__AG EQU CYREG_PRT0_AG
Pin_WDGButton__AMUX EQU CYREG_PRT0_AMUX
Pin_WDGButton__BIE EQU CYREG_PRT0_BIE
Pin_WDGButton__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_WDGButton__BYP EQU CYREG_PRT0_BYP
Pin_WDGButton__CTL EQU CYREG_PRT0_CTL
Pin_WDGButton__DM0 EQU CYREG_PRT0_DM0
Pin_WDGButton__DM1 EQU CYREG_PRT0_DM1
Pin_WDGButton__DM2 EQU CYREG_PRT0_DM2
Pin_WDGButton__DR EQU CYREG_PRT0_DR
Pin_WDGButton__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_WDGButton__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_WDGButton__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_WDGButton__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_WDGButton__MASK EQU 0x08
Pin_WDGButton__PORT EQU 0
Pin_WDGButton__PRT EQU CYREG_PRT0_PRT
Pin_WDGButton__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_WDGButton__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_WDGButton__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_WDGButton__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_WDGButton__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_WDGButton__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_WDGButton__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_WDGButton__PS EQU CYREG_PRT0_PS
Pin_WDGButton__SHIFT EQU 3
Pin_WDGButton__SLW EQU CYREG_PRT0_SLW

; UART_Joystick
UART_Joystick_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
UART_Joystick_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB09_10_CTL
UART_Joystick_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB09_10_CTL
UART_Joystick_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB09_10_CTL
UART_Joystick_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB09_10_CTL
UART_Joystick_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB09_10_MSK
UART_Joystick_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB09_10_MSK
UART_Joystick_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB09_10_MSK
UART_Joystick_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB09_10_MSK
UART_Joystick_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
UART_Joystick_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B1_UDB09_CTL
UART_Joystick_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B1_UDB09_ST_CTL
UART_Joystick_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B1_UDB09_CTL
UART_Joystick_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B1_UDB09_ST_CTL
UART_Joystick_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
UART_Joystick_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
UART_Joystick_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B1_UDB09_MSK
UART_Joystick_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
UART_Joystick_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B1_UDB09_10_ST
UART_Joystick_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B1_UDB09_MSK
UART_Joystick_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
UART_Joystick_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
UART_Joystick_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
UART_Joystick_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B1_UDB09_ST_CTL
UART_Joystick_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B1_UDB09_ST_CTL
UART_Joystick_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B1_UDB09_ST
UART_Joystick_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B1_UDB09_10_A0
UART_Joystick_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B1_UDB09_10_A1
UART_Joystick_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B1_UDB09_10_D0
UART_Joystick_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B1_UDB09_10_D1
UART_Joystick_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
UART_Joystick_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B1_UDB09_10_F0
UART_Joystick_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B1_UDB09_10_F1
UART_Joystick_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B1_UDB09_A0_A1
UART_Joystick_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B1_UDB09_A0
UART_Joystick_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B1_UDB09_A1
UART_Joystick_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B1_UDB09_D0_D1
UART_Joystick_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B1_UDB09_D0
UART_Joystick_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B1_UDB09_D1
UART_Joystick_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
UART_Joystick_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B1_UDB09_F0_F1
UART_Joystick_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B1_UDB09_F0
UART_Joystick_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B1_UDB09_F1
UART_Joystick_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
UART_Joystick_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
UART_Joystick_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB09_10_ACTL
UART_Joystick_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B0_UDB09_10_ST
UART_Joystick_BUART_sRX_RxSts__3__MASK EQU 0x08
UART_Joystick_BUART_sRX_RxSts__3__POS EQU 3
UART_Joystick_BUART_sRX_RxSts__4__MASK EQU 0x10
UART_Joystick_BUART_sRX_RxSts__4__POS EQU 4
UART_Joystick_BUART_sRX_RxSts__5__MASK EQU 0x20
UART_Joystick_BUART_sRX_RxSts__5__POS EQU 5
UART_Joystick_BUART_sRX_RxSts__MASK EQU 0x38
UART_Joystick_BUART_sRX_RxSts__MASK_REG EQU CYREG_B0_UDB09_MSK
UART_Joystick_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB09_ACTL
UART_Joystick_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B0_UDB09_ST
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B1_UDB10_11_A0
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B1_UDB10_11_A1
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B1_UDB10_11_D0
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B1_UDB10_11_D1
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B1_UDB10_11_F0
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B1_UDB10_11_F1
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B1_UDB10_A0_A1
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B1_UDB10_A0
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B1_UDB10_A1
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B1_UDB10_D0_D1
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B1_UDB10_D0
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B1_UDB10_D1
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B1_UDB10_F0_F1
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B1_UDB10_F0
UART_Joystick_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B1_UDB10_F1
UART_Joystick_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B1_UDB11_A0_A1
UART_Joystick_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B1_UDB11_A0
UART_Joystick_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B1_UDB11_A1
UART_Joystick_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B1_UDB11_D0_D1
UART_Joystick_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B1_UDB11_D0
UART_Joystick_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B1_UDB11_D1
UART_Joystick_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB11_ACTL
UART_Joystick_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B1_UDB11_F0_F1
UART_Joystick_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B1_UDB11_F0
UART_Joystick_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B1_UDB11_F1
UART_Joystick_BUART_sTX_TxSts__0__MASK EQU 0x01
UART_Joystick_BUART_sTX_TxSts__0__POS EQU 0
UART_Joystick_BUART_sTX_TxSts__1__MASK EQU 0x02
UART_Joystick_BUART_sTX_TxSts__1__POS EQU 1
UART_Joystick_BUART_sTX_TxSts__2__MASK EQU 0x04
UART_Joystick_BUART_sTX_TxSts__2__POS EQU 2
UART_Joystick_BUART_sTX_TxSts__3__MASK EQU 0x08
UART_Joystick_BUART_sTX_TxSts__3__POS EQU 3
UART_Joystick_BUART_sTX_TxSts__MASK EQU 0x0F
UART_Joystick_BUART_sTX_TxSts__MASK_REG EQU CYREG_B1_UDB11_MSK
UART_Joystick_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB11_ACTL
UART_Joystick_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B1_UDB11_ST
UART_Joystick_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
UART_Joystick_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
UART_Joystick_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
UART_Joystick_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_Joystick_IntClock__INDEX EQU 0x01
UART_Joystick_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_Joystick_IntClock__PM_ACT_MSK EQU 0x02
UART_Joystick_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_Joystick_IntClock__PM_STBY_MSK EQU 0x02

; isr_wdgButton
isr_wdgButton__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_wdgButton__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_wdgButton__INTC_MASK EQU 0x02
isr_wdgButton__INTC_NUMBER EQU 1
isr_wdgButton__INTC_PRIOR_NUM EQU 7
isr_wdgButton__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
isr_wdgButton__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_wdgButton__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; Joystick_Pin_x
Joystick_Pin_x__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
Joystick_Pin_x__0__MASK EQU 0x01
Joystick_Pin_x__0__PC EQU CYREG_PRT0_PC0
Joystick_Pin_x__0__PORT EQU 0
Joystick_Pin_x__0__SHIFT EQU 0
Joystick_Pin_x__AG EQU CYREG_PRT0_AG
Joystick_Pin_x__AMUX EQU CYREG_PRT0_AMUX
Joystick_Pin_x__BIE EQU CYREG_PRT0_BIE
Joystick_Pin_x__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Joystick_Pin_x__BYP EQU CYREG_PRT0_BYP
Joystick_Pin_x__CTL EQU CYREG_PRT0_CTL
Joystick_Pin_x__DM0 EQU CYREG_PRT0_DM0
Joystick_Pin_x__DM1 EQU CYREG_PRT0_DM1
Joystick_Pin_x__DM2 EQU CYREG_PRT0_DM2
Joystick_Pin_x__DR EQU CYREG_PRT0_DR
Joystick_Pin_x__INP_DIS EQU CYREG_PRT0_INP_DIS
Joystick_Pin_x__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Joystick_Pin_x__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Joystick_Pin_x__LCD_EN EQU CYREG_PRT0_LCD_EN
Joystick_Pin_x__MASK EQU 0x01
Joystick_Pin_x__PORT EQU 0
Joystick_Pin_x__PRT EQU CYREG_PRT0_PRT
Joystick_Pin_x__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Joystick_Pin_x__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Joystick_Pin_x__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Joystick_Pin_x__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Joystick_Pin_x__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Joystick_Pin_x__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Joystick_Pin_x__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Joystick_Pin_x__PS EQU CYREG_PRT0_PS
Joystick_Pin_x__SHIFT EQU 0
Joystick_Pin_x__SLW EQU CYREG_PRT0_SLW

; Joystick_Pin_y
Joystick_Pin_y__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
Joystick_Pin_y__0__MASK EQU 0x02
Joystick_Pin_y__0__PC EQU CYREG_PRT0_PC1
Joystick_Pin_y__0__PORT EQU 0
Joystick_Pin_y__0__SHIFT EQU 1
Joystick_Pin_y__AG EQU CYREG_PRT0_AG
Joystick_Pin_y__AMUX EQU CYREG_PRT0_AMUX
Joystick_Pin_y__BIE EQU CYREG_PRT0_BIE
Joystick_Pin_y__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Joystick_Pin_y__BYP EQU CYREG_PRT0_BYP
Joystick_Pin_y__CTL EQU CYREG_PRT0_CTL
Joystick_Pin_y__DM0 EQU CYREG_PRT0_DM0
Joystick_Pin_y__DM1 EQU CYREG_PRT0_DM1
Joystick_Pin_y__DM2 EQU CYREG_PRT0_DM2
Joystick_Pin_y__DR EQU CYREG_PRT0_DR
Joystick_Pin_y__INP_DIS EQU CYREG_PRT0_INP_DIS
Joystick_Pin_y__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Joystick_Pin_y__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Joystick_Pin_y__LCD_EN EQU CYREG_PRT0_LCD_EN
Joystick_Pin_y__MASK EQU 0x02
Joystick_Pin_y__PORT EQU 0
Joystick_Pin_y__PRT EQU CYREG_PRT0_PRT
Joystick_Pin_y__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Joystick_Pin_y__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Joystick_Pin_y__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Joystick_Pin_y__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Joystick_Pin_y__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Joystick_Pin_y__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Joystick_Pin_y__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Joystick_Pin_y__PS EQU CYREG_PRT0_PS
Joystick_Pin_y__SHIFT EQU 1
Joystick_Pin_y__SLW EQU CYREG_PRT0_SLW

; Clock_PWM_Engine
Clock_PWM_Engine__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_PWM_Engine__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_PWM_Engine__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_PWM_Engine__CFG2_SRC_SEL_MASK EQU 0x07
Clock_PWM_Engine__INDEX EQU 0x00
Clock_PWM_Engine__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_PWM_Engine__PM_ACT_MSK EQU 0x01
Clock_PWM_Engine__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_PWM_Engine__PM_STBY_MSK EQU 0x01

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 26
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 26
CYDEV_CHIP_MEMBER_4AA EQU 25
CYDEV_CHIP_MEMBER_4AB EQU 30
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4AD EQU 15
CYDEV_CHIP_MEMBER_4AE EQU 16
CYDEV_CHIP_MEMBER_4D EQU 20
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 27
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 24
CYDEV_CHIP_MEMBER_4I EQU 32
CYDEV_CHIP_MEMBER_4J EQU 21
CYDEV_CHIP_MEMBER_4K EQU 22
CYDEV_CHIP_MEMBER_4L EQU 31
CYDEV_CHIP_MEMBER_4M EQU 29
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 28
CYDEV_CHIP_MEMBER_4Q EQU 17
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 23
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 18
CYDEV_CHIP_MEMBER_4Z EQU 19
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 33
CYDEV_CHIP_MEMBER_FM3 EQU 37
CYDEV_CHIP_MEMBER_FM4 EQU 38
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 34
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 35
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 36
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AD_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AE_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000003
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
