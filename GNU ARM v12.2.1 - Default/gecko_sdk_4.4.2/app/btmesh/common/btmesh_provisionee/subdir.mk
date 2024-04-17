################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk/app/btmesh/common/btmesh_provisionee/sl_btmesh_provisionee.c 

OBJS += \
./gecko_sdk_4.4.2/app/btmesh/common/btmesh_provisionee/sl_btmesh_provisionee.o 

C_DEPS += \
./gecko_sdk_4.4.2/app/btmesh/common/btmesh_provisionee/sl_btmesh_provisionee.d 


# Each subdirectory must supply rules for building sources it contributes
gecko_sdk_4.4.2/app/btmesh/common/btmesh_provisionee/sl_btmesh_provisionee.o: C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk/app/btmesh/common/btmesh_provisionee/sl_btmesh_provisionee.c gecko_sdk_4.4.2/app/btmesh/common/btmesh_provisionee/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -std=c99 '-DEFR32BG21A010F1024IM32=1' '-DSL_APP_PROPERTIES=1' '-DBOOTLOADER_APPLOADER=1' '-DSL_COMPONENT_CATALOG_PRESENT=1' '-DMBEDTLS_CONFIG_FILE=<sl_mbedtls_config.h>' '-DMBEDTLS_PSA_CRYPTO_CONFIG_FILE=<psa_crypto_config.h>' '-DSL_RAIL_LIB_MULTIPROTOCOL_SUPPORT=0' '-DSL_RAIL_UTIL_PA_CONFIG_HEADER=<sl_rail_util_pa_config.h>' '-DRTT_USE_ASM=0' '-DSEGGER_RTT_SECTION="SEGGER_RTT"' '-DSLI_RADIOAES_REQUIRES_MASKING=1' -I"C:\Users\progi\SimplicityStudio\v5_workspace\4.4.2_raw_btmesh_soc_empty\config" -I"C:\Users\progi\SimplicityStudio\v5_workspace\4.4.2_raw_btmesh_soc_empty\config\btconf" -I"C:\Users\progi\SimplicityStudio\v5_workspace\4.4.2_raw_btmesh_soc_empty\config\btmeshconf" -I"C:\Users\progi\SimplicityStudio\v5_workspace\4.4.2_raw_btmesh_soc_empty" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFR32BG21/Include" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/common/util/app_assert" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/btmesh/common/app_btmesh_util" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/common/util/app_log" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/common/util/app_timer" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//protocol/bluetooth/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//protocol/bluetooth/bgcommon/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//protocol/bluetooth/bgstack/ll/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/bootloader" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/bootloader/api" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/btmesh/common/btmesh_event_log" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/btmesh/common/btmesh_factory_reset" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/btmesh/common/btmesh_lc_server" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/btmesh/common/btmesh_lighting_server" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/btmesh/common/btmesh_provisionee" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/btmesh/common/btmesh_sensor_server" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/bluetooth/common/in_place_ota_dfu" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/security/sl_component/sl_mbedtls_support/config" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/security/sl_component/sl_mbedtls_support/config/preset" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/security/sl_component/sl_mbedtls_support/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//util/third_party/mbedtls/include" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//util/third_party/mbedtls/library" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/service/mpu/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/nvm3/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/security/sl_component/sl_psa_driver/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/radio/rail_lib/common" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/radio/rail_lib/protocol/ble" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/radio/rail_lib/protocol/ieee802154" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/radio/rail_lib/protocol/wmbus" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/radio/rail_lib/protocol/zwave" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/radio/rail_lib/chip/efr32/efr32xg2x" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/radio/rail_lib/protocol/sidewalk" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/radio/rail_lib/plugin/pa-conversions" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/radio/rail_lib/plugin/pa-conversions/efr32xg21" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/radio/rail_lib/plugin/rail_util_power_manager_init" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/radio/rail_lib/plugin/rail_util_pti" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/radio/rail_lib/plugin/rail_util_rf_path" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/security/sl_component/se_manager/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/security/sl_component/se_manager/src" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//util/third_party/segger/systemview/SEGGER" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//util/silicon_labs/silabs_core/memory_manager" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//platform/security/sl_component/sl_protocol_crypto/src" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/bluetooth/common/throughput" -I"C:/Users/progi/SimplicityStudio/SDKs/gecko_sdk//app/bluetooth/common/throughput_ui" -I"C:\Users\progi\SimplicityStudio\v5_workspace\4.4.2_raw_btmesh_soc_empty\autogen" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mcmse --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"gecko_sdk_4.4.2/app/btmesh/common/btmesh_provisionee/sl_btmesh_provisionee.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


