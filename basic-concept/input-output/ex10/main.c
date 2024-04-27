/* Write a C program to find the third angle of a triangle if two angles are given */

#include <stdio.h>
#include <stdlib.h>


int main() {
	double angle1,angle2,angle3;
	printf("Input two angles of triangle separated by comma:\n");
	scanf("%lf,%lf",&angle1,&angle2);

	double sumAngle=angle1+angle2;
	angle3=180-sumAngle;
	printf("Third angle of the triangle: %lf\n",angle3);
	return 0;
}


