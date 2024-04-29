/* Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int limit;
	int num=2;
	int sum=0;
	
	printf("Enter a number as a limit to prints the sum of cubes of even numbers:\n");
	scanf("%d",&limit);

	while(num<=limit) {
		int cube=num*num*num;
		sum+=cube;
		num+=2;
	}

	printf("Sum of cubes of even numbers up to %d: %d\n",limit,sum);
	return 0;
}

