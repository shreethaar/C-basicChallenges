// write a program to print the maximum and mininum elements in an array

#include <stdio.h>

void find_small_large(int arr[],int n) {
    int min, max;

    min = arr[0];
    max = arr[0];

    for(int i=1;i<n;i++) {
        if(arr[i]<min) {
            min=arr[i];
        }
        if (arr[i]>max) {
            max=arr[i];
        }
    }
    printf("Maximum: %d and Minimum: %d\n",min,max);
}



int main() {
    int arr[] = {15,14,35,2,11,83};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    find_small_large(arr,len);
    return 0;
}
