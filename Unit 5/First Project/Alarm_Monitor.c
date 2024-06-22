/*
 * Alarm_Monitor.c
 *
 *  Created on: Jun 19, 2024
 *      Author: Younis
 */

#include "Alarm_Monitor.h"


//Ptrs to Fn to call the functions
void (*Alarm_Monitor)();
//void (*Alarm_On_Call)();

void High_Pressure_detected()
	{
		Alarm_Monitor = STATE(Alarm_On);
	}


STATE_DEFINE(Alarm_Off)
	{
		Alarm_stat_id Alarm = alarm_off;
		//printf("Alarm is Off\n");
		Stop_Alarm();
	}

STATE_DEFINE(Alarm_On)
	{
		Alarm_stat_id Alarm = alarm_on;
		//printf("Alarm is On\n");
		Start_Alarm();
		Delay(60);
		Alarm_Monitor = STATE(Alarm_Off);
	}
