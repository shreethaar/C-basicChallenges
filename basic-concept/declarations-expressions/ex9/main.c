//Write a C program that accepts two integers from the user and calculates the sum of the two integers

#include <stdio.h>

int main() {
	int a,b;
	printf("Input the first integer:\n");
	scanf("%d",&a);
	printf("Input the second integer:\n");
	scanf("%d",&b);
	int sum=a+b;
	printf("Sum of the above two integer: %d",sum);
	return 0;
}

