/* Write a C program that checks if a positive integer is divisible by either 3 or 7, or both. If the integer is a multiple of 3, then the program will return true. Similarly, if the integer is a multiple of 7, then also the program will return true. If the integer is not a multiple of 3 or 7, then the program will return false. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verify(int a);

int main() {
	int a;
	printf("Enter an integer:\n");
	scanf("%d",&a);
	printf("%b",verify(a));
	return 0;
}

bool verify(int a) {
	if(a%3==0 || a%7==0) {
		return true;
	}
	else {
		return false;
	}
}

