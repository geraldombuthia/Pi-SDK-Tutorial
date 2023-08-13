cmake_minimum_required(VERSION 3.12)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(pico_adc C CXX ASM)

pico_sdk_init()

add_executable(pico_adc pico_adc.cpp)

pico_enable_stdio_usb(pico_adc 1)

pico_enable_stdio_uart(pico_adc 1)

pico_add_extra_outputs(pico_adc)

target_link_libraries(pico_adc pico_stdlib hardware_adc)



