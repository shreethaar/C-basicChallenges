/* Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15 

*/


#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,sum=0;
	printf("Enter the number of elements to be stored in the array: ");
	scanf("%d",&n);
	int arr[n];

	printf("Enter %d elements into the array:\n",n);

	for(int i=0;i<n;i++) {
		printf("Element - %d : ",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Sum of all elements stored in the array: %d",sum);
	return 0;
}


