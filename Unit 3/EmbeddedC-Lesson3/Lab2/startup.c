//Startup.c
//Eng younis

#include <stdint.h>

void Reset_Handler(void);
extern int main(void);
void Default_Handler()
{
	Reset_Handler();
}

/*Prototype*/
void Reset_Handler();
void NMI_Handler() __attribute__((weak, alias("Default_Handler")));
void H_fault_Handler() __attribute__((weak, alias("Default_Handler")));
void MM_Fault_Handler() __attribute__((weak, alias("Default_Handler")));
void Bus_Fault() __attribute__((weak, alias("Default_Handler")));
void Usage_Fault_Handler() __attribute__((weak, alias("Default_Handler")));

extern unsigned int _stack_top;
uint32_t vectors[] __attribute__((section(".vectors")))=  //#ashan global fa hayet7tt fe el .data
{//dool addresses hayet7tto fe awel el flash
	(uint32_t) &_stack_top, //#ashan law teftkr konna ben7ott el add ely benrg3lo
	(uint32_t) &Reset_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &H_fault_Handler,
	(uint32_t) &MM_Fault_Handler,
	(uint32_t) &Bus_Fault,
	(uint32_t) &Usage_Fault_Handler
};

//Definitions from linker script
extern unsigned int _E_text;
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss;
extern unsigned int _E_bss;

void Reset_Handler()
{/*Note mohema awyyyyy
lazem ama a3ml cast fa a5od baly eny hb3t el data
byte by byte so a7san 7aga eno yeb2a char*/
//Copy data section from flash to ram
	unsigned int Data_size= (unsigned char*)&_E_data - (unsigned char*)&_S_data;
	unsigned char* P_src = (unsigned char*)&_E_text;//Source
	unsigned char* P_dst = (unsigned char*)&_S_data;//Destination
	int i=0;
	for(i;i< Data_size;i++)
	{
		*((unsigned char*)P_dst++)= *((unsigned char*)P_src++);
	}

//init .bss section in SRAM=0
	unsigned int bss_size= (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	P_dst= (unsigned char*)&_S_bss; //5dtaha mn foo2 3ashan dah beykml dah
	i=0;
	for(i;i< bss_size;i++)
	{
		*((unsigned char*)P_dst++)= (unsigned char)0;
	}

//Jump to main()

	main();
}