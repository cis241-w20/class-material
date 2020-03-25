#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char c = '-';
    int x = 2;

    printf("x = %d\n", x);
    switch(c) {
        case '+':
            x = x+1;
            printf("it's a +\n");
            break;
        case '-':
            x = x-1;
            printf("it's a -\n");
            break;
        default:
            x = x*2;
            printf("in default\n");
    }

    printf("x = %d\n", x);
    return 0;
}
