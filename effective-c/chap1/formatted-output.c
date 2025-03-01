#include <stdio.h>
#include <stdlib.h>

// printf function takes a format string that defines how the output is formatted, followed by a variable number of arguments that are the actual values to print

int main(void) {
    printf("%s\n","Hello,world!");
    return EXIT_SUCCESS;
}

// first arguments is the format string "%s\n" 
// %s is a conversion specification that instructs the printf function to read the second argument (a string literal) and print it out to stdout. 
//
// \n is an alphabetic escape sequence used to include new line after the string
