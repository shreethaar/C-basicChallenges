// Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate 

#include <stdio.h>

int main() {
	int coordX,coordY;
	printf("Enter a coordinate point (X,Y)\n");
	scanf("%d %d", &coordX,&coordY);
	if(coordX>=0&&coordY>=0) {
		printf("The coordinate point(%d,%d), lies in the First quadrant",coordX,coordY);
		}
	else if(coordX<0&&coordY>=0) {
		printf("The coordinate point(%d,%d), lies in the Second quadrant",coordX,coordY);
	}
	else if (coordX<0&&coordY<0) {
		printf("The coordinate point(%d,%d), lies in the Third quadrant",coordX,coordY);
	}
	else {
		printf("The coordinate point(%d,%d), lies in the Fourth quadrant",coordX,coordY);
	}
	return 0;
}

