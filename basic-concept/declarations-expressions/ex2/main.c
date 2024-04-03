// Write a program to get the C version you are using 

#include <stdio.h>

int main(int argc, char** argv) {
	#ifdef __STDC__ 
		#if __STDC_VERSION__ >= 201710L
			printf("C17 or later\n");
		#elif __STDC_VERSION__ >= 201112L
			printf("C11\n");
		#elif __STDC_VERSION__ >= 199901L
			printf("C99\n");
		#else
			printf("C90\n");
		#endif

	#else 
		printf("Pre-standard C\n");
	#endif
	return 0;
}

