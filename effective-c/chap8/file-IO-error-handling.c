#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void report_error(const char* operation, const char* filename) {
    int error_code = errno;
    fprintf(stderr,"Error during %s on file '%s': %s (errno = %d)\n",operation,filename,strerror(error_code),error_code);
}

FILE* safe_fopen(const char* filename, const char* mode) {
    FILE* fp = fopen(filename,mode);
    if(fp==NULL) {
        report_error("opening", filename);
    }
    return fp;
}

int safe_fclose(FILE* fp, const char* filename) {
    int result=fclose(fp);
    if(result!=0) {
        report_error("closing", const char *filename)


int main(void) {
    const char* filename = "test_file.txt";
    FILE* file;
    char buffer[100];
    size_t bytes_read;

    //safely open a file
    file=safe_fopen(filename,"w");
    if(file==NULL) {
        return EXIT_FAILURE;
    }


    //write to file and check for errors
    if(fputs("This is a test of error handling.\n",file)==EOF) {
        report_error("writing to", filename);
        safe_fclose(file,filename);
        return EXIT_FAILURE;
    }

    //
