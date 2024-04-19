//Write a C program to calculate the distance between two points. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int x1,y1,x2,y2;
	printf("Enter first coordinate (X1,Y1):\n");
	scanf("%d\n%d",&x1,&y1);
	printf("Enter second coordinate (X2,Y2):\n");
	scanf("%d\n%d",&x2,&y2);
	double diffX = (double)(x2-x1);
	double diffY = (double)(y2-y1);
	double pow2X = pow(diffX,2);
	double pow2Y = pow(diffY,2);
	double dist = sqrt((pow2X+pow2Y));
	printf("The distance between (%d,%d) and (%d,%d) is %.3f",x1,x2,y1,y2,dist);

	return 0;
}

