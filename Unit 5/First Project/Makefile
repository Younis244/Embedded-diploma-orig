#@copyright : younis
CC=arm-none-eabi
CFLAGS= -mcpu=cortex-m3 -mthumb -g -gdwarf-2
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As= $(wildcard *.s)
AsOBJ= $(As:.s=.o)
project_name=Pressure_Controller_cortex_m3


all: $(project_name).bin
	@echo "==========Build is done=========="




%.o: %.c 		#@app w uart
	$(CC)-gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)-ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map
	cp $(project_name).elf $(project_name).axf

$(project_name).bin: $(project_name).elf
	 $(CC)-objcopy.exe -O binary $< $@

clean_all: 
	rm *.o *.elf *.bin 

clean: 
	rm *.elf *.bin
