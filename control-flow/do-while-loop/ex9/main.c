/*Write a C program that calculates and prints the sum of prime numbers up to a specified limit (e.g., 50) using a do-while loop. 
 */

#include <stdio.h>
#include <stdlib.h>


int isPrime(int num) {
	if(num<2) {
		return 0;
	}

	for(int i=2;i*i<=num;i++) {
		if(num%i==0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int limit;
	int num=2;
	int sum=0;

	printf("Input the limit for prime numbers: ");
	scanf("%d",&limit);

	do {
		if(isPrime(num)) {
			sum+=num;
		}
		num++;
	}
	while(num<=limit);

	printf("Sum of prime numbers up to %d: %d\n",limit,sum);
	return 0;
}

