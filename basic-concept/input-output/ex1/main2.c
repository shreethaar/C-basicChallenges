/* Write a C program that convert a temperature from Centigrade to Fahrenheit. */

#include <stdio.h>

float temp_f;
float temp_c;
char line_text[50];

int main() {
	printf("Input a temperature (in centigrade):");
	fgets(line_text,sizeof(line_text),stdin);
	sscanf(line_text,"%f",&temp_c);

	temp_f=((9.0/5.0)*temp_c)+32.0;
	printf("%f degrees Fahrenheit.\n",temp_f);

	return 0;
}

