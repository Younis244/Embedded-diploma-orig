/*
 * Alarm_Driver.h
 *
 *  Created on: Jun 19, 2024
 *      Author: Younis
 */

#ifndef ALARM_DRIVER_H_
#define ALARM_DRIVER_H_

#include "state.h"
#include "driver.h"

typedef enum
	{
		waiting,
		alarm_Off,
		alarm_On
	}Alarm_stat;

void Alarm_init();
STATE_DEFINE(waiting);

extern void (*Alarm_Driver)();

#endif /* ALARM_DRIVER_H_ */
