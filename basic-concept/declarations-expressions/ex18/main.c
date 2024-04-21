#include <stdio.h>

int main() {
	int ndays,y,m,d;
	printf("Input no. of days:\n");
	scanf("%d",&ndays);
	y=(int)ndays/365;
	ndays=ndays-(365*y);
	m=(int)ndays/30;
	d=(int)ndays-(m*30);
	printf("%d year(s)\n%d months(s)\n%d days(s)",y,m,d);
	return 0;
}
