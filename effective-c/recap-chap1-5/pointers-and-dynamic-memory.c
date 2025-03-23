// write a c program that uses pointers to create a dynamic array of integers based on user input for the size. Define a function reverseArray that takes a pointer to the array and its size, and reverses the array in place using pointer arithmetic (no extra array allowed). In main, populate the array with user input, call the function, and print the reversed array. Ensure proper memory management. 
//

#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;

    while(start<end) {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}



int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    if(size<=0) {
        printf("Size must be positive.\n");
        return 1;
    }

    int *arr = (int *)malloc(size * sizeof(int));
    if(arr==NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n",size);
    for(int i=0; i<size; i++) {
        scanf("%d",arr+i);
    }

    reverseArray(arr,size);
    printf("Reversed array: ");
    for(int i=0;i<size;i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    free(arr);
    return 0;

}


