// pointers and arrays

#include <stdio.h>

int main() {
    int A[] = {2,4,5,8,1};
    int *p=A;
    p++; // valid 
    A++; // invalid 
    printf("%d\n",A); // address of first element
    printf("%d\n",&A[0]);  // address of first element
    printf("%d\n",A[0]); // value of first element
    printf("%d\n",*A); // value of first element

    for(int i=0;i<5;i++) {
        printf("Address = %d\n",&A[i]);
        printf("Address = %d\n",A+i);
        printf("Value = %d\n",A[i]);
        printf("Value = %d\n",*(A+i));
    }


    return 0;
}

