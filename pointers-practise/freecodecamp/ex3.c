// pointer arithmetic

#include <stdio.h>

int main() {
    int a = 10;
    int* p = &a; 
 //   *(p+1)=20;
    printf("Address of p is %d\n",p);
    printf("Value of address p is %d\n", *p);
    printf("Size of integer is %d bytes\n",sizeof(int));
    printf("Address of p is %d\n",p+1);
    printf("Value of address p+1 is %d\n",*(p+1));
    return 0;
}

