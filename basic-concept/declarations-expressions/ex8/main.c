//Write a C program to convert specified days into years, weeks and days. 

#include <stdio.h>

int main() {
	int days,inYears,inWeeks,inDays;
	printf("Number of days:\n");
	scanf("%d",&days);
	inYears=days/365;
	inWeeks=(days%365)/51;
	inDays=((days%365)%51)/7;
	printf("Years: %d\n",inYears);
	printf("Weeks: %d\n",inWeeks);
	printf("Days: %d\n",inDays);
	
	return 0;
}



