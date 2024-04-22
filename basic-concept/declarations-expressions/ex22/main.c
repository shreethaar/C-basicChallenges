/* Write a C program that reads 5 numbers and sums all odd values between them. */

#include <stdio.h>
#include <stdlib.h>

int sumOdd(int num[],int size);
int main() {
	int num[5];
	for(int i=0;i<4;i++) {
		printf("Enter number %d:",i);
		scanf("%d",&num[i]);
		if(num[i]%2==0) {
			printf("Number entered is even value\n");
			i--;
		}
	}
	int result=sumOdd(num,4);
	printf("Sum of odd number: %d\n",result);
	return 0;
}

int sumOdd(int num[], int size) {
	int sum=0;
	for (int i=0;i<size;i++) {
		sum+=num[i];
	}
	return sum;
}


