// Startup.c 
//Eng Younis Tamer Hosny
//Byy myself bas msh a7san 7aga el sara7a

#include <stdint.h>
#define Stack_Start_Sp 0x20001000
extern int main(void);
void Reset_Handler();


void Default_Handler()
{
	Reset_Handler();
}

void NMI_Handler() 			__attribute__((weak,alias("Default_Handler")));;
void H_Fault_Handler() 		__attribute__((weak,alias("Default_Handler")));;

//extern unsigned int _stack_top;

static unsigned long _stack_top[256]; //keda 7agezz 1024Kb

void (* const G_ptr_fn[]) () __attribute__((section(".vectors"))) =
{
	(void (*)())	(&_stack_top[0]+sizeof(_stack_top)), //el void w ely gnbo dah cast le esm el Fn...
					&Reset_Handler,//m3mltsh cast le dool 3ashan already m3rrf el Reset handler eno void and takes nth
					&NMI_Handler,
					&H_Fault_Handler,
};//keda 3mllt init


extern unsigned int _E_text;
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss;
extern unsigned int _E_bss;

void Reset_Handler()
{
//Copy data section from flash to sram
	//As to transfer byte by byte so should be char
	unsigned int DATA_size= (unsigned char*)&_E_data - (unsigned char*)_S_data;
	unsigned char* P_src= (unsigned char*)&_E_text;
	unsigned char* P_dst= (unsigned char*)&_S_data;

	int i=0;
	for(i;i<DATA_size;i++)
	{
		*((unsigned char*)P_dst++)=*((unsigned char*)P_src++);
	}

	//init .bss section in sram =0
	unsigned int bss_size=(unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	P_dst=(unsigned char*)&_S_bss;
	i=0;
	for(i;i<bss_size;i++)
	{
		*((unsigned char*)P_dst++)= (unsigned char)0 ; // 3ashan ana ha init byte by byte fa lazem cast!!!!!

	}

	//jump main()
	

	main();
}