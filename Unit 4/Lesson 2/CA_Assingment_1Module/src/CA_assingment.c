/*
 * CA_assingment.c
 *
 *  Created on: Apr 29, 2024
 *      Author: Younis
 */
#include "CA_assingment.h"

void (*CA_STATE)();//Ptr to a Fn
int US_get_dist_random(int min , int max , int count);//Prototypeeee

int CA_speed = 0;
int CA_distance = 0;
int CA_threshold = 50;

State_Define(CA_Waiting)
	{
		//State
		CA_state_id status = CA_Waiting;
		//Speed
		CA_speed = 0;
		//Random val
		CA_distance = US_get_dist_random(45 , 55 , 1);
		//Condition to see which state
		(CA_distance <= CA_threshold)?(CA_STATE = STATE(CA_Waiting) ): (CA_STATE = STATE(CA_Driving) );
		printf("The system is in Waiting state: speed=%d , distance=%d \n",CA_speed,CA_distance);
	}

State_Define(CA_Driving)
	{
		//State
		CA_state_id status = CA_Driving;
		//speed
		CA_speed = 40;
		//Random val
		CA_distance = US_get_dist_random(45 , 55 , 1);
		//Testing the condition Aw a7ott nfs el condition
		(CA_distance > CA_threshold)?( CA_STATE= STATE(CA_Driving) ) : ( CA_STATE= STATE(CA_Waiting) );
		printf("The system is in Driving state: speed=%d , distance=%d \n",CA_speed,CA_distance);
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



