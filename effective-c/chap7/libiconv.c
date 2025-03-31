#include <stdio.h>
#include <stdlib.h>
#include <iconv.h>
#include <string.h>

#define BUFFER_SIZE 1024

int convert_encoding(const char* from_charset, const char* to_charset, char* input, size_t in_size, char* output, size_t out_size) {
    iconv_t cd=iconv_open(to_charset, from_charset);
    if(cd == (iconv_t)-1) {
        perror("iconv_open failed");
        return -1;
    }

    char* in_buf = input;
    char* out_buf = output;
    size_t in_bytes_left = in_size;
    size_t out_bytes_left = out_size;

    if(iconv(cd,&in_buf,&in_bytes_left,&out_buf,&out_bytes_left)==(size_t)-1) {
        perror("iconv failed");
        iconv_close(cd);
        return -1;
    }

    *out_buf='\0';
    iconv_close(cd);
    return 0;
}



int main() {
    char input[]="Hello,world!"; // UTF-8 encoded text
    char output[BUFFER_SIZE];

    if(convert_encoding("UTF-8","ISO-8859-1",input,strlen(input),output,BUFFER_SIZE)==0) {
        printf("Converted text: %s\n",output);
    }
    else {
        fprintf(stderr,"Conversion failed\n");
    }
    return 0;
}

