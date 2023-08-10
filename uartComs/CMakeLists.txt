cmake_minimum_required(VERSION 3.10)

include ($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(uartComms C CXX ASM)

set(CMAKE_C_STANDARD 11)

set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(${PROJECT_NAME} main.c)

pico_add_extra_outputs(${PROJECT_NAME})

# enable usb output, disable uart output
pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 1)
# target_compile_definitions(${NAME} PRIVATE
#     PICO_DEFAULT_UART_RX_PIN=16
#     PICO_DEFAULT_UART_TX_PIN=17
# )
target_link_libraries(${PROJECT_NAME} pico_stdlib hardware_uart)