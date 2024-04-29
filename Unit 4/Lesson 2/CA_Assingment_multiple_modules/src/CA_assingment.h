/*
 * CA_assingment.h
 *
 *  Created on: Apr 29, 2024
 *      Author: Younis
 */

#ifndef CA_ASSINGMENT_H_
#define CA_ASSINGMENT_H_

#include "state_assingment.h"

//Defining states
typedef enum
	{
		CA_Waiting,
		CA_Driving
	}CA_state_id;

//Prototypesof the Fn's
State_Define(CA_Waiting);
State_Define(CA_Driving);

//Defining the ptr of Fn as when including this file
extern void (*CA_STATE)();


#endif /* CA_ASSINGMENT_H_ */
