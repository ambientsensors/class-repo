#include <stdio.h>
#include <stdint.h>
#include "constants.h"
#include "button2.h"

int main()
{
    int a = A_VALUE;
    int b = B_VALUE;
    int c;
    // FIXME remove these 2 lines when interrupt testing complete
    int testid;
    int teststate;

    // Very useful functionality
    c = a + b;
    printf("a * b = %d\n", c);

    c = a + b;
    printf("a + b = %d\n", c);

    c = a - b;
    printf("a - b = %d\n", c);

    int_attach(BUTTON2_BITS, BUTTON2_GPIO_INT);
    // FIXME testing the btn_int before the h/w arrives - remove
    testid = 0;
    teststate = 1;
    btn_int(&testid, &teststate);
    testid = 1;
    btn_int(&testid, &teststate);
}
