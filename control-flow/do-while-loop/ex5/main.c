/*Write a C program that generates a random number between 1 and 100 and asks the user to guess it. Use a do-while loop to give the user multiple chances until they guess the correct number. 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandom() {
	srand(time(NULL));
	return rand()%100+1;
}


int main() {
	int input,guess=0;
	int randomNum=getRandom();
	do {
		printf("Enter a number from 1 to 100:\n");
		scanf("%d",&input);
		if(input==randomNum) {
			printf("Correct guess");
			break;
		}
		else {
			printf("Wrong guess\n");
		}
		guess++;
	}
	while(guess<10);
	if(guess==10) {
		printf("Max attempts: 10");
	}
	return 0;

}


