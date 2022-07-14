#include <stdio.h>
#include <stdint.h>
#include "button2.h"

// FIXME make void after int testing is complete
int btn_int(void *id, void *state)
{
    int btn_id = *(int*) id;
    uint8_t btn_state = *(uint8_t *) state;
    printf("received button interrupt %d, state %d\n", btn_id, btn_state);

    return 0;
}

int int_attach(uint32_t int_en_bits, int gpio_bank)
{
    printf("enabling bits 0x%X to gpio_bank %d\n",
           int_en_bits, gpio_bank);

    return 0;
}
