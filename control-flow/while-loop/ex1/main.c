/*Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num=0;

	while(num!=10) {
		printf("%d\n",num);
		num++;
	}
	while(num!=-1) {
		printf("%d\n",num);
		num--;
	}
	return 0;
}


