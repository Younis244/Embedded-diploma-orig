/*
 * main_assingment.c
 *
 *  Created on: Apr 29, 2024
 *      Author: Younis
 */

#include "CA_assingment.h"
#include "US_assingment.h"
#include "DC_assingment.h"

void setup ()
	{
		//init all the drivers
		//init IRQ (interrupts)law 3ndy...
		//init HAL US_driver & DC_river
		//init Block
		DC_init();
		US_init();
		//set states ptrs for each block
		CA_STATE = STATE(CA_Waiting);
		US_STATE = STATE(US_busy);
		DC_STATE = STATE(DC_idle);
	}

void main ()
	{
		volatile int d;
		setup();
		while (1)
			{
				//Call state for each block
				US_STATE();
				CA_STATE();
				DC_STATE();
				//Delay time
				for(d=0 ; d<1000 ; d++);
			}
	}
