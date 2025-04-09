#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char* filename = "nonexistent.txt";
    FILE* fp = fopen(filename,"r");
    if(fp==NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    fclose(fp);
    return EXIT_SUCCESS;

}

