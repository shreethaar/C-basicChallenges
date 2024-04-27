#include <stdio.h>

int main() {
	float rec_width;
	float rec_height;
	float rec_perimeter;

	printf("Input the height of the rectangle:\n");
	scanf("%f",&rec_height);
	printf("Input the width of the rectangle:\n");
	scanf("%f",&rec_width);
	rec_perimeter=2.0*(rec_height+rec_width);
	printf("Perimeter of the rectangle is : %f\n",rec_perimeter);

	return 0;
}

