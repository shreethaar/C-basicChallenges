/*Write a C program that converts kilometers per hour to miles per hour. */

#include <stdio.h>

float kph;
float mph;
char input[20];

int main() {
	printf("Input kilometer per hour:\n");
	fgets(input,sizeof(input),stdin);
	sscanf(input,"%f",&kph);

	mph=kph*0.62137;
	printf("%f Miles per hour",mph);

	return 0;
}


