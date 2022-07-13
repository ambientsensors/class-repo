#define ALS_EN_GPIO 11
#define ALS_READ_ADDR 0xA110FF30


#include <stdio.h>
#include <stdint.h>

int als_read_reg(uint32_t als_reg_addr)
{
    printf("read value of 0x%X from als at addr 0x%X\n",
           200, ALS_READ_ADDR);

    return 0;
}

int enable_als(uint32_t interrupt_en_bits, int gpio_bank)
{
    printf("enabling bits 0x%X to gpio_bank %d\n",
           interrupt_en_bits, gpio_bank);

    return 0;
}
