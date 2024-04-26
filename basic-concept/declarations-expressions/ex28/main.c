/* Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num[6], i=1,total=0,count=0;
	double avg;
	while(i<=5) {
		printf("Enter number %d\n",i);
		scanf("%d",&num[i]);
		i++;
	}
	for(int j=0;j<=4;j++) {
		if(num[i]>=0) {
			count++;
			total+=num[i];
		}
	}
	avg=(double)(total/count);
	printf("The number of positive numbers: %d\n",count);
	printf("The average of all positive values: %lf\n",avg);
	return 0;
}
