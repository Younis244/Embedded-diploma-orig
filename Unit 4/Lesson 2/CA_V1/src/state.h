/*
 * state.h
 *
 *  Created on: Apr 23, 2024
 *      Author: Younis
 */

#ifndef STATE_H_
#define STATE_H_
#include "stdio.h"
#include "stdlib.h"

//Automatic state Fn generated
#define State_Define(_StateFn_) void ST_##_StateFn_()
//De to make my code easier and to be more professional...

#define State(_StateFn_) ST_##_StateFn_ //el ## 3ashan ye resolve en de mtbasa le de

//State_Define(CA_Waiting);kan 3ashan a3mel checkk w ashoof mnzrr el Fn
//State(CA_Waiting);


#endif /* STATE_H_ */
