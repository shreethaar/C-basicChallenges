/* Write a C program that calculates the average of a set of numbers input by the user. The user should be able to input as many numbers as desired, and the program should continue until the user decides to stop.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int input,total=0,average,counter=0;
	printf("Enter as many number to calculate the average, Enter 0 to stop\n");

	do {
		scanf("%d",&input);
		total+=input;
		if(input==0) {
			break;
		}
		else {
			counter++;
		}
		average=total/(counter);
	}
	while(input!=0);
	printf("\nCounter: %d\n",counter);
	printf("Average total number is: %d",average);
	return 0;
}

		

