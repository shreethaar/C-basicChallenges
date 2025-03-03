// file scope
// declared outside any function
// accesible throughout the file after the point of declaration
#include <stdio.h>

int global_var = 10;        //file scope: accesible everywhere in this file

void print_global() {
    printf("Global variable: %d\n",global_var);
}

int main() {
    printf("Accessing global_var in main: %d\n",global_var);
    print_global();
    return 0;
}

