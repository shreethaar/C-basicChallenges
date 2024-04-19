#include <stdio.h>

int test(int x, int y);

int main() {
	printf("%d", test(1,2));
	printf("\n");
	printf("%d",test(2,2));

	return 0;
}
int test(int x,int y) {
	return x==y?(x+y)*3:x+y;
}

