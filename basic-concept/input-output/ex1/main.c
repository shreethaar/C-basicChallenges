/* Write a program that converts Centigrade to Fahrenheit. */

#include <stdio.h>
#include <stdlib.h>

float convertFahrenheit(float temp);

int main() {
	float temp;
	printf("Enter a temperature (in Centrigrade):\n");
	scanf("%f",temp);
	printf("Temperature in Fahrenheit: %.3f\n",convertFahrenheit(temp));
	return 0;
}

float convertFahrenheit(float temp) {
	float convertTemp;
	convertTemp=((9/5)*(temp))+32;
	return convertTemp;
}


