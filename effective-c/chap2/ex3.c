#include <stdio.h>

int add(int x, int y);
int (*ptrAdd)(int,int)=&add;

int main() {
    int x=2,y=5;
    printf("Result: %d\n",ptrAdd(x,y));
    return 0;
}

int add(int x, int y) {
    return x+y;
}





