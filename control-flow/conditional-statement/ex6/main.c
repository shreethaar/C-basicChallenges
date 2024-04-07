// Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 

#include <stdio.h>

int main() {
	int m,n;
	printf("Enter the value of M (integer):\n");
	scanf("%d",&m);
	if(m>0) {
		n=1;
		printf("%d",n);
	}
	if(m==0||m==-1){
		n=-1;
		printf("%d",n);
	}
	return 0;
}

