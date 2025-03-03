#include <stdio.h>

int j; // file scope of j begins

void f(int i);

int main() { 
    int random=1;
    f(random);
    return 0;
}

void f(int i) { // block scope of i begins 
    int j=i;    // block scope of j begins; hides file-scope j
    i++;        // i refers to the function parameters
    for(int i=0;i<2;i++) {  // block scope of loop-local i begins 
        int j=2;            // block scope of inner j begins; hides out j
        printf("%d\n",j);   // inner j is in scope, prints 2
    }                       // block scope of the inner i and j ends
    printf("%d\n",j);       // the outer j is in scope, prints 1
} // the block scope of i and  j ends

void g(int j); // j has function prototype scopes; hides file-scope
