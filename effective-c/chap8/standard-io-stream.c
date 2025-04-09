#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // reading from stdin
    printf("Enter a number: ");
    int number;
    if(scanf("%d",&number) != 1) {
        fprintf(stderr,"Error reading integer from stdin.\n");
        return EXIT_FAILURE;
    }

    // writing to stdout
    printf("You entered: %d\n",number);

    // writing to stderr
    if(number<0) {
        fprintf(stderr,"Warning: The number is negative!\n");
    }

    return EXIT_SUCCESS;
}

