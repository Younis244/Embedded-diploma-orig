/*
 * DC.c
 *
 *  Created on: Apr 23, 2024
 *      Author: Younis
 */

#include "DC.h"

//Declare variables
int DC_speed = 0;

//State ptr to Fn
void (*DC_State) ();

void DC_init()
	{
		//init PWM
		printf("DC init\n");
	}

void DC_motor(int s)
	{
		DC_speed = s;
		DC_State = State(DC_busy );
		printf("CA-----Speed=%d----->DC\n",DC_speed);
	}

//We need to write the Fns ,Keda ashyakkk
State_Define (DC_idle)
	{
		//State name
			DC_state_id statDC  = DC_idle;
		//State Action
		//Call PWM to make speed = DC_speed
			printf("DC_idle state: Speed=%d \n",DC_speed);
	}

State_Define (DC_busy)
	{
		//State name
		DC_state_id statDC = DC_busy;
		//State Action
		//Call PWM to make speed = DC_speed
		DC_State = State(DC_idle);
		printf("DC_busy state: Speed=%d \n",DC_speed);

	}


//Msh h7tgha aslan
//int DC_get_distance_random (int min, int max, int count)
//	{
//		//This will generate random no. in range of l and r
//			int i;
//			int rand_num;
//			for(i=0 ; i<count ; i++)
//				{
//					rand_num = (rand() % (max-min+1)) +min;
//				}
//			return rand_num;
//	}
