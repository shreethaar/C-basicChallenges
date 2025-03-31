// reallocarray - can reallocate storage for an array, but also provides overflow checking for array size calculations
//
// function signatures:
// void* reallocarray(void *ptr, size_t nmemb, size_t size);
//
// is a safer alternative to realloc() that helps prevent integer overflow when calculating the total memory size (num * size) 
//

#include <stddef.h>
#define _GNU_SOURCE // required for glibc
#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t initial_size=3;
    size_t new_size=5;

    // allocate an array for 3 integers
    int* arr=(int*)malloc(initial_size * sizeof(int));
    if(arr==NULL) {
        perror("initial allocation failed");
        return 1;
    }


    // initialize first 3 element
    for(size_t i = 0; i<initial_size;i++) {
        printf("arr[%zu]=%d\n",i,arr[i]);
    }

    // resize the array safely using reallocarray() 
    int* temp=(int*)reallocarray(arr, new_size, sizeof(int));
    if(temp==NULL) {
        perror("Memory reallocation failed");
        free(arr);
        return 1;
    }   
    arr=temp; // assign the new memory block
    
    // initialize new elements
    for(size_t i=initial_size;i<new_size;i++) {
        arr[i]=(i+1)*10;
    }

    printf("\nAfter reallocarray:\n");
    for(size_t i=0;i<new_size;i++) {
        printf("arr[%zu] = %d\n",i,arr[i]);
    }
    free(arr);
    return 0;
}

