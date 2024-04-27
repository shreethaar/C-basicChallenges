/* Write a program in C to calculate the sum of three numbers with input on one line separated by a comma. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if(argc!=2) {
		printf("Usage: %s <number1,number2,number3>\n",argv[0]);
		return 1;
	}

	char *input = argv[1];
	int num1,num2,num3;
	sscanf(input,"%d,%d,%d",&num1,&num2,&num3);

	int sum=num1+num2+num3;
	printf("Sum of %d, %d, and %d is: %d\n",num1,num2,num3,sum);

	return 0;
}
