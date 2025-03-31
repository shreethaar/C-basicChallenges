// VLA - variable length arrays in C

#include <stdio.h>

void printArray(int size) {
    int arr[size];
    for(int i=0;i<size;i++) {
        arr[i]=i*2;
        printf("%d ",arr[i]);
    }
    printf("\n"); //automatically freed after function exits
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    printArray(n); // size determined at runtime
    return 0;
}


