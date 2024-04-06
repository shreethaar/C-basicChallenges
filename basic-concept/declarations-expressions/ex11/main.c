//Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value. 

#include <stdio.h>

int main() {
	float weight,ttlweight,ttl;
	int no,ttlno;
	for(int i=1;i<=2;i++) {
		printf("Weight - Item%d ",i);
		scanf("%f",&weight);
		ttlweight+=weight;
		printf("No. of item%d ",i);
		scanf("%d",&no);
		ttlno+=no;
	}
	ttl=ttlweight/ttlno;
	printf("Average value = %f\n",ttl);
	printf("%d",no);
	return 0;
}

