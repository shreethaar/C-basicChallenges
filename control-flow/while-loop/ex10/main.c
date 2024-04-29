/* Write a C program to find and print the first 10 Fibonacci numbers using a while loop */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n=10,fTerm=0,sTerm=1;
	while(n>0) {
		printf("%d,",fTerm);
		int nxTerm=fTerm+sTerm;
		fTerm=sTerm;
		sTerm=nxTerm;
		n--;
	}
	return 0;
}

