// function scope (labels only)
// labels (used in goto) are the only identifiers with function scope
// exist only inside their function

#include <stdio.h>

void example() {
    printf("Before jump\n");
    goto my_label; // jump to label 
    printf("This won't print\n");

my_label:
    printf("After jump\n");
}


int main() {
    example();
    return 0;
}

