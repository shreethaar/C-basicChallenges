/*  Write a C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops. 
 */

#include <stdio.h>

int main() {
	int num=1, sumEven=0, sumOdd=0;
	printf("Calculating all sum of even and odd numbers from 1 to 50...\n");

	do {
		if(num%2==0) {
			sumEven+=num;
		}
		if(num%2!=0) {
			sumOdd+=num;
		}
		num++;
	}
	while(num!=51);
	printf("Total sum of even numbers from 1 to 50: %d\n", sumEven);
	printf("Total sum of odd numbers from 1 t0 50: %d\n", sumOdd);
	return 0;
}


