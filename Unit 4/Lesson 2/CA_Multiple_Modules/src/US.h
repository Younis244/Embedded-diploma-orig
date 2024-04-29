/*
 * CA.h
 *
 *  Created on: Apr 22, 2024
 *      Author: Younis
 */

#ifndef US_H_
#define US_H_
#include "state.h"

//Define states
typedef enum
	{
		US_busy
	}US_state_id;

//declare state Fns CA
	State_Define (US_busy);


//Initialize
	void US_init();

//State ptr to Fn
extern void (*US_State) ();


#endif /* CA_H_ */
