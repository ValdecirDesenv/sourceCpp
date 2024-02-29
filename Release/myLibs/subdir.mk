################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../myLibs/myCallenda.cpp 

CPP_DEPS += \
./myLibs/myCallenda.d 

OBJS += \
./myLibs/myCallenda.o 


# Each subdirectory must supply rules for building sources it contributes
myLibs/%.o: ../myLibs/%.cpp myLibs/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-myLibs

clean-myLibs:
	-$(RM) ./myLibs/myCallenda.d ./myLibs/myCallenda.o

.PHONY: clean-myLibs

