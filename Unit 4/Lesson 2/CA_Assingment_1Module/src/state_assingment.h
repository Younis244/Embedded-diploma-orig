/*
 * state_assingment.h
 *
 *  Created on: Apr 29, 2024
 *      Author: Younis
 */

#ifndef STATE_ASSINGMENT_H_
#define STATE_ASSINGMENT_H_

#include "stdio.h"
#include "stdlib.h"


//Macrossss
//Defining the Fn's in pro way as to not write everytime
#define State_Define(_stateFn_) void ST_##_stateFn_()//:void Name ()
#define STATE(_stateFn_) ST_##_stateFn_//:Name As to return to the Fn


#endif /* STATE_ASSINGMENT_H_ */
