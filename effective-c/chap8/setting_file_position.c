#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fp = fopen("position_example.txt","w+");
    if(fp==NULL) {
        perror("Failed to open file");
        return EXIT_FAILURE;
    }

    fputs("0123456789\n",fp);
    fputs("Line 2\n",fp);

    // move file position to the beginning
    fseek(fp,0,SEEK_SET);

    // read first 5 characters
    char buffer[0];
    if(fread(buffer,1,5,fp) < 5) {
        perror("Failed to read 5 characters");
        fclose(fp);
        return EXIT_FAILURE;
    }
    buffer[5]='\0';
    printf("First 5 characters: %s\n",buffer);

    // move file position to the end of the first Line
    fseek(fp,10,SEEK_SET);
    int ch = fgetc(fp);
    printf("Character at position 10: '%c'\n",ch);

    // get current file position
    long pos = ftell(fp);
    if(pos==-1L) {
        perror("Failed to get current file position");
    }
    else {
        printf("Current file position: %ld\n",pos);
    }
    fclose(fp);
    return EXIT_SUCCESS;
}

