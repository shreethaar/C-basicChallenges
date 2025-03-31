// dmalloc - detect memory leaks, double frees, and buffer overflows

#include <stdio.h>
#include <stdlib.h>
#include <dmalloc.h>

void test_leak() {
    char *buffer = (char*)malloc(20); // allocating 20 bytes
    // no free() -> memory leak detected by dmalloc 
}


int main() {
    dmalloc_debug_setup("logfile.txt"); // logs memory issues to a file
    test_leak();
    return 0;
}

