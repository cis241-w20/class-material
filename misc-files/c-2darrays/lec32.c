#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nrows = 3;
    int ncols = 4;

    //int m[3][4]; //it knows about rows/cols

    // Option 1
    int *mat = (int *) malloc(nrows*ncols*sizeof(int));
    for(int i=0; i<nrows*ncols; i++) {
        *(mat+i) = i;
    }
    printf("mat[1] = %d\n", mat[1]);
    //printf("mat[1][2] = %d\n", mat[1][2]);  // can't do

    // Important conversion from 2d to 1d index
    printf("mat[1][2] = %d\n", *(mat + 1*ncols + 2));

    // Option 2
    int **mat = (int **) malloc(nrows*sizeof(int *));
    for (int i=0; i< nrows; i++) {
        // Allocate memory for row
        *(mat+i) = (int *) malloc(ncols*sizeof(int));
    }

    return 0;
}
