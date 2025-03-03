#include <stdio.h>

void reverseArray(int size, int *arr) {
    int start=0, end=size-1;
    while(start<end) {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}


int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    reverseArray(n, arr);
    for(int i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}

