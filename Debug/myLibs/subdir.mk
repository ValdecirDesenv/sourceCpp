################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../myLibs/myCallendar.cpp 

CPP_DEPS += \
./myLibs/myCallendar.d 

OBJS += \
./myLibs/myCallendar.o 


# Each subdirectory must supply rules for building sources it contributes
myLibs/%.o: ../myLibs/%.cpp myLibs/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/vdc/eclipse-workspace/sourceCpp/myLibs" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-myLibs

clean-myLibs:
	-$(RM) ./myLibs/myCallendar.d ./myLibs/myCallendar.o

.PHONY: clean-myLibs

