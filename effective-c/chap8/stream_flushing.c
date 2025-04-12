#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // demonstrate flushing stdout
    
    printf("This will be displayed immediately");
    // without a newline, some environments may buffer the output
    // use fflush(stdout) to force the buffer to be written
    fflush(stdout);

    // wait for user to press enter (just to show the flush effect);
    getchar();

    // demonstrate flushing a file stream 
    FILE* fp = fopen("flush_example.txt","w");
    if(fp==NULL) {
        perror("Failed to open file");
        return EXIT_FAILURE;
    }

    fprintf(fp,"This text is in the file buffer.\n");
    fflush(fp);

    // The file content is guaranteed to be written at this point
    // (rather than waiting until fclose) 
    fclose(fp);

    return EXIT_SUCCESS;
}


