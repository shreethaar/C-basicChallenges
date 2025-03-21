#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int count=1;
    do {
        printf("Count: %d\n",count);
        count++;
    } while(count<=5);

    int num=10;
    do {
        printf("This will execute once even though the condition is false\n");
    } while(num<5);

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Option One\n");
        printf("2. Option Two\n");
        printf("3. Option Three\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("You selected option one\n");
                break;
            case 2:
                printf("You selected option two\n");
                break;
            case 3:
                printf("You selected option three\n");
                break;
            case 4:
                printf("Exciting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice!=4);

    srand(time(NULL));
    int secret=rand()%10+1;
    int guess;
    printf("\nI'm thinking of a number between 1 and 10.\n");
    do {
        printf("Enter your guess: ");
        scanf("%d",&guess);
        if(guess<secret) {
            printf("Too low!\n");
        }
        else if(guess>secret) {
            printf("Too high!\n");
        }
    } while(guess!=secret);
    printf("Congratulations! You guessed the number.\n");
    return 0;
}
