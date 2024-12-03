################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Stm32_F103C6_Drivers/Keyboard_Driver/Keypad.c 

OBJS += \
./Stm32_F103C6_Drivers/Keyboard_Driver/Keypad.o 

C_DEPS += \
./Stm32_F103C6_Drivers/Keyboard_Driver/Keypad.d 


# Each subdirectory must supply rules for building sources it contributes
Stm32_F103C6_Drivers/Keyboard_Driver/%.o Stm32_F103C6_Drivers/Keyboard_Driver/%.su Stm32_F103C6_Drivers/Keyboard_Driver/%.cyclo: ../Stm32_F103C6_Drivers/Keyboard_Driver/%.c Stm32_F103C6_Drivers/Keyboard_Driver/subdir.mk
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 7/Lesson 3/Drivers/Stm32_F103C6_Drivers/Keyboard_Driver" -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 7/Lesson 3/Drivers/Stm32_F103C6_Drivers/LCD_Driver" -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 7/Lesson 3/Drivers/Stm32_F103C6_Drivers/inc" -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 7/Lesson 3/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Stm32_F103C6_Drivers-2f-Keyboard_Driver

clean-Stm32_F103C6_Drivers-2f-Keyboard_Driver:
	-$(RM) ./Stm32_F103C6_Drivers/Keyboard_Driver/Keypad.cyclo ./Stm32_F103C6_Drivers/Keyboard_Driver/Keypad.d ./Stm32_F103C6_Drivers/Keyboard_Driver/Keypad.o ./Stm32_F103C6_Drivers/Keyboard_Driver/Keypad.su

.PHONY: clean-Stm32_F103C6_Drivers-2f-Keyboard_Driver

