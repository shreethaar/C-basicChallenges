//nested scope and shadowing
//inner scope can access outer scope variable
//but if a variable with the same name exist in an inner scope, it shadows the outer one


#include <stdio.h>

int main() {
    int x=100;
    {
        int x=50; //shadows outer x
        printf("Inner x: %d\n",x); 
    }
    printf("Outer x: %d\n",x);
    return 0;
}

