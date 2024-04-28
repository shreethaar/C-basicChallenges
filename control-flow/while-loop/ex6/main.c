/* Write a C program that prompts the user to enter a positive integer. It then calculates and prints the factorial of that number using a while loop. */

#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
int main() {
	int num,fact;
	printf("Enter a positive integer:\n");
	scanf("%d",&num);

	while(num<=0) {
		printf("Enter positive integer only\n");
		scanf("%d",&num);
	}
	fact=factorial(num);
	printf("Factorial of %d is %d\n",num,fact);

	return 0;
}

int factorial(int n) {
	if(n==1||n==0) {
		return 1;
	}
	else {
		return n*factorial(n-1);
	}
}

