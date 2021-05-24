/*******************************************************************************
* File Name: Joystick_Pin_y.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Joystick_Pin_y_H) /* Pins Joystick_Pin_y_H */
#define CY_PINS_Joystick_Pin_y_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Joystick_Pin_y_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Joystick_Pin_y__PORT == 15 && ((Joystick_Pin_y__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Joystick_Pin_y_Write(uint8 value);
void    Joystick_Pin_y_SetDriveMode(uint8 mode);
uint8   Joystick_Pin_y_ReadDataReg(void);
uint8   Joystick_Pin_y_Read(void);
void    Joystick_Pin_y_SetInterruptMode(uint16 position, uint16 mode);
uint8   Joystick_Pin_y_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Joystick_Pin_y_SetDriveMode() function.
     *  @{
     */
        #define Joystick_Pin_y_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Joystick_Pin_y_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Joystick_Pin_y_DM_RES_UP          PIN_DM_RES_UP
        #define Joystick_Pin_y_DM_RES_DWN         PIN_DM_RES_DWN
        #define Joystick_Pin_y_DM_OD_LO           PIN_DM_OD_LO
        #define Joystick_Pin_y_DM_OD_HI           PIN_DM_OD_HI
        #define Joystick_Pin_y_DM_STRONG          PIN_DM_STRONG
        #define Joystick_Pin_y_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Joystick_Pin_y_MASK               Joystick_Pin_y__MASK
#define Joystick_Pin_y_SHIFT              Joystick_Pin_y__SHIFT
#define Joystick_Pin_y_WIDTH              1u

/* Interrupt constants */
#if defined(Joystick_Pin_y__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Joystick_Pin_y_SetInterruptMode() function.
     *  @{
     */
        #define Joystick_Pin_y_INTR_NONE      (uint16)(0x0000u)
        #define Joystick_Pin_y_INTR_RISING    (uint16)(0x0001u)
        #define Joystick_Pin_y_INTR_FALLING   (uint16)(0x0002u)
        #define Joystick_Pin_y_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Joystick_Pin_y_INTR_MASK      (0x01u) 
#endif /* (Joystick_Pin_y__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Joystick_Pin_y_PS                     (* (reg8 *) Joystick_Pin_y__PS)
/* Data Register */
#define Joystick_Pin_y_DR                     (* (reg8 *) Joystick_Pin_y__DR)
/* Port Number */
#define Joystick_Pin_y_PRT_NUM                (* (reg8 *) Joystick_Pin_y__PRT) 
/* Connect to Analog Globals */                                                  
#define Joystick_Pin_y_AG                     (* (reg8 *) Joystick_Pin_y__AG)                       
/* Analog MUX bux enable */
#define Joystick_Pin_y_AMUX                   (* (reg8 *) Joystick_Pin_y__AMUX) 
/* Bidirectional Enable */                                                        
#define Joystick_Pin_y_BIE                    (* (reg8 *) Joystick_Pin_y__BIE)
/* Bit-mask for Aliased Register Access */
#define Joystick_Pin_y_BIT_MASK               (* (reg8 *) Joystick_Pin_y__BIT_MASK)
/* Bypass Enable */
#define Joystick_Pin_y_BYP                    (* (reg8 *) Joystick_Pin_y__BYP)
/* Port wide control signals */                                                   
#define Joystick_Pin_y_CTL                    (* (reg8 *) Joystick_Pin_y__CTL)
/* Drive Modes */
#define Joystick_Pin_y_DM0                    (* (reg8 *) Joystick_Pin_y__DM0) 
#define Joystick_Pin_y_DM1                    (* (reg8 *) Joystick_Pin_y__DM1)
#define Joystick_Pin_y_DM2                    (* (reg8 *) Joystick_Pin_y__DM2) 
/* Input Buffer Disable Override */
#define Joystick_Pin_y_INP_DIS                (* (reg8 *) Joystick_Pin_y__INP_DIS)
/* LCD Common or Segment Drive */
#define Joystick_Pin_y_LCD_COM_SEG            (* (reg8 *) Joystick_Pin_y__LCD_COM_SEG)
/* Enable Segment LCD */
#define Joystick_Pin_y_LCD_EN                 (* (reg8 *) Joystick_Pin_y__LCD_EN)
/* Slew Rate Control */
#define Joystick_Pin_y_SLW                    (* (reg8 *) Joystick_Pin_y__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Joystick_Pin_y_PRTDSI__CAPS_SEL       (* (reg8 *) Joystick_Pin_y__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Joystick_Pin_y_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Joystick_Pin_y__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Joystick_Pin_y_PRTDSI__OE_SEL0        (* (reg8 *) Joystick_Pin_y__PRTDSI__OE_SEL0) 
#define Joystick_Pin_y_PRTDSI__OE_SEL1        (* (reg8 *) Joystick_Pin_y__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Joystick_Pin_y_PRTDSI__OUT_SEL0       (* (reg8 *) Joystick_Pin_y__PRTDSI__OUT_SEL0) 
#define Joystick_Pin_y_PRTDSI__OUT_SEL1       (* (reg8 *) Joystick_Pin_y__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Joystick_Pin_y_PRTDSI__SYNC_OUT       (* (reg8 *) Joystick_Pin_y__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Joystick_Pin_y__SIO_CFG)
    #define Joystick_Pin_y_SIO_HYST_EN        (* (reg8 *) Joystick_Pin_y__SIO_HYST_EN)
    #define Joystick_Pin_y_SIO_REG_HIFREQ     (* (reg8 *) Joystick_Pin_y__SIO_REG_HIFREQ)
    #define Joystick_Pin_y_SIO_CFG            (* (reg8 *) Joystick_Pin_y__SIO_CFG)
    #define Joystick_Pin_y_SIO_DIFF           (* (reg8 *) Joystick_Pin_y__SIO_DIFF)
#endif /* (Joystick_Pin_y__SIO_CFG) */

/* Interrupt Registers */
#if defined(Joystick_Pin_y__INTSTAT)
    #define Joystick_Pin_y_INTSTAT            (* (reg8 *) Joystick_Pin_y__INTSTAT)
    #define Joystick_Pin_y_SNAP               (* (reg8 *) Joystick_Pin_y__SNAP)
    
	#define Joystick_Pin_y_0_INTTYPE_REG 		(* (reg8 *) Joystick_Pin_y__0__INTTYPE)
#endif /* (Joystick_Pin_y__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Joystick_Pin_y_H */


/* [] END OF FILE */
