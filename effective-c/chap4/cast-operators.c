#include <stdio.h>

int main() {
    int x = 5;
    double y = 2.5;

    // Implicit conversion
    double result1 = x + y;
    printf("Implicit cast: %d + %.1f = %.1f\n", x, y, result1);

    // Explicit conversion
    double result2 = (double)x / 2;
    printf("Explicit cast: (double)%d / 2 = %.1f\n", x, result2);

    // Casting between integer types
    char ch = (char)300;
    printf("Casting 300 to char: %d\n", ch);

    return 0;
}
