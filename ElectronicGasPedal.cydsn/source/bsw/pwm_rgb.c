/**
* \file pwm_rgb.c
* \author Aditi Prakash
* \date 29-05-2021
*
* \brief Source file for PWM component
*
* \copyright Copyright ©2016
* Department of electrical engineering and information technology, Hochschule Darmstadt - University of applied sciences (h_da). All Rights Reserved.
* Permission to use, copy, modify, and distribute this software and its documentation for educational, and research purposes in the context of non-commercial
* (unless permitted by h_da) and official h_da projects, is hereby granted for enrolled students of h_da, provided that the above copyright notice,
* this paragraph and the following paragraph appear in all copies, modifications, and distributions.
* Contact Prof.Dr.-Ing. Peter Fromm, peter.fromm@h-da.de, Birkenweg 8 64295 Darmstadt - GERMANY for commercial requests.
*
* \warning This software is a PROTOTYPE version and is not designed or intended for use in production, especially not for safety-critical applications!
* The user represents and warrants that it will NOT use or redistribute the Software for such purposes.
* This prototype is for research purposes only. This software is provided "AS IS," without a warranty of any kind.
*/

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#include "pwm_rgb.h"
#include "PWM_Engine.h"

/*****************************************************************************/
/* Local pre-processor symbols/macros ('#define')                            */
/*****************************************************************************/

/*****************************************************************************/
/* Global variable definitions (declared in header file with 'extern')       */
/*****************************************************************************/

/*****************************************************************************/
/* Local type definitions ('typedef')                                        */
/*****************************************************************************/

/*****************************************************************************/
/* Local variable definitions ('static')                                     */
/*****************************************************************************/
const static uint16_t LED__Pulse_Width[256] = {
0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3,
3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7,
7, 7, 8, 8, 8, 9, 9, 10, 10, 10, 11, 11, 12, 12, 13, 13, 14, 15,
15, 16, 17, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
31, 32, 33, 35, 36, 38, 40, 41, 43, 45, 47, 49, 52, 54, 56, 59,
61, 64, 67, 70, 73, 76, 79, 83, 87, 91, 95, 99, 103, 108, 112,
117, 123, 128, 134, 140, 146, 152, 159, 166, 173, 181, 189, 197,
206, 215, 225, 235, 245, 256, 267, 279, 292, 304, 318, 332, 347,
362, 378, 395, 412, 431, 450, 470, 490, 512, 535, 558, 583, 609,
636, 664, 693, 724, 756, 790, 825, 861, 899, 939, 981, 1024, 1069,
1117, 1166, 1218, 1272, 1328, 1387, 1448, 1512, 1579, 1649, 1722,
1798, 1878, 1961, 2048, 2139, 2233, 2332, 2435, 2543, 2656, 2773,
2896, 3025, 3158, 3298, 3444, 3597, 3756, 3922, 4096, 4277, 4467,
4664, 4871, 5087, 5312, 5547, 5793, 6049, 6317, 6596, 6889, 7194,
7512, 7845, 8192, 8555, 8933, 9329, 9742, 10173, 10624, 11094,
11585, 12098, 12634, 13193, 13777, 14387, 15024, 15689, 16384,
17109, 17867, 18658, 19484, 20346, 21247, 22188, 23170, 24196,
25267, 26386, 27554, 28774, 30048, 31378, 32768, 34218, 35733,
37315, 38967, 40693, 42494, 44376, 46340, 48392, 50534, 52772,
55108, 57548, 60096, 65535, 62757, 
};


/*****************************************************************************/
/* Local function prototypes ('static')                                      */
/*****************************************************************************/


/*****************************************************************************/
/* Function implementation - global ('extern') and local ('static')          */
/*****************************************************************************/

/**
 * \brief       : API to initialize the PWM component
 * \param       : NONE
 * \return      : RC_t Returns error code success or failure
 */
RC_t PWM_RGB_init()
{
    PWM_Engine_Start();
    PWM_Engine_WriteCompare(0);
}

/**
 * \brief       : API to vary the intensity of the Green channel in RGB led
 * \param [IN]  : uint8_t engine_data - Engine speed
 * \return      : RC_t Returns error code success or failure
 */
RC_t PWM_Green_setIntensity(uint8_t engine_data)
{
    PWM_Engine_WriteCompare(LED__Pulse_Width[engine_data]);
}