//Tiva C
//Eng/Younis Tamer Hosny

#define SYSCTL_Base_Add		0x400FE000 
#define GPIOF_Base_Add 		0x40025000
#define Register_bit_3		(1<<3)

#define SYSCTL_RCGC2_R 		 *(volatile unsigned long*) (SYSCTL_Base_Add + 0x108)//el * ely bara de m3naha en el ptr ely 3al address dah 7otelli gowah
#define GPIO_PORTF_DIR_R 	 *(volatile unsigned long*) (GPIOF_Base_Add + 0x400)//el * ely bara de m3naha en el ptr ely 3al address dah 7otelli gowah
#define GPIO_PORTF_DEN_R 	 *(volatile unsigned long*) (GPIOF_Base_Add + 0x51C)//el * ely bara de m3naha en el ptr ely 3al address dah 7otelli gowah
#define GPIO_PORTF_DATA_R	 *(volatile unsigned long*) (GPIOF_Base_Add + 0x3FC)//el * ely bara de m3naha en el ptr ely 3al address dah 7otelli gowah



int main()
{
	volatile unsigned long delay_count;
	SYSCTL_RCGC2_R=0x20;
	//delay to make sure GPIOF is up and running
	for(delay_count=0;delay_count<200;delay_count++);
	GPIO_PORTF_DIR_R|=Register_bit_3; //Dir is output for pin 3 port F
	GPIO_PORTF_DEN_R|=Register_bit_3;

	while(1)
	{
		GPIO_PORTF_DATA_R|=1<<3; //set bit
		for(delay_count=0;delay_count<200000;delay_count++); //3ashan 3enena teshof kowayes fa zwdd el delay
		GPIO_PORTF_DATA_R&=~(1<<3);//clear bit
		for(delay_count=0;delay_count<200000;delay_count++); //3ashan 3enena teshof kowayes fa zwdd el delay
	}	


	return 0;
}