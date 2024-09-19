################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Stm32_F103C6_Drivers/Keypad_Driver/Keypad.c 

OBJS += \
./Stm32_F103C6_Drivers/Keypad_Driver/Keypad.o 

C_DEPS += \
./Stm32_F103C6_Drivers/Keypad_Driver/Keypad.d 


# Each subdirectory must supply rules for building sources it contributes
Stm32_F103C6_Drivers/Keypad_Driver/Keypad.o: ../Stm32_F103C6_Drivers/Keypad_Driver/Keypad.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 7/Lesson 3/Drivers/Stm32_F103C6_Drivers/inc" -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 7/Lesson 3/Drivers/Stm32_F103C6_Drivers/Keypad_Driver" -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 7/Lesson 3/Drivers/Stm32_F103C6_Drivers/LCD_Driver" -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 7/Lesson 3/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Stm32_F103C6_Drivers/Keypad_Driver/Keypad.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

