/* Write a C program that prints all even numbers between 1 and 50 (inclusive). */

#include <stdio.h>
#include <stdlib.h>

int main() {
	for(int i=1;i<=50;i++) {
		if(i%2==0) {
			printf("%d\n",i);
		}
	}
	return 0;
}

