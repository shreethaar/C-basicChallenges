#include <stdio.h>

int main(void) {
    printf("Counting from 1 to 5:\n");
    for(int i=1; i<=5;i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Counting down from 10 to 1:\n");
    for(int i=10;i>=1;i--) {
        printf("%d ", i);
    }

    printf("\n");

    printf("Multiple counters:\n");
    for(int i=1, j=10; i<=j; i++, j--) {
        printf("i=%d, j=%d\n",i,j);
    }

    int sum=0;
    int factorial=1;
    for(int i=1;i<=5;i++) {
        sum+=i;
        factorial*=i;
    }

    printf("Sum of numbers 1 to 5: %d\n",sum);
    printf("factorial of 5: %d\n", factorial);

    printf("\nMultiplication Table (1-5):\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%3d ", i * j);  // %3d ensures uniform spacing
        }
        printf("\n");
    }

    int k = 0;
    printf("\nLoop with omitted expressions:\n");
    for (; k < 5; ) {
        printf("%d ", k);
        k++;
    }
    printf("\n");
    
    printf("Infinite for loop with break:\n");
    for (int i = 1; ; i++) {
        if (i > 5) {
            break;  
        }
        printf("%d ", i);
    }
    printf("\n");
    
    
    printf("Even numbers between 1 and 10:\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue;  
        }
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
