/*******************************************************************************
* File Name: PWM_Engine_PM.c
* Version 3.30
*
* Description:
*  This file provides the power management source code to API for the
*  PWM.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "PWM_Engine.h"

static PWM_Engine_backupStruct PWM_Engine_backup;


/*******************************************************************************
* Function Name: PWM_Engine_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_Engine_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_Engine_SaveConfig(void) 
{

    #if(!PWM_Engine_UsingFixedFunction)
        #if(!PWM_Engine_PWMModeIsCenterAligned)
            PWM_Engine_backup.PWMPeriod = PWM_Engine_ReadPeriod();
        #endif /* (!PWM_Engine_PWMModeIsCenterAligned) */
        PWM_Engine_backup.PWMUdb = PWM_Engine_ReadCounter();
        #if (PWM_Engine_UseStatus)
            PWM_Engine_backup.InterruptMaskValue = PWM_Engine_STATUS_MASK;
        #endif /* (PWM_Engine_UseStatus) */

        #if(PWM_Engine_DeadBandMode == PWM_Engine__B_PWM__DBM_256_CLOCKS || \
            PWM_Engine_DeadBandMode == PWM_Engine__B_PWM__DBM_2_4_CLOCKS)
            PWM_Engine_backup.PWMdeadBandValue = PWM_Engine_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_Engine_KillModeMinTime)
             PWM_Engine_backup.PWMKillCounterPeriod = PWM_Engine_ReadKillTime();
        #endif /* (PWM_Engine_KillModeMinTime) */

        #if(PWM_Engine_UseControl)
            PWM_Engine_backup.PWMControlRegister = PWM_Engine_ReadControlRegister();
        #endif /* (PWM_Engine_UseControl) */
    #endif  /* (!PWM_Engine_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_Engine_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_Engine_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_Engine_RestoreConfig(void) 
{
        #if(!PWM_Engine_UsingFixedFunction)
            #if(!PWM_Engine_PWMModeIsCenterAligned)
                PWM_Engine_WritePeriod(PWM_Engine_backup.PWMPeriod);
            #endif /* (!PWM_Engine_PWMModeIsCenterAligned) */

            PWM_Engine_WriteCounter(PWM_Engine_backup.PWMUdb);

            #if (PWM_Engine_UseStatus)
                PWM_Engine_STATUS_MASK = PWM_Engine_backup.InterruptMaskValue;
            #endif /* (PWM_Engine_UseStatus) */

            #if(PWM_Engine_DeadBandMode == PWM_Engine__B_PWM__DBM_256_CLOCKS || \
                PWM_Engine_DeadBandMode == PWM_Engine__B_PWM__DBM_2_4_CLOCKS)
                PWM_Engine_WriteDeadTime(PWM_Engine_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_Engine_KillModeMinTime)
                PWM_Engine_WriteKillTime(PWM_Engine_backup.PWMKillCounterPeriod);
            #endif /* (PWM_Engine_KillModeMinTime) */

            #if(PWM_Engine_UseControl)
                PWM_Engine_WriteControlRegister(PWM_Engine_backup.PWMControlRegister);
            #endif /* (PWM_Engine_UseControl) */
        #endif  /* (!PWM_Engine_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_Engine_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves the user configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_Engine_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_Engine_Sleep(void) 
{
    #if(PWM_Engine_UseControl)
        if(PWM_Engine_CTRL_ENABLE == (PWM_Engine_CONTROL & PWM_Engine_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_Engine_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_Engine_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_Engine_UseControl) */

    /* Stop component */
    PWM_Engine_Stop();

    /* Save registers configuration */
    PWM_Engine_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_Engine_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration. Should be called just after
*  awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_Engine_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_Engine_Wakeup(void) 
{
     /* Restore registers values */
    PWM_Engine_RestoreConfig();

    if(PWM_Engine_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_Engine_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
