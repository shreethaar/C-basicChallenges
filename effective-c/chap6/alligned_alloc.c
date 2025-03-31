// aligned_alloc function is similar to malloc function except it requires you to  define an alignmet as well as a size for the allocated object

// function signature:
// void *aligned_alloc(size_t alignment, size_t size);
//


// example using aligned_alloc to allocate memory with 16-byte alignment
#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t alignment = 16; // alignment requirement
    size_t size = 64;      // number of bytes to allocate 
    
    void *ptr = aligned_alloc(alignment, size);
    if(ptr==NULL) {
        perror("aligned_alloc failed");
        return 1;
    }

    printf("Allocated memory at: %p\n",ptr); //print aligned memory address 
    free(ptr); // free the allocated memory 
    return 0;
}

// key points
// alignment must be a power of 2 
// size must be a multiple of alignment, or behavior is undefined
// aligned_alloc ensures the allocatd memory starts at an address divisble by alignment 

