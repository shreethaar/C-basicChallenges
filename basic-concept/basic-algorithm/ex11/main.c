/* Write a C program that checks if two given integers are in the range of 40 to 50 inclusive, or if they are both in the range of 50 to 60 inclusive. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verify(int a, int b);

int main() {
	int num1,num2;
	printf("Enter two integers:\n");
	scanf("%d\n%d",&num1,&num2);
	printf("%b",verify(num1,num2));
	return 0;
}

bool verify(int a, int b) {
	return(a>=40 && a<=50 && b>=40 && b<=50) || (a>=50 && a<=60 && b>=50 && b<=50);
}

