#include <stdio.h>
#include "constants.h"

int main()
{
    int a = A_VALUE;
    int b = B_VALUE;
    int c;

    // Very useful functionality
    c = a * b;
    printf("a * b = %d\n", c);

    c = a + b;
    printf("a + b = %d\n", c);

    c = a - b;
    printf("a - b = %d\n", c);
}
