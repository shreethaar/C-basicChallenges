#include <stdio.h>

int num1,num2,num3;
int sum;
char line_text[50];

int main() {
	printf("Input three numbers separated by comma: \n");
	fgets(line_text,sizeof(line_text),stdin);
	sscanf(line_text,"%d, %d, %d",&num1,&num2,&num3);
	sum=num1+num2+num3;
	printf("The sum of three numbers: %d\n",sum);
	return 0;
}

