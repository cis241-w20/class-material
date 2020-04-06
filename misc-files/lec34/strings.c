#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s2[] = "hello darkness my old friend";
    char *s3 = (char *) malloc(sizeof(char)*10);

    char *s = (char *) malloc(sizeof(char)*3);
    *s = 'g';
    *(s+1) = 'o';
    *(s+2) = 'o';
    *(s+3) = 'd';
    *(s+4) = 'b';
    *(s+5) = 'y';
    *(s+6) = 'e';
    *(s+7) = '\0';


    //Unsafe
    //strcpy(s3, s2);

    //Safe
    strncpy(s3,"abc",10);
    printf("%s\n", s3);


    int n = strlen(s);
    printf("%d\n", n);

    printf("%s\n", s);

    char *member = strchr(s2, 'l');
    printf("%p, %p\n", s2, member);
    int res = strncmp(s2,s,2);
    printf("%d\n", res);

    int *arr = (int *) malloc(sizeof(int)*10);
    memset(arr, 0, 40);
    printf("%d\n", *arr);

    memcpy(s, s3, 10);
    printf("%s\n", s);
    return 0;
}
