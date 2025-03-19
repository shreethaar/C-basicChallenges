#include <stdio.h>

int main() {
    printf("Alignment of int: %lu\n",_Alignof(int));
    printf("Alignment of double: %lu\n", _Alignof(int));
    return 0;
}

