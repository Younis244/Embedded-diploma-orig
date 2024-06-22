/*
 * Alarm_Driver.c
 *
 *  Created on: Jun 19, 2024
 *      Author: Younis
 */
#include "Alarm_Driver.h"

void (*Alarm_Driver)();


void Start_Alarm()
	{
		Alarm_Driver = STATE(Alarm_is_on);
		Alarm_Driver();
	}

void Stop_Alarm()
	{
		Alarm_Driver = STATE(Alarm_is_off);
		Alarm_Driver();
	}


void Alarm_init()
	{
		//GPIO_INITIALIZATION();
		Alarm_stat Alarm = waitingg;
		Stop_Alarm();
	}

STATE_DEFINE(waiting)
	{
		Alarm_stat alarm = waitingg;
	}

STATE_DEFINE(Alarm_is_on)
	{
		Alarm_stat Alarm = alarm_On;
		//printf("Start Alarm\n");
		Set_Alarm_actuator(0);
		Alarm_Driver = STATE(waiting);
	}

STATE_DEFINE(Alarm_is_off)
	{
		Alarm_stat Alarm = alarm_Off;
		//printf("Stop Alarm\n");
		Set_Alarm_actuator(1);
		Alarm_Driver = STATE(waiting);
	}
