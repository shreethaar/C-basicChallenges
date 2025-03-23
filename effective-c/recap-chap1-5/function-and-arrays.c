// write a C program that defines a function findMaxSequence which takes an array of integers and its size as arguments. The function should return the length of the longest consecutive sequence of identical numbers in the array. In main, initialize an array with at least 10 elements, call the function, and print the result
//

#include <stdio.h>

int findMaxSequence(int arr[], int size) {
    if(size<=0) return 0;

    int maxLength=1;
    int currentLength=1;
    int currentNum=arr[0];

    for(int i=1;i<size;i++) {
        if(arr[i]==currentNum) {
            currentLength++;
            if(currentLength>maxLength) {
                maxLength=currentLength;
            }
        }
        else {
            currentNum=arr[i];
            currentLength=1;
        }
    }
    return maxLength;
}



int main() {
    int arr[] = {1,2,2,3,3,3,4,4,4,4};
    int size = 10;

    int result=findMaxSequence(arr,size);
    printf("Longest sequence length: %d\n",result);
    return 0;
}
