/*Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division. */

#include <stdio.h>
#include <string.h>

int main() {
	char rollNo[10],name[20];
	int marksPhy,marksChem,marksComp;
	printf("Input the Roll Number of the student:\n");
	scanf("%s",&rollNo);
	printf("Input the Name of the Student:\n");
	scanf("%s",&name);
	printf("Input the marks of Physics, Chemistry and Computer Application:\n");
	scanf("%d\n%d\n%d\n",&marksPhy,&marksChem,&marksComp);
	int ttl=marksPhy+marksChem+marksComp;
	int percent=ttl/3*100;
	char division[10];
	if(percent>=80) {
		strcpy(division,"First");
	}
	else if(percent>=55 && percent<=79) {
		strcpy(division,"Second");
	}
	else {
		strcpy(division,"Poor");
	}
	printf("Division = %s",division);
	return 0;
}

