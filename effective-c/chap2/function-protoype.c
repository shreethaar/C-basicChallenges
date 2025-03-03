#include <stdio.h>

int max(int a, int b);

int main() {
    printf("Max: %d\n",max(10,20));
    return 0;
}




// function prototypes 

int max(int a, int b) { return a > b ? a : b;}


