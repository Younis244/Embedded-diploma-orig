/*
 * CA.h
 *
 *  Created on: Apr 22, 2024
 *      Author: Younis
 */

#ifndef DC_H_
#define DC_H_
#include "state.h"

//Define states
typedef enum
	{
		DC_idle,
		DC_busy
	}DC_state_id;

//declare state Fns CA
	State_Define (DC_idle);
	State_Define (DC_busy);

//Initialize
	void DC_init();//prototype


//State ptr to Fn
	extern void (*DC_State) ();


#endif /* CA_H_ */
