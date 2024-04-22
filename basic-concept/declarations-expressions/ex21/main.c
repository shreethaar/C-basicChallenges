/*  Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative and greater than 80.*/

#include <stdio.h>
#include <stdlib.h>

void rangeChecks(int num);

int main() {
	int num;
	printf("Enter an integer:\n");
	scanf("%d",&num);
	rangeChecks(num);
	return 0;
}

void rangeChecks(int num) {
	if(num<=0||num>=80) {
		printf("Out of range");
	}
	else {
		if(num>=1&&num<=10) {
			printf("Range [1,10]");
		}
		else if(num>=11&&num<=20) {
			printf("Range [11,20]");
		}
		else if(num>=21&&num<=30) {
			printf("Range [21,30]");
		}
		else if(num>=31&&num<=40) {
			printf("Range [31,40]");
		}
		else if(num>=41&&num<=50) {
			printf("Range [41,50]");
		}
		else if(num>=51&&num<=60) {
			printf("Range [41,60]");	
		}
		else if(num>=61&&num<=70) {
			printf("Range [61,70]");
		}
		else {
			printf("Range [71,79]");	
		}
	}
}
