/*  Write a C program that prompts the user to input a series of numbers until they input a duplicate number. Use a while loop to check for duplicates. */


#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	
	printf("Enter the total numbers to input\n");
	scanf("%d",&size);
	
	int num[size];
	int duplicate=0;

	for(int i=0;i<size;i++) {
		int input;
		printf("Enter element %d\n",(i+1));
		scanf("%d",&input);

		duplicate=0;
		for(int j=0;j<i;j++) {
			if(num[j]==input) {
				printf("Duplicate value, Re-enter unique value\n");
				duplicate=1;
				i--;
				break;
			}
		}
		if(!duplicate) {
			num[i]=input;
		}	
	}
	printf("Numbers entered:\n");
	for(int i=0;i<size;i++) {
		printf("%d\n",num[i]);
	}
	return 0;
}

