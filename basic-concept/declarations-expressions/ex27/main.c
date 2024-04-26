/* Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num[6],i=1,countPos=0,countNeg=0;
	while(i<=5) {
		printf("Enter number %d\n",i);
		scanf("%d",&num[i]);
		i++;
	}
	for(int j=0;j<=4;j++) {
		if(num[j]>=0) {
			countPos++;
		}
		else {
			countNeg++;
		}
	}
	printf("Total positive numbers: %d\n",countPos);
	printf("Total negative numbers: %d\n",countNeg);
	return 0;
}

