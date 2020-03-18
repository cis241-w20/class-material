#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, c;
    int tot = 0;
   
    // Example of accepting and outputting
    //scanf("%d %d %d", &a, &b, &c);
    //printf("you entered:  %d %d %d\n", a, b, c);

    //scanf
    /*
    int res = 1+EOF;
    while (res != EOF) {
        printf("current sum = %d\n", tot);
        res = scanf("%d", &a);
        tot += a;
    }
    */

    // fgets
    /*
    int maxn = 10;
    char *p = (char *) malloc(sizeof(char)*maxn);

    p = fgets(p, maxn, stdin);
    if (p != NULL) {
        printf("you entered: %s\n", p);
    }
    */


    //getline
    char *s;
    int nread;
    size_t maxn = 10;
    s = (char *) malloc(sizeof(char)*maxn);

    nread = getline(&s, &maxn, stdin);
    printf("you entered %d characters\n", nread);
    printf("you entered %s\n", s);

    return 0;
}
