/*
 * Pressure_Driver.c
 *Eng: Younis Tamer Hosny
 *  Created on: Jun 19, 2024
 *      Author: Younis
 */

#include "Pressure_Driver.h"
#include "stdint.h"

static int pVal = 0;
void (*Pressure_Driver)();
void Pressure_init()
	{
		GPIO_INITIALIZATION();
	}

STATE_DEFINE(reading)
	{
		Press_stat_id Pressure_Status = Pressure_Reading;
		pVal = getPressureVal();
		//printf("Value is : %d\n",pVal);
		set_Pressure_Val(pVal);
		Delay(10000);
	}
