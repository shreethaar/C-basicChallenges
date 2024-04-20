/* Write a C program that checks two given temperatures and returns true if one temperature is less than 0 and the other is greater than 100, otherwise it returns false.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verify(double temp1, double temp2);

int main() {
	double temp1,temp2;
	printf("Enter two temperature readings in Celsius (decimal value):\n");
	scanf("%lf\n%lf",&temp1,&temp2);
	printf("%b",verify(temp1,temp2));

	return 0;
}

bool verify(double temp1, double temp2) {
	if((temp1<0&&temp2>100)||(temp1>100&&temp2<0)) {
		return true;
	}
	else {
		return false;
	}
}

