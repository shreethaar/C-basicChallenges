/* Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches */
#include <stdio.h>
#include <stdlib.h>

int main() {
	double height,width,perimeter,area;
	printf("Enter the height of rectangle:");
	scanf("%lf",&height);
	printf("Enter the width of rectangle: ");
	scanf("%lf",&width);
	perimeter=(2*height)+(2*width);
	area=height*width;
	printf("The perimeter of the rectangle: %lf\n",perimeter);
	printf("The area of the rectangle: %lf\n",area);
	return 0;
}

