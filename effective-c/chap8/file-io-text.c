#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char* filename = "example.txt";
    FILE* fp = fopen(filename,"w");
    if(fp==NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    // write a message to the file
    fprintf(fp,"Hello, File I/O in C!\nThis is a sample text file.\n");
    fclose(fp);

    // open the file for reading
    fp=fopen(filename,"r");
    if(fp==NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    // read and display the file content
    char buffer[256];
    while(fgets(buffer,sizeof(buffer),fp)!=NULL) {
        printf("%s",buffer);
    }

    fclose(fp);
    return EXIT_SUCCESS;
}

