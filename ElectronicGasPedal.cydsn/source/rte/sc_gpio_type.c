

/*
 * Filename: sc_gpio_type.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "sc_gpio_type.h"



/* USER CODE START SC_GPIO_INCLUDE */

/* USER CODE END SC_GPIO_INCLUDE */


/*
* description: Brakelight datatype
* name: sc_gpio
* shortname: gpio
*/

/* USER CODE START SC_GPIO_USERDEFINITIONS */

/* USER CODE END SC_GPIO_USERDEFINITIONS */


/*****************************************************************************************
 *************** Port Wrapper Implementation for SC_GPIO signal  ****************
 *****************************************************************************************/
 
 
/**
 * Default OUT driver API
 */
inline RC_t SC_GPIO_driverOut(const SC_GPIO_data_t  *const data)
{
	/* USER CODE START driverOutSC_GPIO */
//#error "Add your code here"

	//Scale application data to drive format

	//Write scaled data to driver

	return RC_SUCCESS;
	/* USER CODE END driverOutSC_GPIO */
}


