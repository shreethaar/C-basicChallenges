#include <stdio.h>

int main() {
	printf("F:\n");
	for(int i=0;i<6;i++) {
		for(int j=0;j<5;j++){
			if((i==0||i==2||i==5)||(j==0&&i>0&&i<5)) {
				printf("#");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\nC:\n");
	printf(" ######\n");
    	printf("##\n");
    	printf("##\n");
    	printf("##\n");
    	printf(" ##\n");
    	printf(" ######\n");

	return 0;
}


					
