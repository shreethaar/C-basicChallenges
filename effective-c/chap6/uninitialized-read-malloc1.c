#include <stdio.h>
#include <stdlib.h>

int main() {
    int* p = malloc(sizeof(int)); //allocated memory but not initialized

    if(p==NULL) {
        perror("Memory allocation failed\n");
        return 1;
    }

    printf("Value at p: %d\n",*p); // uninitialized read!
    free(p);
    return 0;
}
