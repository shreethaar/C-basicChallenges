// Write a C program that takes an integer input from the user (between 1 and 100) and determines if it's a "special number". A special number is defined as a number that is either a perfect square or divisible by 3. Use loops and conditionals to validate the input and print an appropriate message

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number between 1 and 100: ");
    scanf("%d",&num);

    while (num<1 || num>100) {
        printf("Invalid input. Enter a number between 1 and 100:");
        scanf("%d",&num);
    
    }

    int isSquare=0;
    for(int i=1;i<=10;i++) {
        if(i*i==num) {
            isSquare=1;
            break;
        }
    }

    if (isSquare || num%3==0) {
        printf("%d is a special number.\n",num);
    }
    else {
        printf("%d is not a special number.\n",num);
    }

    return 0;
}
