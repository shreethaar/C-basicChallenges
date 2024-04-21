/*Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values". 
 */


#include <stdio.h>
#include <stdlib.h>

void verify(int p,int q, int r, int s);

int main() {
	int p,q,r,s;
	printf("Enter four integers (p,q,r,s): ");
	scanf("%d\n%d\n%d\n%d",&p,&q,&r,&s);
	verify(p,q,r,s);
	return 0;
}

void verify(int p, int q, int r, int s) {
	if(p%2==0 && q>r && s>p && (r+s) > (p+q)) {
		printf("Correct values\n");
	}
	else {
		printf("Wrong values\n");
	}
}

