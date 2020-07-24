################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
-lrts2800_fpu32_fast_supplement.lib \
-lrts2800_fpu32.lib \
"./Source/Apps/SmartBulb.obj" \
"./Source/Apps/TempMonitor.obj" \
"./Source/Apps/adc.obj" \
"./Source/Apps/dac.obj" \
"./Source/Apps/delay.obj" \
"./Source/Apps/dma.obj" \
"./Source/Apps/gpio.obj" \
"./Source/Apps/i2c.obj" \
"./Source/Apps/pwm.obj" \
"./Source/Apps/sci.obj" \
"./Source/Apps/spi.obj" \
"./Source/Apps/timer.obj" \
"./Source/Apps/utils.obj" \
"./Source/Apps/watchdog.obj" \
"./Source/HwDrv/F2806x_Adc.obj" \
"./Source/HwDrv/F2806x_CodeStartBranch.obj" \
"./Source/HwDrv/F2806x_CpuTimers.obj" \
"./Source/HwDrv/F2806x_DefaultIsr.obj" \
"./Source/HwDrv/F2806x_Dma.obj" \
"./Source/HwDrv/F2806x_GlobalVariableDefs.obj" \
"./Source/HwDrv/F2806x_Gpio.obj" \
"./Source/HwDrv/F2806x_I2C.obj" \
"./Source/HwDrv/F2806x_PieCtrl.obj" \
"./Source/HwDrv/F2806x_PieVect.obj" \
"./Source/HwDrv/F2806x_Sci.obj" \
"./Source/HwDrv/F2806x_SysCtrl.obj" \
"./Source/HwDrv/F2806x_Xint1.obj" \
"./Source/HwDrv/F2806x_usDelay.obj" \
"../F2806x-LaunchPad-RAM.cmd" \
"C:/ti/c2000/C2000Ware_3_02_00_00/device_support/f2806x/headers/cmd/F2806x_Headers_nonBIOS.cmd" \
$(GEN_CMDS__FLAG) \
-lIQmath_fpu32.lib \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include Source/Apps/subdir_vars.mk
-include Source/HwDrv/subdir_vars.mk
-include subdir_rules.mk
-include Source/Apps/subdir_rules.mk
-include Source/HwDrv/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
Example_2806xSci_Echoback.out \

EXE_OUTPUTS__QUOTED += \
"Example_2806xSci_Echoback.out" \

BIN_OUTPUTS += \
Example_2806xSci_Echoback.hex \

BIN_OUTPUTS__QUOTED += \
"Example_2806xSci_Echoback.hex" \


# All Target
all: Example_2806xSci_Echoback.out

# Tool invocations
Example_2806xSci_Echoback.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --define="_DEBUG" --define="LARGE_MODEL" -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet -z -m"Example_2806xSci_Echoback.map" --stack_size=0x200 --warn_sections -i"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/lib" -i"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/include" -i"C:/ti/c2000/C2000Ware_3_02_00_00/device_support/f2806x/common/lib" -i"C:/ti/c2000/C2000Ware_3_02_00_00/libraries/math/IQmath/c28/lib" -i"C:/ti/c2000/C2000Ware_3_02_00_00/libraries/math/FPUfastRTS/c28/lib" --priority --reread_libs --issue_remarks --verbose_diagnostics --xml_link_info="Example_2806xSci_Echoback_linkInfo.xml" --entry_point=code_start --rom_model -o "Example_2806xSci_Echoback.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

Example_2806xSci_Echoback.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: C2000 Hex Utility'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.11.LTS/bin/hex2000"  -o "Example_2806xSci_Echoback.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "Source\Apps\SmartBulb.obj" "Source\Apps\TempMonitor.obj" "Source\Apps\adc.obj" "Source\Apps\dac.obj" "Source\Apps\delay.obj" "Source\Apps\dma.obj" "Source\Apps\gpio.obj" "Source\Apps\i2c.obj" "Source\Apps\pwm.obj" "Source\Apps\sci.obj" "Source\Apps\spi.obj" "Source\Apps\timer.obj" "Source\Apps\utils.obj" "Source\Apps\watchdog.obj" "Source\HwDrv\F2806x_Adc.obj" "Source\HwDrv\F2806x_CodeStartBranch.obj" "Source\HwDrv\F2806x_CpuTimers.obj" "Source\HwDrv\F2806x_DefaultIsr.obj" "Source\HwDrv\F2806x_Dma.obj" "Source\HwDrv\F2806x_GlobalVariableDefs.obj" "Source\HwDrv\F2806x_Gpio.obj" "Source\HwDrv\F2806x_I2C.obj" "Source\HwDrv\F2806x_PieCtrl.obj" "Source\HwDrv\F2806x_PieVect.obj" "Source\HwDrv\F2806x_Sci.obj" "Source\HwDrv\F2806x_SysCtrl.obj" "Source\HwDrv\F2806x_Xint1.obj" "Source\HwDrv\F2806x_usDelay.obj" 
	-$(RM) "Source\Apps\SmartBulb.d" "Source\Apps\TempMonitor.d" "Source\Apps\adc.d" "Source\Apps\dac.d" "Source\Apps\delay.d" "Source\Apps\dma.d" "Source\Apps\gpio.d" "Source\Apps\i2c.d" "Source\Apps\pwm.d" "Source\Apps\sci.d" "Source\Apps\spi.d" "Source\Apps\timer.d" "Source\Apps\utils.d" "Source\Apps\watchdog.d" "Source\HwDrv\F2806x_Adc.d" "Source\HwDrv\F2806x_CpuTimers.d" "Source\HwDrv\F2806x_DefaultIsr.d" "Source\HwDrv\F2806x_Dma.d" "Source\HwDrv\F2806x_GlobalVariableDefs.d" "Source\HwDrv\F2806x_Gpio.d" "Source\HwDrv\F2806x_I2C.d" "Source\HwDrv\F2806x_PieCtrl.d" "Source\HwDrv\F2806x_PieVect.d" "Source\HwDrv\F2806x_Sci.d" "Source\HwDrv\F2806x_SysCtrl.d" "Source\HwDrv\F2806x_Xint1.d" 
	-$(RM) "Source\HwDrv\F2806x_CodeStartBranch.d" "Source\HwDrv\F2806x_usDelay.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

