//Write a C program to print numbers from 1 to 10 and 10 to 1 using a do-while loop. 

#include <stdio.h>

int main() {
	int num=1,i=0;
	
	do {
		printf("%d\n",num);
		num++;
		i++;
	}
	while(i!=10);
	return 0;
}

