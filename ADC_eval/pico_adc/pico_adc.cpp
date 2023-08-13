#include <stdio.h>

#include "pico/stdlib.h"

#include "hardware/adc.h"



int main() {

    stdio_init_all();

    adc_init();

    adc_gpio_init(26);

    adc_select_input(0);



    while (true) {

        uint16_t result = adc_read();

        printf("ADC reading: %d\n", result);

        sleep_ms(500);

    }

}

