#include <stdio.h>
#include <stdlib.h>

#include "sum.h"

int main(void) {
    double a = 10;
    double b = 5;

    double c = sum(a, b);
    printf("sum is %f\n", c);
    return 0;
}
