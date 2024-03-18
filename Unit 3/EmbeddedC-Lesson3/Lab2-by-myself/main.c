typedef volatile unsigned int vuint32_t; // kol ama aktb vuint32_t hatetshal w ytktb volatile unsigned int
#include <stdint.h>

////Register address////

//Rkm el 3omarra
#define Rcc_Base_Add 	0x40021000
#define GPIO_Base_Add	0x40010800

//Rkm el sha22a
#define Rcc_Abp_Add 	*(volatile uint32_t *)	(Rcc_Base_Add + 0x18)
#define GPIO_CRH_Add	*(volatile uint32_t *)	(GPIO_Base_Add + 0x04)
#define GPIO_ODR_Add	*(volatile uint32_t *)	(GPIO_Base_Add + 0x0C)

#define Rcc_IOPEAN (1<<2) //As to put 1 in second bit



typedef union
{ vuint32_t all_fields;
	struct
	{
		vuint32_t reserved:13;
		vuint32_t pin13:1;
	}Pin;

}R_ODR_t; //Regiter ODR type definition

/*Ana 3awz a3ml ptr yeshawrr gowa el union ely gowaha struct*/
volatile R_ODR_t* R_ODR=(volatile R_ODR_t*) (GPIO_Base_Add + 0x0C);
unsigned char g_variables[3]={1,2,3};
unsigned char const const_variables[3]={1,2,3};
unsigned char bss_var[3];


int main(void)
{
	Rcc_Abp_Add|=Rcc_IOPEAN; //IOPEAN de hatetshall w yt7tt 1<<2 w dah ely 3wzzo ana bas b5lly shklo chic
	GPIO_CRH_Add&=0xff0fffff;
	GPIO_CRH_Add|=0x00200000;

	while(1)
	{
		R_ODR->Pin.pin13=1;//GPIO_ODR_Add|=1<<13 keda set bit 13
		int i;
		for(i=0;i<5000;i++);
		R_ODR->Pin.pin13=0;//GPIO_ODR_Add&=~(1<<13) keda clear bit 13
		for(i=0;i<5000;i++);
	}


	return 0;
}