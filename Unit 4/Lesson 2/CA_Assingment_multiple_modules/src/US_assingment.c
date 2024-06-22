/*
 * US_assingment.c
 *
 *  Created on: Apr 29, 2024
 *      Author: Younis
 */
#include "US_assingment.h"

void (*US_STATE)();//Ptr to a Fn
int US_get_dist_random(int min , int max , int count);//Prototypeeee

int US_distance = 0;



void US_init ()
	{
		printf("US init...\n");
	}


State_Define(US_busy)
	{
		//State
		US_state_id status = US_busy;
		//Random val
		US_distance = US_get_dist_random(45 , 55 , 1);
		printf("The system is in busy state:  distance=%d \n",US_distance);
		US_set_distance (US_distance);
		US_STATE = STATE(US_busy);


	}



int US_get_dist_random(int min , int max , int count)
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



