#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool b = 1;
    int x = 5.0;
    double y = 5.0/2;
    char c = 50;
    int i;
    printf("x = %d, y = %d c = %c\n", x, (int)y, c);
    if (b) printf("b = %d\n", b);
    double z = x>y ? x : y;
    printf("z = %f", z);

    //Arrays
    int arr[10];
    int arr2[3] = {2,4,5};
    char arr3[] = "hello";

    for (i=0; i<10; i++) {
        arr[i] = 0;
    }
    i = 0;
    while(i<10) {
        arr[i] = i;
        i++;
    }
    return 0;
}
