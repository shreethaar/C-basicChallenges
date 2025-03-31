// calloc function allocates memory like malloc but it also initializes the allocated memory to zero

// function signature:
// void *calloc(size_t nmemb, size_t size);

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t num_elememts = 5;
    
    //allocate memory for 5 integers, each of size sizeof(int)
    int* arr=(int *)calloc(num_elememts,sizeof(int));
    
    if(arr==NULL) {
        perror("memory allocation failed");
        return 1;
    }

    //print the array (all elements should be zero) 
    for(size_t i=0;i<num_elememts;i++) {
        printf("arr[%zu] = %d\n",i,arr[i]);
    }

    free(arr);
    return 0;
}



