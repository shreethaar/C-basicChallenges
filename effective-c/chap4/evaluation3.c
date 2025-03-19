#include <stdio.h>


int f(int x) {
    return x*2;
}


int main() {
    int val=f(2)+f(3);
    printf("Value=%d\n",val);
    return 0;
}

