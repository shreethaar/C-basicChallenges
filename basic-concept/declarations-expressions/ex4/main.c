//Write a C program to print the following characters in reverse. 
#include <stdio.h>

int main() {
char charc[4]="XML";
	for(int i=0;i<sizeof(charc)-1;i++){
		charc[i]=sizeof(charc)-1;
	}
	for(int i=0;i<sizeof(charc);i++){
		printf("%c",charc[i]);
	}
	printf("\n");
	return 0;
}


