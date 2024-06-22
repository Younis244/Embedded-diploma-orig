/*
 * MainAlg.h
 *
 *  Created on: Jun 19, 2024
 *      Author: Younis
 */

#ifndef MAINALG_H_
#define MAINALG_H_

#include "state.h"
#include "driver.h"

typedef enum
	{
		High_Pressure
	}High_Pressure_stat;

STATE_DEFINE(High_Pressure_Detection);

extern void (*MainAlg)();

#endif /* MAINALG_H_ */
