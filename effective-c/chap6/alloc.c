// alloca function dynamically allocates memory on the stack instead of the heap. 
//
// Danger of alloca
// 1. Stack overflow - large allocations can exceed stack limits, causing segmentation faults (stack smashing) 
// 2. No explicit free - since alloca memory disappears after the function returns, it is unsuitable for long-term storage 
// 3. Non-Portable - some platforms dont support alloca 
//

#include <stdio.h>
#include <alloca.h>

void test_alloca(int size) {
    // allocate memory on the stack
    char* buffer =(char *)alloca(size);
    
    // use the memory
    for(int i=0;i<size-1;i++) {
        buffer[i] = 'A' + (i % 26);
    }
    buffer[size-1]='\0';
    printf("Allocated string: %s\n",buffer); // memory valid here
}


int main() {
    test_alloca(20); // allocating 20 bytes
    // memory automatically freed after function returns
    return 0;
}

