// Startup.c 
//Eng Younis Tamer Hosny

#include <stdint.h>
#define Stack_Start_Sp 0x20001000
extern int main(void);
void Reset_Handler();
/*Dool kano keda abl ma a3mell 7ettet el weak w el alias*/
// void Reset_Handler(void)
// {
// 	main();
// }

// void NMI_Handler(void)
// {
// 	Reset_Handler();
// }

// void H_Fault_Handler(void)
// {
// 	Reset_Handler();
// }

// void MM_Fault_Handler(void)
// {
// 	Reset_Handler();
// }

// void Bus_Handler(void)
// {
// 	Reset_Handler();
// }

// void Usage_Fault_Handler(void)
// {
// 	Reset_Handler();
// }

void Default_Handler()
{
	Reset_Handler();
}

void NMI_Handler() 			__attribute__((weak,alias("Default_Handler")));;
void H_Fault_Handler() 		__attribute__((weak,alias("Default_Handler")));;


//booking for 1024b located by .bss through uninitialized array of int 256 element (256*4=1024)
static unsigned long _stack_top[256];//256*4=1024

// uint32_t vectors[] __attribute__((section(".vectors"))) ={
// (uint32_t) (&_stack_top[0]+sizeof(_stack_top)),
// (uint32_t) &Reset_Handler,
// (uint32_t) &NMI_Handler,
// (uint32_t) &H_Fault_Handler,

// };

void (* const global_ptr_fn_vectors[]) ()__attribute__((section(".vectors")))= //its an array of ptrs takes nth and returns void
{
	(void(*)()) (&_stack_top[0]+sizeof(_stack_top)),
				&Reset_Handler,
				&NMI_Handler,
				&H_Fault_Handler

};//keda 3mltlha initialize


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