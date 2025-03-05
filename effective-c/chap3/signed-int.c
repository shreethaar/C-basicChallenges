#include <stdio.h>
#include <limits.h>

int main() {
    printf("Signed char:   %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Short int:     %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Int:           %d to %d\n", INT_MIN, INT_MAX);
    printf("Long int:      %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Long long int: %lld to %lld\n", LLONG_MIN, LLONG_MAX);

    return 0;
}
