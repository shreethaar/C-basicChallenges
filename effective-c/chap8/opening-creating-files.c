#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // "w" - create a new file for writing (truncated if file exists)
    FILE* fp = fopen("test_write.txt","w");
    if(fp==NULL) {
        perror("Failed to open file in write mode");
        return EXIT_FAILURE;
    }

    fprintf(fp, "This file was created with mode \"w\".\n");
    fclose(fp);

    // "a" - Append mode (creates file if it doesn't exist) 
    fp = fopen("test_append.txt", "a");
    if(fp==NULL) {
        perror("Failed to open file in append mode");
        return EXIT_FAILURE;
    }

    fprintf(fp, "Appending a line.\n");
    fclose(fp);

    // "r" - Read mode (file must exist) 
    fp = fopen("test_write.txt","r");
    if(fp==NULL) {
        perror("Failed to open file in read mode");
        return EXIT_FAILURE;
    }

    fclose(fp);
    return EXIT_SUCCESS;
}

