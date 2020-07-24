################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
Source/Apps/SmartBulb.obj: ../Source/Apps/SmartBulb.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/SmartBulb.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/TempMonitor.obj: ../Source/Apps/TempMonitor.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/TempMonitor.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/adc.obj: ../Source/Apps/adc.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/adc.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/dac.obj: ../Source/Apps/dac.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/dac.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/delay.obj: ../Source/Apps/delay.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/delay.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/dma.obj: ../Source/Apps/dma.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/dma.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/gpio.obj: ../Source/Apps/gpio.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/gpio.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/i2c.obj: ../Source/Apps/i2c.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/i2c.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/pwm.obj: ../Source/Apps/pwm.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/pwm.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/sci.obj: ../Source/Apps/sci.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/sci.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/spi.obj: ../Source/Apps/spi.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/spi.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/timer.obj: ../Source/Apps/timer.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/timer.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/utils.obj: ../Source/Apps/utils.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/utils.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Source/Apps/watchdog.obj: ../Source/Apps/watchdog.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" --include_path="C:/Users/mamat/SmartBulb/Header/HwDrv" --include_path="C:/Users/mamat/SmartBulb/Header/Common" --include_path="C:/Users/mamat/SmartBulb/Header/Apps" --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="Source/Apps/watchdog.d_raw" --obj_directory="Source/Apps" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


