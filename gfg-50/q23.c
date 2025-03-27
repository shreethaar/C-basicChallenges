// write a program to check the repeating elements in C 

#include <stdio.h>

int sort(int arr[], int size) {
    for(int i=0;i<size-1;i++) {
        for(int j=0;j<size-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
}

void findRepeating(int arr[], int n) {
    int count=0;
    for(int i=0;i<n;i++) {
        int flag=0;
        while(i<n-1&&arr[i]==arr[i+1]) {
            flag=1;
            i++;
        }
        if(flag) {
            printf("%d ",(arr[i-1]));
        }
    }
    return;
}


int main() {
    int arr[] = {1,3,4,1,2,3,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    findRepeating(arr,n);
    return 0;
}

