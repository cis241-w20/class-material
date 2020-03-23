#include <stdio.h>
#include <stdlib.h>

// Function prototypes
double sum(double, double);
void swap(int *a, int *b);

int main(void) {
    // Calling sum function
    double d1 = 10.0;
    double d2 = 4.5;
    double tot = sum(d1, d2);
    printf("d1 = %f, d2 = %f, sum = %f\n", d1, d2, tot);

    // Creating ints and calling swap function
    int x = 12;
    int y = 7;
    printf("before swap x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("after swap x = %d, y = %d\n", x, y);

    /* Making pointers way
     * int *x = (int *) malloc(sizeof(int));
     * int *y = (int *) malloc(sizeof(int));
     * *x = 12;
     * *y = 7;
     * swap(x,y)
     */

    return 0;
}

// Function to sum 2 doubles
double sum(double a, double b) {
    double res = a+b;
    a = 100.0;
    b = -30.0;
    return res;
}

// Function to swap 2 integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
