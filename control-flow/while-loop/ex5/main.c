/* Write a C program that generates a random number between 1 and 20 and asks the user to guess it. Use a while loop to give the user multiple chances until they guess the correct number. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int guess,chance=0,input;

	srand(time(NULL));
	guess=rand()%20+1;

	while(chance!=10 || input==guess) {
		printf("Enter your number to guess [1-20]:\n");
		scanf("%d",&input);
		if(input==guess) {
			printf("Correct guess!\n");
			break;
		}
		else {
			chance++;
		}
	}
}

