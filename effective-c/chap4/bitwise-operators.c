#include <stdio.h>


int main() {
    unsigned int a=5,b=3;

    printf("Bitwise AND: %u = %u\n",a,b,a&b);
    printf("Bitwise OR: %u | %u = %u\n", a, b, a | b);
    printf("Bitwise XOR: %u ^ %u = %u\n", a, b, a ^ b);
    printf("Bitwise NOT: ~%u = %u\n", a, ~a);
    printf("Left shift: %u << 1 = %u\n", a, a << 1);
    printf("Right shift: %u >> 1 = %u\n", a, a >> 1);
    return 0;
}
