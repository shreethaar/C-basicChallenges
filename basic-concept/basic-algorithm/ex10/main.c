/* Write a C program to check which number is nearest to the value 100 among two given integers. Return 0 if the two numbers are equal. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void verify(int a,int b);

int main() {
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d\n%d",&a,&b);
	verify(a,b);
	return 0;	
}

void verify(int a, int b) {
	int diffA, diffB;
	bool equal=true;
	diffA=100-a;
	diffB=100-b;
	if(a==b) {
		printf("Two numbers are equal\n");
	}
	else {
		if(diffA<diffB) {
			printf("%d is closer to 100\n",a);
		}
		else {
			printf("%d is closer to 100\n",b);
		}
	}
}


