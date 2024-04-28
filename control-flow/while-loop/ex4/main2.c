#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	printf("Enter the total numbers to input:\n");
	scanf("%d",&size);

	int num[size];
	int count=0;

	while(count<size) {
		int input;
		printf("Enter element %d:",(count+1));
		scanf("%d",&input);
		int duplicate=0;
	
		for(int i=0;i<count;i++) {
			if(num[i]==input) {
				printf("Duplicate value. Re-enter unique value\n");
				duplicate=1;
				break;
			}
		}
		
		
		if(!duplicate) {
			num[count]=input;
			count++;
		}
	}
	printf("Numbers entered:\n");
	for(int i=0;i<size;i++) {
		printf("%d\n",num[i]);
	}
	return 0;
}

