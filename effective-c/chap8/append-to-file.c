#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp=fopen("example.txt","a");
    if(fp!=NULL) {
        fprintf(fp,"This is a new line.\n");
        fclose(fp);
    }
    else {
        printf("Error opening file!");
    }
    return 0;
}
