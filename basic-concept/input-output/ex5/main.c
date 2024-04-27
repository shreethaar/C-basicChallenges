/* Write a C program that takes hours and minutes as input, and calculates the total number of minutes. */

#include <stdio.h>

int tot_mins;
int hrs;
int mins;
const int MINaHOUR = 60;
char line_text[50];

int main() {
	printf("Input minutes:\n");
	fgets(line_text,sizeof(line_text),stdin);
	sscanf(line_text,"%d",&tot_mins);

	hrs=(tot_mins/MINaHOUR);
	mins=(tot_mins%MINaHOUR);

	printf("%d Hours, %d Minutes.\n",hrs,mins);

	return 0;
}

