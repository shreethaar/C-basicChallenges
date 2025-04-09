#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fp = fopen("chars_lines.txt","w");
    if(fp==NULL) {
        perror("Failed to open file for writing");
        return EXIT_FAILURE;
    }

    // writing individual characters
    fputc("H", fp);
    fputc("i", fp);
    fputc('\n',fp);

    // writing a string (line) 
    fputs("This is a line written by fputs.\n",fp);

    // now read them back using fgetc and fgets
    fp=fopen("chars_lines.txt","r");
    if(fp==NULL) {
        perror("Failed to open file for reading");
        return EXIT_FAILURE;
    }

    // reading individual characters until EOF
    int ch;
    printf("Reading characters using fgetc:\n");
    while((ch=fgetc(fp))!=EOF) {
        putchar(ch); // print to stdout
    }
    rewind(fp); // reset file pointer to start 

    printf("\nReading lines using fgets:\n");
    char buffer[128];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    return EXIT_SUCCESS;
}

