#include <stdio.h>

void swap(int,int);
void another_swap(int*, int*);

int main(void) {
    int a=21;
    int b=17;

    swap(a,b);
    printf("main: a=%d, b=%d\n", a,b);
    another_swap(&a,&b);
    printf("another swap: a=%d, b=%d",a,b);
    return 0;
}

//swap function declare two parameters, a and b, that is use to pass arguments to this function
void swap(int a, int b) {
    int t=a;
    a=b;
    b=t;
    printf("swap: a=%d,b=%d\n",a,b);
}


void another_swap(int *a,int *b) {
    int t=*a;
    *a=*b;
    *b=t;
}



// Notes:
// Declaring multiple variables
// Can declare multiple varaibles in any single declaration,
// but doing so can get confusing if the variables are pointers or arrays, or the variables are different types
// 
// char *src, src; 
// int x, y[5];
// int m[12], n[15][3], o[21];
//
// all these are fine
//
// to improve understand (easier to see):
// char *src;    -> src as a type of char *
// char c;       -> c has a type of char 
// int x;        -> x has a type of int
// int y[5];     -> y is an array of 5 elements of type int 
// int m[12];    -> m in an array of 12 elements of type int 
// int n[15][3]; -> n is an array of 15 arrays of 3 elements of type int 
// int o[21];    -> o is an array of 21 elements of type int 
//
// Summary: readable and understable code is less likelly to have defects 

