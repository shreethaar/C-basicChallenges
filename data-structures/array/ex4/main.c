/*  Write a program in C to copy the elements of one array into another array. 
 *  Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr1[n], arr2[n];
	printf("Enter %d elements in the array:\n",n);
	
	for(int i=0;i<n;i++) {
		printf("Element - %d: ",i);
		scanf("%d",&arr1[i]);
		arr2[i]=arr1[i];

	}
	printf("The element stored in the first array are:\n");
	for(int i=0;i<n;i++) {
		printf("%d",arr1[i]);
	}
	printf("\nThe element stored in the second array are:\n");
	for(int i=0;i<n;i++) {
		printf("%d",arr2[i]);
	}


	return 0;
}


