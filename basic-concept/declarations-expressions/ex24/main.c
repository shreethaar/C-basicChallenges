/* Write a C program that reads two integers and checks whether they are multiplied or not. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool multVerify(int a,int b);

int main() {
	int first,second;
	printf("Enter two integers:\n");
	scanf("%d\n%d",&first,&second);
	bool verify = multVerify(first,second);
	if(verify) {
		printf("Both numbers can be multiplied\n");
	}
	else {
		printf("Both numbers cant be multplied\n");
	}
	return 0;
}

bool multVerify(int a, int b) {
    double value;
    if (a > b) {
        value = (double)a / b;
    } else {
        value = (double)b / a;
    }
    return (value == (int)value && (int)value % 10 == 0);
}

