/*Write a C program that prompts the user to input a series of integers until the user stops by entering 0 using a do-while loop. Calculate and print the sum of all positive integers entered.
 */

#include <stdio.h>

int main() {
	int num, sum=0;

	do{
		printf("Enter numbers to add:\n");
		scanf("%d",&num);
		sum+=num;
	}
	while(num!=0);
	printf("Total sum of the integers: %d",sum);
	return 0;
}
