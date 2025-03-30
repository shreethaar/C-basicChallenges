// pointers as function arguments - call by reference

#include <stdio.h>

void increment(int* a) {
    *a=*a+1; // call by reference
    //printf("Address of variable in increment = %d\n",&a);
    printf("a=%d\n",*a);
    //return a;
}


int main() {
    int a;
    a=10;
    int *ptr=&a;
    increment(ptr);
    //printf("Address of variable a in main = %d\n",&a);
    printf("a=%d",a);
}

