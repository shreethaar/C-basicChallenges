/* Write a program in C to count the total number of duplicate elements in an array. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,count=0;
	printf("Enter the number element for the array:\n");
	scanf("%d",&n);
	int arr[n];

	printf("Enter %d elements in the array:\n");
	for(int i=0;i<n;i++) {
		printf("Element - %d : ",i);
		scanf("%d",&arr[i]);

	}

	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(arr[i]==arr[j]) {
				count++;
				break;
			}
		}
	}

	printf("Total number of duplicate elements found in the array is: %d\n",count);
	return 0;
}

