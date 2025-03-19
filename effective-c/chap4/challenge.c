#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define SIZE 5
uint8_t compute_checksum(int *arr, size_t size) {
    uint8_t checksum = 0;
    for (size_t i = 0; i < size; i++) {
        checksum ^= arr[i];
    }      
    return checksum;
}


int main() {
    int *mem=(int *)malloc(SIZE*sizeof(int));
    if(!mem) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Allocating memory for %d integers...\n",SIZE);

    for(int i=0;i<SIZE;i++) {
        mem[i]=(i+1)*5|0x1;
    }
    printf("Memory initialized with transformed values.\n");
    uint8_t checksum=compute_checksum(mem,SIZE);
    printf("Verifying integrity...\n");
    printf("Integrity check: %s\n",(checksum!=0) ? "passed":"failed");

    printf("Alignment of int: %lu bytes\n",_Alignof(int));
    printf("Pointer Arithmetic Example:\n");
    int *ptr=mem;
    for(int i=0;i<SIZE;i++,ptr++) {
        printf("Value at mem[%d]: %d\n", i, *ptr);
    }

    printf("Securely wiping and deallocating memory...\n");
    for (int i = 0; i < SIZE; i++) {
        mem[i] ^= mem[i];
    }
    
    free(mem);
    printf("Memory successfully freed.\n");
    return 0;
}

