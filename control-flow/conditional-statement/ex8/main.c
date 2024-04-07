//  Write a C program to find the largest of three numbers. 

#include <stdio.h>

int main() {
	int a,b,c;
	printf("Enter three integers\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c) {
		printf("The first number is the greatest among three.");
		}
	else if(b>a&&b>c) {
		printf("The second number is the greatest among three.");
	}
	else {
		printf("The third number is the greatest among three.");
	}

	return 0;
}

