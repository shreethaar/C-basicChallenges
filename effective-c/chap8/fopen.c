#include <stdio.h>

int main() {
    FILE *fp;
    fp=fopen("example.txt","w");
    if(fp==NULL) {
        printf("Error opening file!");
        return 1;
    }

    fprintf(fp,"Hello, world!");
    fclose(fp);
    return 0;
}

