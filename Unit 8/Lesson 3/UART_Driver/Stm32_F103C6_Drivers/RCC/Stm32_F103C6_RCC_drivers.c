
/*
 * Stm32_F103C6_gpio_drivers.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Younis Tamer
 */



#include "Stm32_F103C6_RCC_drivers.h"
#include "Stm32_F103C6_gpio_drivers.h"


//Bits 10:8 PPRE1: APB low-speed prescaler (APB1)
//Set and cleared by software to control the division factor of the APB low-speed clock
//(PCLK1).
//Warning: the software has to set correctly these bits to not exceed 36 MHz on this domain.
//0xx: HCLK not divided
//100: HCLK divided by 2
//101: HCLK divided by 4
//110: HCLK divided by 8
//111: HCLK divided by 16

const uint8_t APBPrescTable [8U] = {0,0,0,0,1,2,3,4};


uint32_t MCAL_RCC_GetSYSCLKFreq(void)
{

}

uint32_t MCAL_RCC_GetHCLKFreq(void)
{

}

uint32_t MCAL_RCC_GetPCLK1Freq(void)
{
//	Bits 10:8 PPRE1[2:0]: APB Low-speed prescaler (APB1)
	return (MCAL_RCC_GetHCLKFreq() >> APBPrescTable[(RCC->CFGR >> 8) & 0b111]);
}

uint32_t MCAL_RCC_GetPCLK2Freq(void)
{
//	B its 13:11 PPRE2[2:0]: APB high-speed prescaler (APB2)
	return (MCAL_RCC_GetHCLKFreq() >> APBPrescTable[(RCC->CFGR >> 11) & 0b111]);
}







