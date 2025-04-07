#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char buffer[255];
    fp=fopen("example.txt","r");
    if(fp!=NULL) {
        fgets(buffer,255,fp);
        printf("Data read from file: %s", buffer);
        fclose(fp);
    } 
    else {
        printf("Error opening file!");
    }
}

