/*
 * state.h
 *
 *  Created on: Jun 19, 2024
 *      Author: Younis
 */

#ifndef STATE_H_
#define STATE_H_

#define STATE_DEFINE(_stateFn_) void ST_##_stateFn_()
#define STATE(_stateFn_) ST_##_stateFn_

//const int threshold = 20;


void set_Pressure_Val(int pVal);
void High_Pressure_detected();

void Start_Alarm();
void Stop_Alarm();



#endif /* STATE_H_ */
