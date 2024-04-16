/*Write a C program that calculates the product of numbers from 1 to 5 using a while loop.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num=1,product=1;

	while(num<=5) {
		product *= num;
		num++;
	}
	printf("Product of numbers: %d",product);
	return 0;
}

