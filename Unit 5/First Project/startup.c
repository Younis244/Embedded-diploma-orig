#include <stdint.h>
extern int main (void);
#define Stack_Top_SP 0x20001000
extern unsigned int _stack_top;



void Reset_Handler();

void Default_Handler()
	{
		Reset_Handler();
	}

void NMI_Handler() 			__attribute__((weak,alias("Default_Handler")));;
void H_Fault_Handler() 		__attribute__((weak,alias("Default_Handler")));;
void MM_Fault_Handler()		__attribute__((weak,alias("Default_Handler")));;
void Bus_Handler() 			__attribute__((weak,alias("Default_Handler")));;
void Usage_Fault_Handler() 	__attribute__((weak,alias("Default_Handler")));;

uint32_t vectors [] __attribute__((section(".vectors"))) =
	{
	(uint32_t) &_stack_top			,
	(uint32_t) &Reset_Handler		,
	(uint32_t) &NMI_Handler			,
	(uint32_t) &H_Fault_Handler		,
	(uint32_t) &MM_Fault_Handler	,
	(uint32_t) &Bus_Handler			,
	(uint32_t) &Usage_Fault_Handler
	};

	extern unsigned int _E_text;
	extern unsigned int _S_data;
	extern unsigned int _E_data;
	extern unsigned int _S_bss;
	extern unsigned int _E_bss;


void Reset_Handler()
	{
		//I need to transfer the data byte by byte so i need to cast it to char 
		unsigned int Data_Size = (unsigned char*)&_E_data - (unsigned char*)&_S_data;
		unsigned char* Ptr_Src = (unsigned char *)&_E_text;
		unsigned char* ptr_dst = (unsigned char *)&_S_data;
		int i = 0;
		for(i;i<Data_Size;i++)
		{
			*((unsigned char*)ptr_dst++) = *((unsigned char*)Ptr_Src++);
		}

		unsigned int bss_Size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
		ptr_dst = (unsigned char *)&_S_bss;

		i = 0;
		for(i;i<bss_Size;i++)
			{
				*((unsigned char*) ptr_dst++) = (unsigned char)0;	
			}


		//Jump to main;
		main();
	}