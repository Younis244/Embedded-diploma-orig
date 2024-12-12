################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Stm32_F103C6_Drivers/EXTI/Stm32_F103C6_EXTI_drivers.c 

OBJS += \
./Stm32_F103C6_Drivers/EXTI/Stm32_F103C6_EXTI_drivers.o 

C_DEPS += \
./Stm32_F103C6_Drivers/EXTI/Stm32_F103C6_EXTI_drivers.d 


# Each subdirectory must supply rules for building sources it contributes
Stm32_F103C6_Drivers/EXTI/Stm32_F103C6_EXTI_drivers.o: ../Stm32_F103C6_Drivers/EXTI/Stm32_F103C6_EXTI_drivers.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 8/Lesson 3/UART_Driver/Stm32_F103C6_Drivers/inc" -I../Inc -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 8/Lesson 3/UART_Driver/HAL/includes" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Stm32_F103C6_Drivers/EXTI/Stm32_F103C6_EXTI_drivers.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

