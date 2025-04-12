#include <stdio.h>

#define SQUARE(x) ((x) * (x))  // Watch out for double-evaluation!

int main(void) {
    int num = 5;
    printf("Square of %d: %d\n", num, SQUARE(num));
    printf("Square of 2+3: %d\n", SQUARE(2 + 3)); // Expands to ((2 + 3) * (2 + 3))
    return 0;
}
