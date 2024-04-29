/*
 * DC_assingment.h
 *
 *  Created on: Apr 29, 2024
 *      Author: Younis
 */

#ifndef DC_ASSINGMENT_H_
#define DC_ASSINGMENT_H_

#include "state_assingment.h"

//Defining states
typedef enum
	{
		DC_idle,
		DC_busy
	}DC_state_id;

//Prototypesof the Fn's
State_Define(DC_idle);
State_Define(DC_busy);

void DC_init ();


//Defining the ptr of Fn as when including this file
extern void (*DC_STATE)();


#endif /* DC_ASSINGMENT_H_ */
