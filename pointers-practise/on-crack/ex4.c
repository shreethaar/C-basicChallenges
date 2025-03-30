// pointers to pointers 
#include <stdio.h>

#include <stdio.h>

int main() {
    int x=10;
    int *p=&x;  // p points to x
    int **pp=&p; // pp points to p
 
    printf("%d\n",x);   // 10
    printf("%d\n",*p);  // 10
    printf("%d\n",**pp); // 10 

    **pp = 20; // changes x to 20 throug double indirection
    printf("%d\n",x);
}

