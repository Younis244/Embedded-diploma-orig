/*
 * Pressure_Driver.h
 *
 *  Created on: Jun 19, 2024
 *      Author: Younis
 */

#ifndef PRESSURE_DRIVER_H_
#define PRESSURE_DRIVER_H_

#include "state.h"
#include "driver.h"

typedef enum
	{
		Pressure_Reading
	}Press_stat_id;


void Pressure_init();
STATE_DEFINE(reading);

extern void (*Pressure_Driver)();

#endif /* PRESSURE_DRIVER_H_ */
