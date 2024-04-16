/* Write a C program that prompts the user to enter a positive integer and then calculates and prints the sum of the squares of each digit in that number using a do-while loop
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int input, sumSquareDigits=0,digits;
	printf("Enter a positive integer:\n");
	scanf("%d",&input);

	do { 
		do {
			digits=input%10;
			sumSquareDigits+=digits*digits;
			input/=10;
		}
		while(input!=0);
		printf("Sum of square digits %d : %d\n",input,sumSquareDigits);
	}

	while(input>0);
	return 0;
}


