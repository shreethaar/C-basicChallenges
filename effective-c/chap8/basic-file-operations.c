#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <threads.h>

int main(void) {
    FILE *file;
    char buffer[100];

    // opening a file for writing
    file=fopen("example.txt","w");
    if(file==NULL) {
        fprintf(stderr,"Error opening file: %s\n", strerror(errno));
        return EXIT_FAILURE;
    }

    // writing to a file 
    fputs("Hello, this a file I/O example.\n", file);
    fprintf(file,"Numbers: %d, %f\n",42,3.14);

    // closing a file 
    if(fclose(file)!=0) {
        fprintf(stderr,"Error closing file:%s\n",strerror(errno));
        return EXIT_FAILURE;
    }

    // opening a file for reading
    file=fopen("example.txt","r");
    if(file==NULL) {
        fprintf(stderr,"Error opening file: %s",strerror(errno));
        return EXIT_FAILURE;
    }

    // reading from a file 
    printf("File contents:\n");
    while(fgets(buffer,sizeof(buffer),file)!=NULL) {
        printf("%s",buffer);
    }

    // check for read errors 
    if(ferror(file)) {
        fprintf(stderr,"Error reading from file: %s\n",strerror(errno));
        fclose(file);
        return EXIT_FAILURE;
    }

    fclose(file);
    return EXIT_SUCCESS;
}

