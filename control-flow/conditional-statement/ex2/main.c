//Write a C program to check whether a given number is even or odd. 

#include <stdio.h>

int main() {
	int a;
	printf("Enter an integer:\n");
	scanf("%d",&a);
	if(a%2==0) {
		printf("%d is an even integer",a);
	}
	else {
		printf("%d is an odd integer",a);
	}
	return 0;
}

