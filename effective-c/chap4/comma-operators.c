#include <stdio.h>

int main() {
    int a,b;
    a=(b=3,b+2);
    printf("a: %d, b: %d\n",a,b);
    return 0;
}

