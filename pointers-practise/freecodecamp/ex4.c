#include <stdio.h>

int main() {
    int a=1025;
    int *p;
    p=&a;
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("address = %d, value = %d\n",p,*p);
    
    char *p0;
    p0=(char*)p; // typecasting before assign different data type for pointer (int -> char)
    printf("Size of char is %d bytes\n",sizeof(char));
    printf("address = %d, value = %d\n",p0,*p0);


    return 0;

}

