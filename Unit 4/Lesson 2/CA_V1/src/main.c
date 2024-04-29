/*
 * main.c
 *
 *  Created on: Apr 22, 2024
 *      Author: Younis
 */

#include "CA.h"


void setup ()
	{
		//init all the drivers
		//init IRQ (interrupts)law 3ndy...
		//init HAL US_driver & DC_river
		//init Block
		//set states ptrs for each block
			CA_State = State (CA_Waiting);
	}

void main ()
	{
	volatile int d;//3ashan el optimize myms7sh el code dah fa 3mllt volatile
		setup();
		while (1)
		{
			//Call state for each block
			CA_State();
			//delay 3ashan law sh8all embedded
			for(d=0 ; d<1000; d++);
		}
	}
