// Write a C program to accept two integers and check whether they are equal or not. 

#include <stdio.h>

int main() {
	int a,b;
	printf("Enter two integers:\n");
	scanf("%d %d",&a,&b);
	if(a==b) {
		printf("Number 1: %d and Number 2: %d are equal",a,b);
	}
	else {
		printf("Those two numbers are not equal");
	}
	return 0;

}
