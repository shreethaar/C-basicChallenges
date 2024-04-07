// Write a C program to accept the height of a person in centimeters and categorize the person according to their height. 

#include <stdio.h>

int main() {
	int height;
	printf("Enter your height in cm\n");
	scanf("%d",&height);
	if(height<=135) {
		printf("The person is dwarf.");
	}
	else if(height>=136 && height<=160) {
		printf("The person is below average height.");
	}
	else if(height>=161 && height<=175) {
		printf("The person is average height.");
	}
	else if(height>=176 && height<=190) {
		printf("The person is above average height.");
	}
	else {
		printf("The person is very tall.");
	}
	return 0;
}
