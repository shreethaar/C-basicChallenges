//Write a C program that accepts three integers and finds the maximum of three. 

#include <stdio.h>

int main() {
	int a,b,c,max;
	printf("Input the first integer:\n");
	scanf("%d",&a);
	printf("Input the second integer:\n");
	scanf("%d",&b);
	printf("Input the third integer:\n");
	scanf("%d",&c);
	if(a>b&&a>c) {
	       	max=a;
	}
	else if(b>a&&b>c) {
		max=b;
	}
	else {
		max=c;
	}
	printf("Maximum of three integers: %d",max);
	return 0;
}
