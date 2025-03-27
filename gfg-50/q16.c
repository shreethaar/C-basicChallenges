// write a c program to find the maximum and minimum of two numbers without using any loop or condition 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a=55,b=23;
    printf("max=%d\n",((a+b) + abs(a-b))/2);
    printf("min=%d\n",((a+b) - abs(a-b))/2);
    return 0;
}

