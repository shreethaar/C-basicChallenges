#include <stdio.h>

int main() {
    int a=5;
    int *p;
    p=&a;
    printf("%d\n",a);
    printf("%p\n",p);
    printf("%p\n",&a);
    printf("%p\n",&p);
    printf("%d\n",*p);
    *p=8;
    printf("%d\n",*p);
    // p  -> address 
    // *p -> value at address
    return 0;
}
