#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fp = fopen("close_example.txt","w");
    if(fp==NULL) {
        perror("Failed to open file");
        return EXIT_FAILURE;
    }

    fprintf(fp,"Some text.\n");
    if(fclose(fp)==EOF) {
        perror("Failed to close file");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

