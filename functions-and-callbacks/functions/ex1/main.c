/* 
 * write a program in c to show simple structure of a function
 * expected output:
 * The total is: 11
 */

#include <stdio.h>

int sum(int a, int b) {
	int s = a+b;
	return s;
}


int main() {
	int total;
	printf("\n\nFunction: a simple structure of function:\n");
	printf("-----------------------------------------------\n");
	total=sum(5,6);
	printf("The total is :%d\n",total);
	return 0;
}



