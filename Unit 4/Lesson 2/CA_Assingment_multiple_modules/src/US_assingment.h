/*
 * US_assingment.h
 *
 *  Created on: Apr 29, 2024
 *      Author: Younis
 */

#ifndef US_ASSINGMENT_H_
#define US_ASSINGMENT_H_

#include "state_assingment.h"

//Defining states
typedef enum
	{
		US_busy
	}US_state_id;

//Prototypesof the Fn's
State_Define(US_busy);

void US_init();
//Defining the ptr of Fn as when including this file
extern void (*US_STATE)();


#endif /* US_ASSINGMENT_H_ */
