#include <stdio.h>
#include <stdlib.h>

struct Student {
    char *name;
    double *scores;
    int grad_year;
};

typedef union idc {
    int i;
    double d;
    char c;
} idc;

typedef enum type {INT, CHAR, DOUBLE} type;

typedef struct EU {
    type ty;
    idc var;
} EU;

typedef struct Student Stdnt;

typedef enum day_of_week {Mon, Tue, Wed, Thu, Fri, Sat, Sun, HumpDay=2} day_of_week;

int main(void) {


    day_of_week day = Wed;
    if (day == 2) {
        printf("It's humpday!\n");
    }

    idc temp;
    temp.d = 16.8;
    idc temp2;
    temp2.i = 16;

    EU random;
    random.ty = INT;
    random.var.i = 16;


    return 0;
}
