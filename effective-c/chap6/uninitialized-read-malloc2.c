#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char* str=(char*)malloc(16);
    if(str) {
        strncpy(str,"123456789abcdef",15);
        str[15]='\0';
        printf("str=%s.\n",str);
        free(str);
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

/* 
 * It allocates 16 bytes of memory by calling malloc
 * Uses strncpy to copy 15 bytes of string into allocated memory
 * Added null terminator 
 */
