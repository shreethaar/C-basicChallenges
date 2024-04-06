//Write a C program that accepts two integers from the user and calculates the product of the two integers.

#include <stdio.h>

int main() {
	int a,b;
	printf("Input the first integer:\n");
	scanf("%d",&a);
	printf("Input the second integer:\n");
	scanf("%d",&b);
	int product=a*b;
	printf("Product of the above two integers = %d",product);
	return 0;
}

