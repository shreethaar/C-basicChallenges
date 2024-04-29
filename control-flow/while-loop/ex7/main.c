/* Write a C program that prompts the user to input a username. Use a while loop to keep asking for a username until a valid one is entered (e.g., at least 8 characters long). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool passwdMatch(char *passwd, char *inputPasswd);
int main() {
	char passwd[12]="password123";
	char inputPasswd[12];

	printf("Enter correct password:\n");
	fgets(inputPasswd,sizeof(inputPasswd),stdin);
	inputPasswd[strcspn(inputPasswd,"\n")]='\0';
	passwdMatch(inputPasswd,passwd);
	while(!passwdMatch(passwd,inputPasswd)) {
		printf("Incorrect Password!\nEnter correct password:\n");
		fgets(inputPasswd,sizeof(inputPasswd),stdin);
		inputPasswd[strcspn(inputPasswd,"\n")]='\0';
	}
	printf("Password entered is correct");
	

	return 0;
}

bool passwdMatch(char *passwd, char *inputPasswd) {
	if(strncmp(inputPasswd,passwd,11)==0) {
		return true;
	}

	else {
		return false;
	}
}


