/*Write a C program that prompts the user to enter a password. Use a do-while loop to keep asking for the password until the correct one is entered.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char passwd[] = "Pa$$w0rd!";
	char input[20];
	int result;

	do { 
		printf("Enter password:\n");
		scanf("%s",&input);
		result=strcmp(passwd,input);
		if(result!=0) {
			printf("Wrong password\n");
		}
	}
	while(result!=0);
	printf("Correct password");
	return 0;

}
