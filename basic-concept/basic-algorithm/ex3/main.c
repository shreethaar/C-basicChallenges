/* Write a C program that checks two given integers and returns true if at least one of them is 30 or if their sum is 30. In other words, if either of the two integers is 30 or if their sum equals 30, the program will return true. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check(int a,int b);

int main() {
	int a,b;
	printf("Enter two integers:\n");
	scanf("%d\n%d",&a,&b);
	printf("%b",check(a,b));
	return 0;
}

bool check(int a,int b) {
	if(a==30 || b==30) {
		return true;
	}
	if(a+b==30) {
		return true;
	}
	else {
		return false;
	}
}



