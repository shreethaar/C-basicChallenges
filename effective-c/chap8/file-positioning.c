#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(void) {
    FILE* file;
    long position;
    char buffer[20];

    //create a file with some content
    file=fopen("position_test.txt","w");
    if(file==NULL) {
        fprintf(stderr,"Error opening file: %s\n",strerror(errno));
        return EXIT_FAILURE;
    }

    fputs("ABCDEFGHIJKLMNOPQRTSUWXYZ",file);
    fclose(file);

    // open for reading and writing  
    file=fopen("position_test.txt","r+");
    if(file==NULL) {
        fprintf(stderr,"Error opening file: %s\n",strerror(errno));
        return EXIT_FAILURE;
    }

    // get current position
    position=ftell(file);
    printf("Initial position: %ld\n",position);

    // read 5 characters 
    if(fread(buffer,1,5,file)!=5) {
        fprintf(stderr,"Error reading from file\n");
        fclose(file);
        return EXIT_FAILURE;
    }

    buffer[5]='\0';
    printf("Read: %s\n",buffer);

    // get current position after reading
    position=ftell(file);
    printf("Position after reading 5 bytes: %ld\n",position);

    // move to position 15 from beginning
    if(fseek(file,15,SEEK_SET) != 0) {
        fprintf(stderr,"Error seeking: %s\n", strerror(errno));
        fclose(file);
        return EXIT_FAILURE;
    }

    // read 5 characters at the new position
    if(fread(buffer,1,5,file)!=5) {
        fprintf(stderr,"Error reading from file\n");
        fclose(file);
        return EXIT_FAILURE;
    }
    buffer[5]='\0';
    printf("Read after seeking to position 15: %s\n",buffer);

    // move 3 characters back from current position
    if(fseek(file,-3,SEEK_CUR)!=0) {
        fprintf(stderr,"Error seeking: %s\n",strerror(errno));
        fclose(file);
        return EXIT_FAILURE;
    }
    
    // write at the new position
    if(fputs("123",file)==EOF) {
        fprintf(stderr,"Error writing to file\n");
        fclose(file);
        return EXIT_FAILURE;
    }

    // flush the file
    fflush(file);

    // go to the beginning of the file
    rewind(file);

    // read the entire file to see the changes
    printf("Modified file content: ");
    while(fread(buffer,1,1,file)==1) {
        putchar(buffer[0]);
    }

    printf("\n");
    fclose(file);
    return EXIT_SUCCESS;
}

