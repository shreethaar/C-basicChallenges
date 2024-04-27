/* Write a program in C that reads a forename, surname and year of birth and displays the names and the year one after another sequentially.*/

#include <stdio.h>

int main() {
	char firstName[20],lastName[20];
	int yearBirth;

	printf("Input your first name: \n");
	scanf("%s",&firstName);	
	printf("Input your last name: \n");
	scanf("%s",&lastName);
	printf("Input your year of birth: \n");
	scanf("%d",&yearBirth);

	printf("%s %s borned in %d\n",firstName,lastName,yearBirth);
	return 0;
}

