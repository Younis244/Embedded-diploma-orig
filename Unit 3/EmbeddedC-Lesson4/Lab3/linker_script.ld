/*Linker script CortexM3
Eng Younis */

MEMORY
{
	flash(RX) : ORIGIN = 0x00000000 , LENGTH = 512M
	sram(RWX) : ORIGIN = 0x20000000 , LENGTH = 512M	
}

SECTIONS
{
	.text : {
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_text = . ; /*De 3ashan an2el el data w el text 				w keda mn rom le ram*/
	}>flash

	.data : {
	_S_data = . ;
		*(.data)
	. = ALIGN(4) ;
	_E_data = . ;
	}>sram AT> flash   				/*el mafrod yb2a >sram AT> flash bas keda 
							hyd5lny fe mashakelll ma3 el statup w 
							h7tag a3dll 7agat*/

	.bss : {
	_S_bss = . ;
		*(.bss*)
	_E_bss = . ;
	}>sram
}