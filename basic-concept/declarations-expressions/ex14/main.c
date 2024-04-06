//Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points). 

#include <stdio.h>

int main() {
	float km,liter,consumption;
	printf("Input total distance in km:\n");
	scanf("%f",&km);
	printf("Input total fuel spend in liters:\n");
	scanf("%f",&liter);
	consumption=km/liter;
	printf("Average consumption (km/ltr) %f",consumption);
	return 0;
}

