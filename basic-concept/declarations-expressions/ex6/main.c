//Write a C program to compute the perimeter and area of a circle with a given radius.

#include <stdio.h>

#define PI 3.14
int main() {
	double radius;
	printf("Enter the radius of circle:");
	scanf("%lf",&radius);
	double perimeter=2*PI*radius;
	double area=PI*(radius*radius);
	printf("Perimeter of the circle: %.3lf\nArea of the circle: %.3lf\n",perimeter,area);
	return 0;
}


