#include <stdio.h>
#include "constants.h"

int main()
{
    int a = AVALUE;
    int b = BVALUE;
    int c;

    // Very useful functionality
    c = a * b;
    printf("a * b = %d\n", c);

    c = a + b;
    printf("a + b = %d\n", c);
}
