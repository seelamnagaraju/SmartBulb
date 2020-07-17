################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
Source/Apps/SmartBulb.obj: ../Source/Apps/SmartBulb.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/Users/mamat/SmartBulb" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Source/Apps/SmartBulb.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/TempMonitor.obj: ../Source/Apps/TempMonitor.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/Users/mamat/SmartBulb" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Source/Apps/TempMonitor.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


