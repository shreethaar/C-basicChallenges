// write a c program to check if two number are equal without using the bitwise operator

#include <stdio.h>

int main() {
    int x=1;
    int y=2;
    if(!(x^y)) {
        printf("%d is equal to %d ",x,y);
    }
    else {
        printf("%d is not equal to %d ",x,y);
    }
    return 0;
}
