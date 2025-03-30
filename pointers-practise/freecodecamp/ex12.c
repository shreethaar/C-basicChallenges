// character arrays and pointers

#include <stdio.h>

void print(char* C) {
    int i=0;
    while(C[i]!='\0') {      // while(*(C+i)!='\0') works well
        printf("%c",C[i]);
        i++;
    }
    printf("\n");
}


int main() {
    //char *C = "Hello"; //string gets stored as compile time constatn (.text)
    char C[20] = "Hello";
    printf(C);
}

