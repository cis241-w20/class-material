#include <stdio.h>

int main(void) {
    // Other pointers
    char *cptr;
    float *fptr;

    // integers and int pointers
    int a = 5;
    int b = 6;
    int c;
    int *iptr;
    int *jptr;

    printf("iptr before initializing = %p\n", iptr);
    printf("jptr before initializing = %p\n", jptr);

    jptr = &a;
    iptr = &c;
    *iptr = 100;
    
    printf("jptr = %p\n", jptr);
    printf("value at jptr = %d\n", *jptr);
    printf("iptr = %p\n", iptr);
    printf("value at iptr = %d\n", *iptr);

    printf("address of b = %p\n", &b);
    printf("b = %d\n", b);

}
