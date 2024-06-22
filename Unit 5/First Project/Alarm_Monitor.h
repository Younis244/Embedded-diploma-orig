/*
 * Alarm_Monitor.h
 *
 *  Created on: Jun 19, 2024
 *      Author: Younis
 */

#ifndef ALARM_MONITOR_H_
#define ALARM_MONITOR_H_

#include "state.h"
#include "driver.h"

typedef enum
	{
		alarm_off,
		alarm_on
	}Alarm_stat_id;

STATE_DEFINE(Alarm_On);
STATE_DEFINE(Alarm_Off);

extern void (*Alarm_Monitor)();


#endif /* ALARM_MONITOR_H_ */
