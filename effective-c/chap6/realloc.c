// realloc - increases or decreases the size of previously allocated storage
// It takes a pointer to some memory allocated by earlier call to aligned_alloc, malloc, calloc, or realloc (or a null pointer) and a size
//
// function signature
// void *realloc(void *ptr, size_t size);
//
// can use realloc function to grow or (less commonly) shrink the size of an array
//
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t initial_size=3;
    size_t new_size=5;

    int* arr=(int*)malloc(initial_size * sizeof(int));

    if(arr==NULL) {
        perror("memory allocation failed\n");
        return 1;
    }


    // initializing array with values
    for(size_t i=0;i<initial_size;i++) {
        arr[i]=i+1;
    }

    printf("Initial array:\n");
    for(size_t i=0;i<initial_size;i++) {
        printf("arr[%zu]=%d\n",i,arr[i]);
    }

    // resize array to hold 5 integers
    int *temp=(int *)realloc(arr,new_size * sizeof(int));
    if(temp==NULL) {
        perror("memory allocation failed\n");
        free(arr); // free original memory if realloation fails
        return 1;
    }
    arr=temp; //assign reallocated memory back to arr

    // initialize new elements
    for(size_t i=initial_size; i<new_size;i++) {
        arr[i]=(i+1)*10;
    }

    printf("\nExpanded array:\n");
    for(size_t i=0; i<new_size;i++) {
        printf("arr[%zu] = %d\n",i,arr[i]);
    }
    free(arr);  // free allocated memory
    return 0;


}
