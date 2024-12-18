
/*
 * Stm32_F103C6_RCC_drivers.h
 *
 *  Created on: Sep 11, 2024
 *      Author: Younis
 */

#ifndef INC_STM32_F103C6_RCC_DRIVERS_H_
#define INC_STM32_F103C6_RCC_DRIVERS_H_

//=============================
//Includes
//=============================
#include "../../Stm32_F103C6_Drivers/inc/stm32f103x6.h"
#include "../../Stm32_F103C6_Drivers/inc/Stm32_F103C6_gpio_drivers.h"

uint32_t MCAL_RCC_GetSYSCLKFreq(void);
uint32_t MCAL_RCC_GetHCLKFreq(void);
uint32_t MCAL_RCC_GetPCLK1Freq(void);
uint32_t MCAL_RCC_GetPCLK2Freq(void);



#endif /* INC_STM32_F103C6_RCC_DRIVERS_H_ */
