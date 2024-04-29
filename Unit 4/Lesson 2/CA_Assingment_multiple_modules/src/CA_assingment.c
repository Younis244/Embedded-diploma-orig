/*
 * CA_assingment.c
 *
 *  Created on: Apr 29, 2024
 *      Author: Younis
 */
#include "CA_assingment.h"

void (*CA_STATE)();//Ptr to a Fn

int CA_speed = 0;
int CA_distance = 0;
int CA_threshold = 50;

US_set_distance(int d)
	{
		CA_distance = d;
		(CA_distance <= CA_threshold)?(CA_STATE = STATE(CA_Waiting) ): (CA_STATE = STATE(CA_Driving) );
		printf("From US to CA, distance=%d\n",CA_distance);
	}

State_Define(CA_Waiting)
	{
		//State
		CA_state_id status = CA_Waiting;
		printf("The system is in Waiting state: speed=%d , distance=%d \n",CA_speed,CA_distance);
		//Speed
		CA_speed = 0;
		Dc_motor(CA_speed);
	}

State_Define(CA_Driving)
	{
		//State
		CA_state_id status = CA_Driving;
		printf("The system is in Driving state: speed=%d , distance=%d \n",CA_speed,CA_distance);

		//speed
		CA_speed = 40;
		Dc_motor(CA_speed);
	}





