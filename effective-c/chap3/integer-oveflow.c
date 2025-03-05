#include <stdio.h>
#include <limits.h>

#define Abs(i) ((i) < 0 ? -(i):(i)) //vulnerable macro

int main() {
    signed int si=INT_MIN;  // most negative value
    signed int abs_si=Abs(si); //overflow occurs here 
    printf("Absolute value: %d\n",abs_si); //undefined behaviour
    return 0;
}

