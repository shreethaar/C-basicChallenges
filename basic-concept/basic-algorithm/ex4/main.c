/* Write a C program to check a given integer and return true if it is within 10 of 100 or 200.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool verify(int a);

int main() {
	int a;
	printf("Enter an integer:\n");
	scanf("%d",&a);
	printf("%b",verify(a));
	return 0;
}

bool verify(int a) {
	if(abs(a - 100) <= 10 || abs(a - 200) <= 10) {
		return true;
	}
	else {
		return false;
	}
}


