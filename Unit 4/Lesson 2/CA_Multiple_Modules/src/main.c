/*
 * main.c
 *
 *  Created on: Apr 22, 2024
 *      Author: Younis
 */

#include "CA.h"
#include "US.h"
#include "DC.h"


void setup ()
	{
		//init all the drivers
		//init IRQ (interrupts)law 3ndy...
		//init HAL US_driver & DC_river
		//init Block
		US_init();
		DC_init();
		//set states ptrs for each block
		CA_State = State (CA_Waiting);
		US_State = State (US_busy);
		DC_State = State (DC_idle);
	}

void main ()
	{
	volatile int d;//3ashan el optimize myms7sh el code dah fa 3mllt volatile
		setup();
		while (1)
		{
			//Call state for each block
			US_State();
			CA_State();
			DC_State();
			//delay 3ashan law sh8all embedded
			for(d=0 ; d<1000; d++);
		}
	}
