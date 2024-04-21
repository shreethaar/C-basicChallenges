/* Write a C program that checks if three given integers are in the range of 20 to 50 (inclusive) and returns true if at least one of them is within the range. If none of the integers are within the range, the program returns false. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verify(int a,int b, int c);

int main() {
	int a,b,c;
	printf("Enter three integers:\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	printf("%b",verify(a,b,c));
	return 0;
}

bool verify(int a, int b, int c) {
	if((a>=20 && a<=50)||(b>=20 && b<=50)||(c>=20 && c<=50)) {
		return true;
	}
	else {
		return false;
	}
}

