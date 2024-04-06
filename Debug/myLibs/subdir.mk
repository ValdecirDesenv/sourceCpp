################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../myLibs/MergeAlternately.cpp \
../myLibs/myCallendar.cpp \
../myLibs/recursionUtils.cpp 

CPP_DEPS += \
./myLibs/MergeAlternately.d \
./myLibs/myCallendar.d \
./myLibs/recursionUtils.d 

OBJS += \
./myLibs/MergeAlternately.o \
./myLibs/myCallendar.o \
./myLibs/recursionUtils.o 


# Each subdirectory must supply rules for building sources it contributes
myLibs/%.o: ../myLibs/%.cpp myLibs/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/vdc/eclipse-workspace/sourceCpp/myLibs" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-myLibs

clean-myLibs:
	-$(RM) ./myLibs/MergeAlternately.d ./myLibs/MergeAlternately.o ./myLibs/myCallendar.d ./myLibs/myCallendar.o ./myLibs/recursionUtils.d ./myLibs/recursionUtils.o

.PHONY: clean-myLibs

