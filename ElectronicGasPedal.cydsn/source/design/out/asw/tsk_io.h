
/*
 * Filename: tsk_io.h
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 */

#ifndef _H_DEFINE_TSK_IO
#define _H_DEFINE_TSK_IO

#include "project.h"
#include "global.h"
#include "rte_types.h"

/* USER CODE START TSK_IO_INCLUDES */

/* USER CODE END TSK_IO_INCLUDES */



/*
* description: This task will contain all IO operations, e.g: joystick, engine...
* events: ev_speed_onData
* mode: Cyclic and Event
* name: tsk_io
* shortname: io
* signalpoolsRO: sp_common
* signalpoolsRW: sp_common
* tickEvent: 0
* timertickperiod: 1
*/
DeclareTask(tsk_io);


#endif