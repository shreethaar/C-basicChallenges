// write a c program to calculate compound interest

#include <stdio.h>
#include <math.h>

int main() {
    double principal=2300;
    double rate=7;
    double time=4;
    double amount=principal*((pow((1+rate/100),time)));
    double CI=amount-principal;

    printf("compound interest is: %lf",CI);
    return 0;
}
