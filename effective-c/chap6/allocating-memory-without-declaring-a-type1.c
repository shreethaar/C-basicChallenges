// allocating memory without declaring a type 

#include <stdio.h>
#include <stdlib.h>


int main() {
    void* ptr = malloc(4); // allocate 4 bytes without specifying a type

    if(ptr==NULL) {
        perror("Memory allocation failed\n");
        return 1;
    }

    // example: treat as an integer
    *(int *)ptr=42;
    printf("Value: %d\n",*(int *)ptr);

    free(ptr); // always free allocated memory
    return 0;
}

// Can store the return value from malloc as a void pointer to avoid declarating a type for the referenced object:
//
// void *p = malloc(size);
// char *p = malloc(size);
