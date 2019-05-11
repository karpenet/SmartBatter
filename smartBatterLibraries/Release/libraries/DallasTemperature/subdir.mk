################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/Users/karpenet/Documents/Arduino/libraries/DallasTemperature/DallasTemperature.cpp 

LINK_OBJ += \
./libraries/DallasTemperature/DallasTemperature.cpp.o 

CPP_DEPS += \
./libraries/DallasTemperature/DallasTemperature.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
libraries/DallasTemperature/DallasTemperature.cpp.o: /Users/karpenet/Documents/Arduino/libraries/DallasTemperature/DallasTemperature.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/Applications/Eclipse.app/Contents/Eclipse//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/Applications/Eclipse.app/Contents/Eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/cores/arduino" -I"/Applications/Eclipse.app/Contents/Eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/variants/standard" -I"/Users/karpenet/Documents/Arduino/libraries/DallasTemperature" -I"/Users/karpenet/Documents/Arduino/libraries/OneWire" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


