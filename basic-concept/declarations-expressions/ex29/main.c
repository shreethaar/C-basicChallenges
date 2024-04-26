/* Write a C program that read 5 numbers and sum of all odd values between them. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num[5],sumOdd=0;
	for(int i=0;i<=5;i++) {
		printf("Enter number %d\n",(i+1));
		scanf("%d\n",&num[i]);
	}
	return 0;
}

