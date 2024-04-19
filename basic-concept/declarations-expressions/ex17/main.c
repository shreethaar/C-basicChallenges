/*Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.*/

#include <stdio.h>

int main() {
	int sec,hrConvert,minConvert,secConvert;
	printf("Enter seconds to convert HR:MIN:SEC\n");
	scanf("%d",&sec);
	if(sec>60) {
		hrConvert=sec/3600;
		minConvert=(sec-(3600*hrConvert))/60;
		secConvert=(sec-(3600*hrConvert)-(minConvert*60));
		printf("Seconds: %d -> H:M:S - %d:%d:%d\n",sec,hrConvert,minConvert,secConvert);
	}
	return 0;
}


