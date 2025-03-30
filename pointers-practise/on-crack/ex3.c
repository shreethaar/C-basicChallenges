// review fundamentals of pointers

#include <stdio.h>

int main() {
    int x=10;
    int *p = &x;    // p holds the address of x
    printf("%d",*p);// prints 10 (deferencing p) 
    return 0;
}

