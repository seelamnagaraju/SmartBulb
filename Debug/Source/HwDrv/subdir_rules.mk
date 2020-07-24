################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
Source/HwDrv/F2806x_Adc.obj: ../Source/HwDrv/F2806x_Adc.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_Adc.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_CodeStartBranch.obj: ../Source/HwDrv/F2806x_CodeStartBranch.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_CodeStartBranch.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_CpuTimers.obj: ../Source/HwDrv/F2806x_CpuTimers.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_CpuTimers.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_DefaultIsr.obj: ../Source/HwDrv/F2806x_DefaultIsr.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_DefaultIsr.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_Dma.obj: ../Source/HwDrv/F2806x_Dma.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_Dma.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_GlobalVariableDefs.obj: ../Source/HwDrv/F2806x_GlobalVariableDefs.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_GlobalVariableDefs.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_Gpio.obj: ../Source/HwDrv/F2806x_Gpio.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_Gpio.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_I2C.obj: ../Source/HwDrv/F2806x_I2C.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_I2C.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_PieCtrl.obj: ../Source/HwDrv/F2806x_PieCtrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_PieCtrl.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_PieVect.obj: ../Source/HwDrv/F2806x_PieVect.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_PieVect.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_Sci.obj: ../Source/HwDrv/F2806x_Sci.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_Sci.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_SysCtrl.obj: ../Source/HwDrv/F2806x_SysCtrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_SysCtrl.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_Xint1.obj: ../Source/HwDrv/F2806x_Xint1.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_Xint1.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/HwDrv/F2806x_usDelay.obj: ../Source/HwDrv/F2806x_usDelay.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/HwDrv/F2806x_usDelay.d_raw" --obj_directory="Source/HwDrv" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


