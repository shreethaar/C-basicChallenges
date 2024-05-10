/* Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;

	printf("Enter the number of elements\n");
	scanf("%d",&size);

	int numArray[size];
	printf("Input %d elements in the array\n",size);

	for(int i=0;i<size;i++) {
		printf("Element - %d : ",i);
		scanf("%d",&numArray[i]);
	}

	printf("Elements in array are: ");	
	for(int i=0;i<size;i++) {
		printf("%d ",numArray[i]);
	}
	return 0;
}


