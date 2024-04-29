/*
 * CA.c
 *
 *  Created on: Apr 23, 2024
 *      Author: Younis
 */

#include "CA.h"

//Declare variables
int CA_speed = 0;
int CA_distance = 0;
int CA_threshold = 50;

//State ptr to Fn
void (*CA_State) ();
//int US_get_distance_random (int min, int max, int count);

void US_set_distance (int d)
	{
		CA_distance = d;
		(CA_distance <= CA_threshold)? (CA_State = State(CA_Waiting) ) : (CA_State = State(CA_Driving) );
		printf("US-----distance=%d----->CA\n",CA_distance);
	}


//We need to write the Fns ,Keda ashyakkk
State_Define (CA_Waiting)
	{
		//State name
			CA_state_id status  = CA_Waiting;
			printf("CA_waiting state: distance=%d ,Speed=%d \n",CA_distance,CA_speed);
		//State Action
			CA_speed = 0;
			DC_motor(CA_speed);
	}

State_Define (CA_Driving)
	{
		//State name
		CA_state_id status = CA_Driving;
		printf("CA_driving state: distance=%d ,Speed=%d \n",CA_distance,CA_speed);

		//State Action
			CA_speed = 30;
			DC_motor(CA_speed);
	}


//Msh hane7tgha 3ashan already htb2a mt3rfa mn el sensor
//int US_get_distance_random (int min, int max, int count)
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
