#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *p1;
    int x = 5;

    printf("p1 before malloc = %p\n", p1);
    
    // allocating memory for one int
    p1 = (int *) malloc(sizeof(int));

    printf("p1 after malloc = %p\n", p1);
    printf("value of p1 before setting = %d\n", *p1);
    *p1 = 10;
    printf("value of p1 after setting = %d\n", *p1);

    int arr[5]; //on the stack

    arr[2] = 1;
    printf("arr = %p\n", arr);
    printf("arr[2] = %d\n", arr[2]);

    *(arr+3) = 80;
    
    //pointer arithmetic
    printf("*(arr+2) = %d\n", *(arr+2));
    printf("*(arr+3) = %d\n", *(arr+3));

    // allocating memory for multiple items / array
    int *p2;
    int *p3;
    p2 = (int *) malloc(100*sizeof(int));
    p3 = (int *) malloc(100*sizeof(int));

    for(int i=0; i<100; i++) {
        *(p2+i) = i; //pointer arithmetic notation
        p3[i] = i; //array access notation
    }

    printf("*(p2+5) = %d\n", *(p2+5));
    printf("*(p3+5) = %d\n", *(p3+5));

    // Compare char and int *s
    char *c;
    c = (char *) malloc(sizeof(char)*10);
    printf("c = %p\n", c);
    printf("c+1 = %p\n", c+1);
    printf("p2 = %p\n", p2);
    printf("p2+1 = %p\n", p2+1);

    *(p2 + 200) = 80;

    // calloc - initialized to 0
    char *c2 = (char *) calloc(10, sizeof(char));

    c2 = (char *) realloc(c2, 20*sizeof(char));

    free(c2);
    free(p2);
    free(p3);
    free(p1);

}
