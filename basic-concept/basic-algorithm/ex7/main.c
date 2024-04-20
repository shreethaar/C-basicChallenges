/* write a c program to check two given integers whether either of them is in the range of 100..200 inclusive
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verify(int a,int b);

int main() {
	int a,b;
	printf("Enter two integers:\n");
	scanf("%d\n%d",&a,&b);
	printf("%b",verify(a,b));
	return 0;
}

bool verify(int a,int b) {
	if((a>=100&&a<=200)||(b>=100&&b<=200)) {
		return true;
	}
	else {
		return false;
	}
}

