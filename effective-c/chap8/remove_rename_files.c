#include <stdlib.h>
#include <stdio.h>

int main(void) {
    // create a file to demonstrate remove and rename
    FILE* fp = fopen("tempfile.txt", "w");
    if(fp==NULL) {
        perror("Failed to create tempfile.txt");
        return EXIT_FAILURE;
    }

    fputs("This is a temporary file.\n",fp);
    fclose(fp);

    // rename this file
    if(rename("tempfile.txt","renamedfile.txt")!=0) {
        perror("Failed to remove file");
        return EXIT_FAILURE;
    }
    printf("File removed successfully\n");

    return EXIT_SUCCESS;
}
