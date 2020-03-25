#include <stdio.h>
#include <stdlib.h>

// tyoical way
typedef struct Coord {
    double x;
    double y;
    int *list;
} Coord;


/*
// without typedef, must use "struct"
struct Coord {
    double x;
    double y;
};

// typedef after the fact
typedef struct Coord Coord;
*/

int main(void) {
    int x;
    
    // on the stack
    Coord c;
    c.x = 10;
    c.y = 4;
    c.list = (int *)malloc(5*sizeof(int)); // necessary

    printf("(%f,%f)\n", c.x, c.y);

    // pointer way, on the heap
    Coord *cp;
    cp = (Coord *)malloc(sizeof(Coord));
    cp->x = 8;
    (*cp).y = 7;
    cp->list = (int *)malloc(5*sizeof(int)); // necessary

    printf("(%f,%f)\n", cp->x, cp->y);

    free(c.list);
    free(cp->list);
    free(cp); // order of frees matters 
    return 0;
}


