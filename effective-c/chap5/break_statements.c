// break_statement.c
// Demonstrating break statements in C

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // Break in a for loop
    printf("Using break in a for loop:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
        if (i == 5) {
            printf("\nReached 5, breaking out of the loop\n\n");
            break;  // Exit loop when i reaches 5
        }
    }
    
    // Break in a while loop
    printf("Using break in a while loop:\n");
    int j = 1;
    while (true) {  // Infinite loop
        printf("%d ", j);
        if (j * j > 25) {
            printf("\nSquare exceeds 25, breaking out of the loop\n\n");
            break;  // Exit loop when j^2 exceeds 25
        }
        j++;
    }
    
    // Break in a do-while loop
    printf("Using break in a do-while loop:\n");
    int sum = 0;
    int k = 1;
    do {
        sum += k;
        printf("Added %d, sum is now %d\n", k, sum);
        k++;
        if (sum >= 10) {
            printf("Sum reached %d, breaking out of the loop\n\n", sum);
            break;  // Exit loop when sum reaches or exceeds 10
        }
    } while (true);
    
    // Break in nested loops
    printf("Using break in nested loops:\n");
    for (int i = 1; i <= 3; i++) {
        printf("Outer loop iteration %d: ", i);
        for (int j = 1; j <= 5; j++) {
            printf("%d ", j);
            if (j == 3 && i == 2) {
                printf("\nBreaking inner loop at i=2, j=3\n");
                break;  // Exit only the inner loop
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // Using break in a switch statement
    printf("Using break in a switch statement:\n");
    for (int val = 1; val <= 3; val++) {
        printf("Case for value %d: ", val);
        switch (val) {
            case 1:
                printf("One");
                break;  // Without this, execution would fall through to case 2
            case 2:
                printf("Two");
                break;  // Without this, execution would fall through to case 3
            case 3:
                printf("Three");
                break;
            default:
                printf("Unknown");
        }
        printf("\n");
    }
    printf("\n");
    
    // Search in an array using break
    int numbers[] = {7, 15, 3, 21, 9, 11, 42, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int searchValue = 21;
    int position = -1;
    
    printf("Searching for %d in array: ", searchValue);
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
        if (numbers[i] == searchValue) {
            position = i;
            break;  // Exit loop once value is found
        }
    }
    
    if (position != -1) {
        printf("\nFound %d at position %d\n", searchValue, position);
    } else {
        printf("\nValue %d not found in the array\n", searchValue);
    }
    
    return 0;
}
