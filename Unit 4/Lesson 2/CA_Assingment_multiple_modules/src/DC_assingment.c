/*
 * DC_assingment.c
 *
 *  Created on: Apr 29, 2024
 *      Author: Younis
 */
#include "DC_assingment.h"

void (*DC_STATE)();//Ptr to a Fn
int US_get_dist_random(int min , int max , int count);//Prototypeeee

int DC_speed = 0;

void DC_init ()
	{
		printf("Dc init...\n");
	}

void Dc_motor (int s)
	{
		DC_speed = s;
		DC_STATE = STATE(DC_busy);
		printf("From CA to DC, speed=%d\n",DC_speed);
	}


State_Define(DC_idle)
	{
		//State
		DC_state_id status = DC_idle;
		printf("The system is in idle state: speed=%d  \n",DC_speed);
	}

State_Define(DC_busy)
	{
		//State
		DC_state_id status = DC_busy;
		DC_STATE = STATE(DC_idle);
		printf("The system is in busy state: speed=%d  \n",DC_speed);
	}




