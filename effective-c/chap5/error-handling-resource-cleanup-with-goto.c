#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1=NULL;
    FILE *file2=NULL;
    char *buffer=NULL;

    file1=fopen("file1.txt","r");
    if(!file1) {
        perror("Failed to open file1");
        goto cleanup;

    }

    file2=fopen("file2.txt","r");
    if(!file2) {
        perror("Failed to open file2");
        goto cleanup;
    }

    buffer=malloc(1024);
    if(!buffer) {
        perror("Failed to allocate buffer");
        goto cleanup;
    }

cleanup:
    if(buffer) {
        free(buffer);
    }
    if(file2) {
        fclose(file2);
    }
    if(file1) {
        fclose(file1);
    }
    return 0;
}

