// block scope:
// declared inside a block {}
// not accessible outside that block

#include <stdio.h>

int main() {
    int x=5;
    {
        int y=10;
        printf("Inside block: x=%d, y=%d\n",x,y);
    }
    //printf("%d\n",y);
    return 0;
}

