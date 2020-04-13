#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fin, *fout;

    fin = fopen("random.txt", "r");
    fout = fopen("random2.txt", "w");
    
    //Checking to make sure opening worked
    if (fin == NULL) {
        printf("failed to open read file\n");
        return 1;
    }

    if (fout == NULL) {
        printf("failed to open output file\n");
        return 1;
    }
    

    // Reading in with fscanf
    char c;
    fscanf(fin, "%c", &c);
    fprintf(fout, "%c\n", c);
    fscanf(fin, "%c", &c);
    fprintf(fout, "%c\n", c);

    // reading in with fgets
    char *buffer = (char *) malloc(sizeof(char)*10);
    int maxlen = 10;
    fgets(buffer, maxlen, fin);
    fputs(buffer, fout);

    
    fclose(fin);
    fclose(fout);
    return 0;
}
