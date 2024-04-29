/*
 * US.c
 *
 *  Created on: Apr 23, 2024
 *      Author: Younis
 */

#include "US.h"

//Declare variables

int US_distance = 0;


//State ptr to Fn
void (*US_State) ();
int US_get_distance_random (int min, int max, int count);


void US_init()
	{
		//init US driver
		printf("US init\n");

	}

//We need to write the Fns ,Keda ashyakkk
State_Define (US_busy)
	{
		//State name
			US_state_id status  = US_busy;
		//State Action
			US_distance = US_get_distance_random(45 , 55 , 1);
			printf("US_busy state: distance=%d \n",US_distance);
			US_set_distance(US_distance);
			US_State=State(US_busy);
	}



int US_get_distance_random (int min, int max, int count)
	{
		//This will generate random no. in range of l and r
			int i;
			int rand_num;
			for(i=0 ; i<count ; i++)
				{
					rand_num = (rand() % (max-min+1)) +min;
				}
			return rand_num;
	}
