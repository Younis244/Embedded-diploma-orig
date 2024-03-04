typedef volatile unsigned int vuint32_t;
#include <stdint.h>
//register address

#define RCC_BASE 	0x40021000
#define GPIOA_BASE  0x40010800

#define RCC_ABP2ENR *(volatile uint32_t *) (RCC_BASE   + 0x18)
#define GPIOA_CRH 	*(volatile uint32_t *) (GPIOA_BASE + 0x04)
#define GPIOA_ODR 	*(volatile uint32_t *) (GPIOA_BASE + 0x0C)

#define RCC_IOPAEN (1<<2)
#define GPIOA13	   (1UL<<13)

//gyeen mn startup.c
extern void NMI_Handler(void)
{

}
extern void Bus_Fault(void)
{
	
}


typedef union
{
	vuint32_t all_fields;
	struct
	{
		vuint32_t 	reserved:13;
		vuint32_t	P_13:1;
	}Pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR=(volatile R_ODR_t*)(GPIOA_BASE + 0x0C);
unsigned char g_variables[3]={1,2,3};
unsigned char const const_variables[3]={1,2,3};
unsigned char bss_var[3];


int main(void)
{
	RCC_ABP2ENR |=RCC_IOPAEN; //Keda 3mlna enable lel clock ely d5lla lel RCC
	GPIOA_CRH 	&=0xFF0FFFFF; //Ana keda sfrrt el pins been 20 w 24 (20-->23)
	GPIOA_CRH 	|=0x00200000; //Ana ba3d ma sfrt.hom 3awez a7ott 3alehom 2 ba2a
							//Tab leh ma7tetsh mn el awal?
							//Allk la ma efred kan ma7toott fe el pins 1's so ama ont ha3mell OR ma3 2 fa kan el result hateb2a 1111 wana 3awezha 0010
	while(1)
	{
		int i=0;
		R_ODR->Pin.P_13=1; //Set bit 13
		for(i;i<50000;i++);
		R_ODR->Pin.P_13=0; //Clear bit 13
		i=0;
		for(i;i<50000;i++);
	}
}