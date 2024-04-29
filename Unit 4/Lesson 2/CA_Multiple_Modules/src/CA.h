/*
 * CA.h
 *
 *  Created on: Apr 22, 2024
 *      Author: Younis
 */

#ifndef CA_H_
#define CA_H_
#include "state.h"

//Define states
typedef enum
	{
		CA_Waiting,
		CA_Driving
	}CA_state_id;

//declare state Fns CA
State_Define (CA_Waiting);
State_Define (CA_Driving);

//State ptr to Fn
extern void (*CA_State) ();


#endif /* CA_H_ */
