// pointers - variables that store address of other variables
#include <stdio.h>
int main() {
    int a;      // integer
    int *p;     // pointer to integer
    a=10;
    p = &a;     // &a = address of a
    printf("%d\n",p);
    printf("%d\n",*p); // *p - value at address pointed by p
    printf("%d\n",&a); // &a = address of a 
    printf("a = %d\n",a);
    *p = 12; // dereferencing
    printf("a = %d\n",a);

    printf("\nAddress of p is %d\n",p);
    printf("Value at p is %d\n",*p);
    int b = 20; 
    *p = b;  
    printf("\nAddress of p is %d\n",p);
    printf("Value of p is %d\n", *p);




    char c;     // character
    char *po;   // pointer to character 

    double d;   // double 
    double *p1; // pointer to double

    

    return 0;



}
