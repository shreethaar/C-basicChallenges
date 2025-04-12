#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // mtehod 1: using tempfile() which creates a temporary file that is 
    // automatically deleted when closed or when the program ends
    FILE* temp_fp = tmpfile();
    if(temp_fp == NULL) {
        perror("Failed to create temporary file");
        return EXIT_FAILURE;
    }

    fputs("Data in temporary file.\n",temp_fp);
    rewind(temp_fp); // go back to the start

    char buffer[128];
    if(fgets(buffer,sizeof(buffer),temp_fp)!=NULL) {
        printf("Read from tmpfile: %s",buffer);
    }

    // no need to remove the file manually, it's deleted on fclose
    fclose(temp_fp);

    // method 2: using a unique temporary filename (not always available on every platofrom) 
    // Some systems provide mkstemp or tmpnam. For demonstration, we'll show tmpnam usage:
    //
    char temp_name[L_tmpnam];
    if(tmpnam(temp_name)==NULL) {
        perror("Failed to generate temporary filename");
        return EXIT_FAILURE;
    }
    printf("Generated temporary filename: %s\n",temp_name);

    // create and open the file
    FILE* fp = fopen(temp_name,"w+");
    if(fp==NULL) {
        perror("Failed to open temporary file");
        return EXIT_FAILURE;
    }

    fputs("Hello, temporary named file!\n",fp);
    fclose(fp);

    // remove the file after use 
    if(remove(temp_name)!=0) {
        perror("Failed to remove temporary file");
        return EXIT_FAILURE;
    }
    return EXIT_FAILURE;
}

