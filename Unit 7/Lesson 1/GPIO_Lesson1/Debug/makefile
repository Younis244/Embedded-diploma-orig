################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
GPIO_Lesson1.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
GPIO_Lesson1.list \

OBJCOPY_HEX += \
GPIO_Lesson1.hex \

OBJCOPY_BIN += \
GPIO_Lesson1.bin \


# All Target
all: GPIO_Lesson1.elf secondary-outputs

# Tool invocations
GPIO_Lesson1.elf: $(OBJS) $(USER_OBJS) C:\Users\Younis\Desktop\Embedded-diploma-orig\Unit\ 7\Lesson\ 1\GPIO_Lesson1\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -gdwarf-2 -o "GPIO_Lesson1.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\Younis\Desktop\Embedded-diploma-orig\Unit 7\Lesson 1\GPIO_Lesson1\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="GPIO_Lesson1.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

GPIO_Lesson1.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "GPIO_Lesson1.list"
	@echo 'Finished building: $@'
	@echo ' '

GPIO_Lesson1.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "GPIO_Lesson1.hex"
	@echo 'Finished building: $@'
	@echo ' '

GPIO_Lesson1.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "GPIO_Lesson1.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
