#include <stdio.h>

int main() {
    int *ptr = NULL;  // Declare a NULL pointer

    printf("Attempting to dereference NULL...\n");
    *ptr = 42;  // This will cause a segmentation fault

    return 0;
}
