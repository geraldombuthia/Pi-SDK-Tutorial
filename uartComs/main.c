#include "pico/stdlib.h"
#include <stdio.h>
#define DELAY 1000

int main() {
    int i = 0;

    stdio_init_all();

    sleep_ms(2000);
    for(;;) {
        printf("%d\n",i++);
        sleep_ms(DELAY);
    }
}