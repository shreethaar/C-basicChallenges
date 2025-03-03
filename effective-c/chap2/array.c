#include <stdio.h>

int main() {
    int ia[11];
    float *afp[17];
    
    char str[11];
    for (unsigned int i=0;i<10;++i) {
        str[i]='0'+i;
    }
    str[10]='\0';
}

// Notes:
// str is automatically converted to a pointer to the first member of the array (an object of type char)
// i has an unsigned interger type
