#include <stdio.h>

int main() {
    int x = 1, y = 0;

    printf("Logical AND: %d && %d = %d\n", x, y, x && y);
    printf("Logical OR: %d || %d = %d\n", x, y, x || y);
    printf("Logical NOT: !%d = %d\n", x, !x);

    return 0;
}
