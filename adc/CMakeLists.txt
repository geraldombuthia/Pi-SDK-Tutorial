cmake_minimum_required(VERSION 3.25)

project(adc C CXX ASM)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

set(CMAKE_C_STANDARD 11)

set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(adc main.c)

pico_enable_stdio_usb(adc 1)

pico_enable_stdio_uart(adc 1)

pico_add_extra_outputs(adc)

target_link_libraries(adc pico_stdlib hardware_adc)