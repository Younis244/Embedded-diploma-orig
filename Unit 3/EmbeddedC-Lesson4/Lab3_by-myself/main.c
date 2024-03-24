//Tiva C bymyselfff
//Eng: Younis Tamer Hosny

#define SYSCTL_Base_Add 0x400FE000
#define GPIOF_Base_Add 	0x40025000
#define Bit_3			(1<<3)


#define SYSTCL_RCGC2		*(volatile unsigned long*)	(SYSCTL_Base_Add+ 0x108)
#define GPIO_PORTF_DIR		*(volatile unsigned long*)	(GPIOF_Base_Add+ 0x400)
#define GPIO_PORTF_DEN		*(volatile unsigned long*)	(GPIOF_Base_Add+ 0x51C)
#define GPIO_PORTF_DATA		*(volatile unsigned long*)	(GPIOF_Base_Add+ 0x3FC)




int main()
{
	volatile unsigned long delay_time;
	SYSTCL_RCGC2=0x20;
	//I forgot delay that makes sure that the GPIO is running
	for(delay_time=0;delay_time<200;delay_time++);
	GPIO_PORTF_DIR|=Bit_3;
	GPIO_PORTF_DEN|=Bit_3;

	while(1)
	{
		GPIO_PORTF_DATA|=(1<<3); //Setting bit
		for(delay_time=0;delay_time<20000;delay_time++);
		GPIO_PORTF_DATA&=~(1<<3); //Clearing bit
		for(delay_time=0;delay_time<20000;delay_time++);
	}


	return 0;
}