/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif



#include "stm32f103x6.h"
#include "Stm32_F103C6_gpio_drivers.h"

#include "Keypad.h"
#include "LCD.h"


//7-Segment
#define ZERO 	0x01
#define ONE 	0x79
#define TWO		0x24
#define THREE	0x30
#define	FOUR	0x4C
#define	FIVE	0x12
#define SIX		0x02
#define SEVEN	0x19
#define EIGHT	0x00
#define NINE	0x10

void clock_init()
{
	//Enable clock GPIOA
	//RCC_ABP2ENR |=RCC_IOPAEN; //Keda 3mlna enable lel clock ely d5lla lel RCC
	RCC_GPIOA_Clk_En();

	//Enable clock GPIOB
	//RCC_ABP2ENR |=RCC_IOPBEN;
	RCC_GPIOB_Clk_En();
}

void GPIO_init()
{
	//	GPIOA_CRL = 0x0;
	//	GPIOB_CRL = 0x0;
	//	GPIOA_CRH = 0x0;
	//	GPIOB_CRH = 0x0;

	GPIO_Pin_Config_t PinCfg;

	//GPIOA
	//PA1--> Input High Z(impedance)
	//GPIOA_CRL |= (1<<6);
	//	PinCfg.GPIO_Pin_Num = GPIO_Pin_1;
	//	PinCfg.GPIO_Mode = GPIO_Mode_Input_Flo;
	//	MCAL_GPIO_Init(GPIOA, &PinCfg);
	//
	//	//PA13--> Input High Z(impedance)
	//	//GPIOA_CRH |= (1<<22);
	//	PinCfg.GPIO_Pin_Num = GPIO_Pin_13;
	//	PinCfg.GPIO_Mode = GPIO_Mode_Input_Flo;
	//	MCAL_GPIO_Init(GPIOA, &PinCfg);

	//GPIOB
	//PB1--> Output push-pull mode
	//GPIOB_CRL |= (1<<4);
	PinCfg.GPIO_Pin_Num = GPIO_Pin_9;
	PinCfg.GPIO_Mode = GPIO_Mode_Output_PP;
	PinCfg.GPIO_Output_Speed = GPIO_Speed_10MHz;
	MCAL_GPIO_Init(GPIOB, &PinCfg);

	//PB13 --> Output push-pull mode
	//GPIOB_CRH |= (1<<20);
	PinCfg.GPIO_Pin_Num = GPIO_Pin_10;
	PinCfg.GPIO_Mode = GPIO_Mode_Output_PP;
	PinCfg.GPIO_Output_Speed = GPIO_Speed_10MHz;
	MCAL_GPIO_Init(GPIOB, &PinCfg);

	PinCfg.GPIO_Pin_Num = GPIO_Pin_11;
	PinCfg.GPIO_Mode = GPIO_Mode_Output_PP;
	PinCfg.GPIO_Output_Speed = GPIO_Speed_10MHz;
	MCAL_GPIO_Init(GPIOB, &PinCfg);

	PinCfg.GPIO_Pin_Num = GPIO_Pin_12;
	PinCfg.GPIO_Mode = GPIO_Mode_Output_PP;
	PinCfg.GPIO_Output_Speed = GPIO_Speed_10MHz;
	MCAL_GPIO_Init(GPIOB, &PinCfg);

	PinCfg.GPIO_Pin_Num = GPIO_Pin_13;
	PinCfg.GPIO_Mode = GPIO_Mode_Output_PP;
	PinCfg.GPIO_Output_Speed = GPIO_Speed_10MHz;
	MCAL_GPIO_Init(GPIOB, &PinCfg);

	PinCfg.GPIO_Pin_Num = GPIO_Pin_14;
	PinCfg.GPIO_Mode = GPIO_Mode_Output_PP;
	PinCfg.GPIO_Output_Speed = GPIO_Speed_10MHz;
	MCAL_GPIO_Init(GPIOB, &PinCfg);

	PinCfg.GPIO_Pin_Num = GPIO_Pin_15;
	PinCfg.GPIO_Mode = GPIO_Mode_Output_PP;
	PinCfg.GPIO_Output_Speed = GPIO_Speed_10MHz;
	MCAL_GPIO_Init(GPIOB, &PinCfg);

}

//void my_wait(int x)
//{
//	unsigned int i,j;
//	for(i=0; i<x ; i++)
//	{
//		for(j=0; j<255 ; j++)
//		{
//
//		}
//	}
//}

int main(void)
{
	clock_init();
	GPIO_init();
	LCD_Init();

	unsigned char Pressed_Key;

	LCD_Write_String("Younis Tamer");
	my_wait(100);
	LCD_Clear_Screen();

	unsigned char seg[] = {ZERO , ONE , TWO , THREE , FOUR , FIVE , SIX , SEVEN , EIGHT , NINE , ZERO};
	unsigned char lcd[] = {'0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9'};

	for(unsigned char i = 0 ; i<11 ; i++)
	{
		MCAL_GPIO_WritePort(GPIOB, seg[i]<<9);
		LCD_Write_Char(lcd[i]);
		my_wait(100);
	}
	LCD_Clear_Screen();
	Keypad_Init();
	LCD_Write_String("Keypad is ready");
	my_wait(100);
	LCD_Clear_Screen();

	while(1)
	{

		Pressed_Key = Keypad_GetChar();
		switch(Pressed_Key)
		{
		case('?') :
					LCD_Clear_Screen();
		break;
		case('N') :
					break;
		default :
			LCD_Write_Char(Pressed_Key);
			break;
		}
		//		//PA1-->connected to PB1 (Pull up resistance) therefore when i push the button it is connected to ground
		//		if(MCAL_GPIO_ReadPin(GPIOA, GPIO_Pin_1) == 0) //press
		//		{
		////			GPIOB_ODR ^= (1<<1);
		//			MCAL_GPIO_TogglePin(GPIOB, GPIO_Pin_1);
		//			while(MCAL_GPIO_ReadPin(GPIOA, GPIO_Pin_1) == 0); //Single press
		//		}
		//
		//		//PA13-->connected to PB13 (Pull down resistance)
		//		if(MCAL_GPIO_ReadPin(GPIOA, GPIO_Pin_13) == 1) //press
		//		{
		//			//GPIOB_ODR ^= (1<<13);
		//			MCAL_GPIO_TogglePin(GPIOB, GPIO_Pin_13);
		//			//No while as it is multi pressing
		//		}
		//
		//		my_wait(1);
	}

}

