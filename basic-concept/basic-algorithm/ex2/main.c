/*Write a C program that will take a number as input and find the absolute difference between the input number and 51. If the input number is greater than 51, it will return triple the absolute difference*/

#include <stdio.h>

int comparison(int x);

int main() {
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	int output = comparison(n);	
	printf("%d",output);
	return 0;

}

int comparison(int x) {
	if(x>51) {
		return ((x-51)*3);
	}
	else {
		return (51-x);
	}
}
