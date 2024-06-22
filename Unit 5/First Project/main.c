/*
 * main.c
 *
 *  Created on: Jun 20, 2024
 *      Author: Younis
 */
#include <stdint.h>
#include <stdio.h>

#include "driver.h"
#include "Pressure_Driver.h"
#include "MainAlg.h"
#include "Alarm_Driver.h"
#include "Alarm_Monitor.h"

void setup()
	{
		//init
		Pressure_init();
		Alarm_init();

		//States
		Pressure_Driver = STATE(reading);
		MainAlg = STATE(High_Pressure_Detection);
		Alarm_Monitor = STATE(Alarm_Off);
		Stop_Alarm();
	}


int main ()
	{
		GPIO_INITIALIZATION();
		setup();
		while (1)
			{
				//Implement your Design
				//Call state for each block
			Pressure_Driver();
			MainAlg();
			Alarm_Monitor();
			}
	}