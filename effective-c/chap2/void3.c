#include <stdio.h>

int main() {
    int num=42;
    char letter='A';
    void *ptr;
    ptr=&num;
    printf("Integer: %d\n",*(int *)ptr); // cast to int* 
    ptr=&letter;
    printf("Character: %c\n",*(char *)ptr);
    return 0;
}

