/* Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots. */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bhaskaraRoot(float a,float b, float c);

int main() {
	float a,b,c;
	printf("Enter three float number to calculate the roots\n");
	scanf("%f\n%f\n%f",&a,&b,&c);
	bhaskaraRoot(a,b,c);
	return 0;
}

void bhaskaraRoot(float a, float b ,float c) {
	float discriminant=b*b-4*(a*c);
	if(discriminant<0) {
		printf("Roots are imaginary");
	}
	else if(discriminant==0) {
		float root=-b/(2*a);
		printf("Root: %.2f\n",root);
	}
	else {
		float root1=(-b+sqrt(discriminant))/(2*a);
		float root2=(-b-sqrt(discriminant))/(2*a);
		printf("Roots: %.2f and %.2f\n",root1,root2);
	}		
}
