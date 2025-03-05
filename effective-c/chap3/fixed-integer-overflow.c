#include <stdio.h>
#include <limits.h>

#define AbsM(i, flag) ((i) >= 0 ? (i) : ((i) == (flag) ? (flag) : -(i))) // Fixed macro

int main() {
    signed int si = INT_MIN; // Most negative value

    signed int abs_si = AbsM(si, INT_MIN); // Check before negating
    if (abs_si == INT_MIN) {
        printf("Overflow detected! Cannot compute absolute value.\n");
    } else {
        printf("Absolute value: %d\n", abs_si);
    }

    return 0;
}
