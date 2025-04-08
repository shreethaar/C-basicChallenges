#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 4096

int copy_file(const char* source_path, const char* dest_path) {
    FILE* source = NULL;
    FILE* dest = NULL;
    char buffer[BUFFER_SIZE];
    size_t bytes_read,bytes_written;
    int success = 0;

    // open source file for reading 
    source = fopen(source_path,"rb");
    if(source==NULL) {
        fprintf(stderr,"Error opening  source file '%s' : %s\n",source_path,strerror(errno));
        return -1;
    }

    // open destination file for writing 
    dest = fopen(dest_path,"wb");
    if(dest==NULL) {
        fprintf(stderr,"Error opening destination file '%s': %s\n",dest_path,strerror(errno));
        fclose(source);
        return -1;
    }

    // copy data in chunks
    while((bytes_read=fread(buffer,1,BUFFER_SIZE,source)) > 0) {
        bytes_written = fwrite(buffer,1,bytes_read,dest);
        if(bytes_written != bytes_read) {
            fprintf(stderr,"Error writing to destination file: %s\n",strerror(errno));
            success=-1;
            break;
        }
    }


    // check for read Error
    if(ferror(source)) {
        fprintf(stderr,"Error reading from source file: %s\n",strerror(errno));
        success=-1;
    }

    // clean up 
    if(fclose(source)!=0) {
        fprintf(stderr,"Error reading from source file: %s\n",strerror(errno));
        success=-1;
    }

    if (fclose(dest) != 0) {
        fprintf(stderr, "Error closing destination file: %s\n", strerror(errno));
        success = -1;
    }
    
    return success;
}


int main(int argc, char* argv[]) {
    if(argc!=3) {
        fprintf(stderr, "Usage: %s <source_file> <destination_file>\n",argv[0]);
        return EXIT_FAILURE;

    }

    printf("Copying '%s' to '%s' ...\n",argv[1],argv[2]);
    if(copy_file(argv[1],argv[2]) == 0) {
        printf("File copied successfully\n");
        return EXIT_SUCCESS;
    }

    else {
        fprintf(stderr,"File copy failed\n");
        return EXIT_FAILURE;
    }
}

