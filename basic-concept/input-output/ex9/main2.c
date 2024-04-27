#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if(argc!=2) {
		printf("Usage: %s <number1,number2>\n",argv[0]);
		return 1;
	}

	char *input = argv[1];
	int num1,num2;
	sscanf(input,"%d,%d",&num1,&num2);

	int sum=num1+num2;
	int diff=num1-num2;
	int mult=num1*num2;
	float div=(float)num1/num2;
	int mod=num1%num2;

	printf("The sum of the given numbers: %d\n",sum);
	printf("The difference of the given numbers: %d\n",diff);
	printf("The multiplication of the given numbers: %d\n",mult);
	printf("The quotient of the given numbers: %f\n",div);
	printf("The MODULUS = %d\n",mod);

	return 0;
}

