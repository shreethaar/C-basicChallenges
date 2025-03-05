#include <stdio.h>
#include <stddef.h>

int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of double: %zu bytes\n",sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));

    struct example {
        int a;
        double b;
        char c;
    };
    
    printf("Size of struct example: %zu bytes\n",sizeof(struct example));
    printf("Offset of 'b' in struct: %zu\n", offsetof(struct example,b));
}

