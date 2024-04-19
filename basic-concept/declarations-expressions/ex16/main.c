/* . Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int amount,notes[6]={100,50,20,10,5,1};
	printf("Enter the amount:\n");
	scanf("%d",&amount);
	for(int i=0;i<6;i++) {
		int count=amount/notes[i];
		if(count>0) {
			printf("%d x %d\n",notes[i],count);
			amount%=notes[i];
		}
	}
	return 0;
}

