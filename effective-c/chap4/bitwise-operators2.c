#include <stdio.h>

int main() {
    int x=5,y=3;
    printf("Bitwise AND: %d\n",x&y);
    printf("Bitwise OR: %d\n",x|y);
    printf("Bitwise XOR: %d\n",x^y);
    printf("Bitwise NOT: %d\n",~x);
    printf("Left Shift: %d\n",x<<1);
    printf("Right Shift: %d\n",x>>1);
    return 0;
}

