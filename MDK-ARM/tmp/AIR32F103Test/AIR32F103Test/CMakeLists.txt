# CMSIS Build CMakeLists generated on 2023-08-20T19:14:04

cmake_minimum_required(VERSION 3.22)

# Target options

set(TARGET AIR32F103Test)
set(CPU Cortex-M3)
set(PRJ_DIR "d:/Air001Test/AIR32F103Test/MDK-ARM")
set(OUT_DIR "D:/Air001Test/AIR32F103Test/MDK-ARM/out/AIR32F103Test/AIR32F103Test")
set(INT_DIR "D:/Air001Test/AIR32F103Test/MDK-ARM/tmp/AIR32F103Test/AIR32F103Test")
set(FPU NO_FPU)
set(SECURE Non-secure)
set(BYTE_ORDER Little-endian)
set(OPTIMIZE speed)
set(DEBUG on)
set(AS_FLAGS_GLOBAL "-masm=auto")
set(CC_FLAGS_GLOBAL "-fno-rtti -funsigned-char -fshort-enums -fshort-wchar -ffunction-sections -std=c99 -w")
set(CXX_FLAGS_GLOBAL "-fno-rtti -funsigned-char -fshort-enums -fshort-wchar -ffunction-sections -std=c99 -w")
set(LD_FLAGS_GLOBAL "--map --load_addr_map_info --xref --callgraph --symbols --info sizes --info totals --info unused --info veneers --list --strict --summary_stderr --info summarysizes")
set(LD_SCRIPT "d:/Air001Test/AIR32F103Test/MDK-ARM/AIR32F103Test_AIR32F103Test.sct")

set(DEFINES
  AIR32F10X_MD
  _RTE_
  USE_HAL_DRIVER
  AIR32F103xB
)

set(INC_PATHS
  "d:/Air001Test/AIR32F103Test/Core/Inc"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Inc"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Inc/Legacy"
  "d:/Air001Test/AIR32F103Test/Drivers/CMSIS/Device/AIR32F1xx/Include"
  "d:/Air001Test/AIR32F103Test/MDK-ARM/RTE/_AIR32F103Test"
  "C:/Users/HalfSweet/AppData/Local/Arm/Packs/ARM/CMSIS/5.9.0/CMSIS/Core/Include"
  "C:/Users/HalfSweet/AppData/Local/Arm/Packs/Keil/AIR32F103_DFP/1.1.7/Device/Include"
)

set(AS_ARM_SRC_FILES
  "d:/Air001Test/AIR32F103Test/Core/Src/startup_air32f10x.s"
)

set(CC_SRC_FILES
  "d:/Air001Test/AIR32F103Test/Core/Src/air32f1xx_hal_msp.c"
  "d:/Air001Test/AIR32F103Test/Core/Src/air32f1xx_it.c"
  "d:/Air001Test/AIR32F103Test/Core/Src/gpio.c"
  "d:/Air001Test/AIR32F103Test/Core/Src/main.c"
  "d:/Air001Test/AIR32F103Test/Core/Src/myPrintf.c"
  "d:/Air001Test/AIR32F103Test/Core/Src/usart.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_cortex.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_crc.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_dma.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_exti.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_flash.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_flash_ex.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_gpio.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_gpio_ex.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_hcd.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_i2c.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_i2s.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_irda.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_iwdg.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_mmc.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_pwr.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_rcc.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_rcc_ex.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_rtc.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_rtc_ex.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_sd.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_spi.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_tim.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_tim_ex.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_uart.c"
  "d:/Air001Test/AIR32F103Test/Drivers/AIR32F1xx_HAL_Driver/Src/air32f1xx_hal_usart.c"
  "d:/Air001Test/AIR32F103Test/Drivers/CMSIS/Device/AIR32F1xx/Source/system_air32f1xx.c"
)

# Toolchain config map

set(REGISTERED_TOOLCHAIN_ROOT "c:/Users/HalfSweet/.vcpkg/artifacts/fd3d78d7/compilers.arm.armclang/6.20.0/bin")
set(REGISTERED_TOOLCHAIN_VERSION "6.20.0")
set(TOOLCHAIN_VERSION_MIN "6.20.0")
include ("C:/Users/HalfSweet/.vcpkg/artifacts/fd3d78d7/tools.open.cmsis.pack.cmsis.toolbox/2.0.0/etc/AC6.6.18.0.cmake")
include ("C:/Users/HalfSweet/.vcpkg/artifacts/fd3d78d7/tools.open.cmsis.pack.cmsis.toolbox/2.0.0/etc/CMSIS-Build-Utils.cmake")

# Setup project

project(${TARGET} LANGUAGES AS_ARM C)

cbuild_get_running_toolchain(TOOLCHAIN_ROOT TOOLCHAIN_VERSION C)

# Global Flags

set(CMAKE_AS_ARM_FLAGS "${AS_ARM_CPU} ${AS_ARM_BYTE_ORDER} ${AS_ARM_DEFINES} ${AS_ARM_OPTIONS_FLAGS} ${AS_ARM_FLAGS} ${AS_FLAGS_GLOBAL}")
cbuild_get_system_includes(CC_SYS_INC_PATHS_LIST CC_SYS_INC_PATHS)
set(CMAKE_C_FLAGS "${CC_CPU} ${CC_BYTE_ORDER} ${CC_DEFINES} ${CC_SECURE} ${CC_OPTIONS_FLAGS} ${CC_FLAGS} ${CC_FLAGS_GLOBAL} ${CC_SYS_INC_PATHS}")
set(CMAKE_C_LINK_FLAGS "${LD_CPU} ${_LS}\"${LD_SCRIPT}\" ${LD_SECURE} ${LD_FLAGS_GLOBAL} ${LD_OPTIONS_FLAGS} ${LD_FLAGS}")

# Local Flags

foreach(SRC ${AS_ARM_SRC_FILES})
  set_source_files_properties(${SRC} PROPERTIES LANGUAGE AS_ARM)
endforeach()

# Compilation Database

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_custom_target(database COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INT_DIR}/compile_commands.json" "${OUT_DIR}")

# Setup Target

add_executable(${TARGET} ${AS_ARM_SRC_FILES} ${CC_SRC_FILES})
set_target_properties(${TARGET} PROPERTIES PREFIX "" SUFFIX ".axf" OUTPUT_NAME "AIR32F103Test")
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${OUT_DIR} LINK_DEPENDS ${LD_SCRIPT})
target_include_directories(${TARGET} PUBLIC ${INC_PATHS})
