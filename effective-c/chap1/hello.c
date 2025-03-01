#include <stdio.h>
#include <stdlib.h> 

int main(void) {
    puts("Hello,world");
    return EXIT_SUCCESS;
}

// %cc hello.c to compile 
//
// Notes:
// Preprocessor Directives
// -> #include preprocessor directive behaves as if you replaced it with the contents of the specified file at the exact same location
// puts function is declared in <stdio.h>
// EXIT_SUCCESS macro is defined in <stdlib.h> 
//
// Main function
// -> called at program startup
// Main function defines the main entry point for the program
// main return a value of type int
// void indicate function does not accept arguments 
//
// puts function
// writes a string arguments to stdout 
//
// return statement
// use to exit program 
//
// EXIT_SUCCESS
// is an object-like macro which is defines:
// #define EXIT_SUCESS 0 
// each occurrence of EXIT_SUCCESS is replaced by a 0
// is equivalent of exit function
