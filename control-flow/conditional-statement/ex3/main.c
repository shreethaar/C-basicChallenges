//Write a C program to check whether a given number is positive or negative. 

#include <stdio.h>

int main() {
	int a;
	printf("Input an integer:\n");
	scanf("%d",&a);
	if(a>=0) {
		printf("%d is a positive integer\n",a);
	}
	else {
		printf("%d is a negative integer\n",a);
	}
	return 0;
}

