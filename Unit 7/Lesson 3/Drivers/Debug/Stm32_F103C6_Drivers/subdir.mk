################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Stm32_F103C6_Drivers/Stm32_F103C6_gpio_drivers.c 

OBJS += \
./Stm32_F103C6_Drivers/Stm32_F103C6_gpio_drivers.o 

C_DEPS += \
./Stm32_F103C6_Drivers/Stm32_F103C6_gpio_drivers.d 


# Each subdirectory must supply rules for building sources it contributes
Stm32_F103C6_Drivers/%.o Stm32_F103C6_Drivers/%.su Stm32_F103C6_Drivers/%.cyclo: ../Stm32_F103C6_Drivers/%.c Stm32_F103C6_Drivers/subdir.mk
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 7/Lesson 3/Drivers/Stm32_F103C6_Drivers/Keyboard_Driver" -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 7/Lesson 3/Drivers/Stm32_F103C6_Drivers/LCD_Driver" -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 7/Lesson 3/Drivers/Stm32_F103C6_Drivers/inc" -I"C:/Users/Younis/Desktop/Embedded-diploma-orig/Unit 7/Lesson 3/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Stm32_F103C6_Drivers

clean-Stm32_F103C6_Drivers:
	-$(RM) ./Stm32_F103C6_Drivers/Stm32_F103C6_gpio_drivers.cyclo ./Stm32_F103C6_Drivers/Stm32_F103C6_gpio_drivers.d ./Stm32_F103C6_Drivers/Stm32_F103C6_gpio_drivers.o ./Stm32_F103C6_Drivers/Stm32_F103C6_gpio_drivers.su

.PHONY: clean-Stm32_F103C6_Drivers

