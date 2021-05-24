/*******************************************************************************
* File Name: ADC_JoyStick_y_PM.c
* Version 3.10
*
* Description:
*  This file provides Sleep/WakeUp APIs functionality.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "ADC_JoyStick_y.h"


/***************************************
* Local data allocation
***************************************/

static ADC_JoyStick_y_BACKUP_STRUCT  ADC_JoyStick_y_backup =
{
    ADC_JoyStick_y_DISABLED
};


/*******************************************************************************
* Function Name: ADC_JoyStick_y_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void ADC_JoyStick_y_SaveConfig(void)
{
    /* All configuration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: ADC_JoyStick_y_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void ADC_JoyStick_y_RestoreConfig(void)
{
    /* All congiguration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: ADC_JoyStick_y_Sleep
********************************************************************************
*
* Summary:
*  This is the preferred routine to prepare the component for sleep.
*  The ADC_JoyStick_y_Sleep() routine saves the current component state,
*  then it calls the ADC_Stop() function.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  ADC_JoyStick_y_backup - The structure field 'enableState' is modified
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void ADC_JoyStick_y_Sleep(void)
{
    if((ADC_JoyStick_y_PWRMGR_SAR_REG  & ADC_JoyStick_y_ACT_PWR_SAR_EN) != 0u)
    {
        if((ADC_JoyStick_y_SAR_CSR0_REG & ADC_JoyStick_y_SAR_SOF_START_CONV) != 0u)
        {
            ADC_JoyStick_y_backup.enableState = ADC_JoyStick_y_ENABLED | ADC_JoyStick_y_STARTED;
        }
        else
        {
            ADC_JoyStick_y_backup.enableState = ADC_JoyStick_y_ENABLED;
        }
        ADC_JoyStick_y_Stop();
    }
    else
    {
        ADC_JoyStick_y_backup.enableState = ADC_JoyStick_y_DISABLED;
    }
}


/*******************************************************************************
* Function Name: ADC_JoyStick_y_Wakeup
********************************************************************************
*
* Summary:
*  This is the preferred routine to restore the component to the state when
*  ADC_JoyStick_y_Sleep() was called. If the component was enabled before the
*  ADC_JoyStick_y_Sleep() function was called, the
*  ADC_JoyStick_y_Wakeup() function also re-enables the component.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  ADC_JoyStick_y_backup - The structure field 'enableState' is used to
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void ADC_JoyStick_y_Wakeup(void)
{
    if(ADC_JoyStick_y_backup.enableState != ADC_JoyStick_y_DISABLED)
    {
        ADC_JoyStick_y_Enable();
        #if(ADC_JoyStick_y_DEFAULT_CONV_MODE != ADC_JoyStick_y__HARDWARE_TRIGGER)
            if((ADC_JoyStick_y_backup.enableState & ADC_JoyStick_y_STARTED) != 0u)
            {
                ADC_JoyStick_y_StartConvert();
            }
        #endif /* End ADC_JoyStick_y_DEFAULT_CONV_MODE != ADC_JoyStick_y__HARDWARE_TRIGGER */
    }
}


/* [] END OF FILE */
