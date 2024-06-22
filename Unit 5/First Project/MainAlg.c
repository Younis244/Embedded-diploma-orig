/*
 * MainAlg.c
 *
 *  Created on: Jun 19, 2024
 *      Author: Younis
 */


#include "MainAlg.h"
//const int threshold = 20;
static int pValue = 0;
static int threshold = 20;


void set_Pressure_Val(int pVal)
	{
		 pValue = pVal;
	}

void (*MainAlg)();

STATE_DEFINE(High_Pressure_Detection)
	{
		High_Pressure_stat Pressure = High_Pressure;
		//printf("High pressure is detected\n");
		if(pValue > threshold)
			{
				High_Pressure_detected();
			}

		MainAlg = STATE(High_Pressure_Detection);
	}
