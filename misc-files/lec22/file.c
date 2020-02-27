#include<stdio.h>
int main(void) {
    int x = 5;
    int x2 = 3;
    long y = 10;
    double z = 10.0;
    double z2 = 1348931.3408925;
    char c = 'h';
    char s[] = "hello";
    printf("%d %05.2f %c %s\n", x2, z2, c, s);

    return 0;
}
