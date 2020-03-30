#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // 1D Array Recap
    int *pa;
    int arr[7] = {1,2,3,4,5,6,7};
    //printf("arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

    pa = arr;    
    //printf("pa = %p, *pa = %d, pa+1 = %p, *(pa+1) = %d\n", pa, *pa, pa+1, *(pa+1));


    // 2D Arrays
    int mat[3][4] = {{1,3,4,8},{10,9,7,2},{5,6,11,12}};
    //printf("mat[0][0] = %d, mat[1,2] = %d\n", mat[0][0], mat[1][2]);

    int *pm;
    pm = &mat[0][0];
    printf("pm = %p, mat = %p, mat[0] = %p\n", pm, mat, mat[0]);
    //Pointer arithmetic to advance by row
    printf("mat[1] = %p, mat+1 = %p, *(mat+1) = %p\n", mat[1], mat+1, *(mat+1));
    // Accessing into column
    printf("mat[1][2] = %d, *(mat[1] + 2) = %d, *(*(mat+1) + 2) = %d\n", mat[1][2], *(mat[1] + 2), *(*(mat+1) + 2));
    printf("*((mat+1)+2) = %d\n", *((mat+1)+2));  // Kept advancing by rows
}
