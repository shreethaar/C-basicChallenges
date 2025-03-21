// continue_statement.c
// Demonstrating continue statements in C

#include <stdio.h>

int main(void) {
    // Basic continue in a for loop
    printf("Print only odd numbers from 1 to 10:\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // Skip even numbers
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Continue in a while loop
    printf("Print numbers from 1 to 10, except those divisible by 3:\n");
    int j = 0;
    while (j < 10) {
        j++;
        if (j % 3 == 0) {
            continue;  // Skip numbers divisible by 3
        }
        printf("%d ", j);
    }
    printf("\n\n");
    
    // Continue in a do-while loop
    printf("Print only single-digit numbers from 1 to 20:\n");
    int k = 0;
    do {
        k++;
        if (k >= 10) {
            continue;  // Skip double-digit numbers
        }
        printf("%d ", k);
    } while (k < 20);
    printf("\n\n");
    
    // Continue in nested loops
    printf("Nested loops with continue:\n");
    for (int i = 1; i <= 3; i++) {
        printf("Outer loop %d: ", i);
        for (int j = 1; j <= 5; j++) {
            if (j == 3) {
                continue;  // Skip j=3 in each iteration of the inner loop
            }
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
    
    // Use case: processing data with continue for filtering
    int data[] = {15, 7, 42, -3, 0, 28, -10, 19};
    int size = sizeof(data) / sizeof(data[0]);
    
    printf("Original data: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    printf("Processing only positive numbers: ");
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (data[i] <= 0) {
            continue;  // Skip non-positive numbers
        }
        sum += data[i];
        printf("%d ", data[i]);
    }
    printf("\nSum of positive numbers: %d\n", sum);
    
    return 0;
}
