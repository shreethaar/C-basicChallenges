// Write a C program to compute the sum of the two input values. If the two values are the same, then return triple their sum. 

#include <stdio.h>

int main() {
	int a,b,sum,tripleSum;
	printf("Enter two integers, if both integers are same, the sum will be tripled,\n");
	printf("Fist integer: ");
	scanf("%d",&a);
	printf("Second integer: ");
	scanf("%d",&b);
	
	if(a==b) {
		printf("Sum of integers: %d",(a+b)*3);
	}
	else {
		printf("Sum of integers: %d",(a+b));
	}


	return 0;
}

