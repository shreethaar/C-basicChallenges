// generic functions with void pointers

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void swap(void *a, void *b, size_t size) {
    // temporary buffer to hold data during swap
    void *temp=malloc(size);
    memcpy(temp,a,size);
    memcpy(a,b,size);
    memcpy(b,temp,size);
    free(temp);
}


int main() {
    int x=5,y=10;
    swap(&x,&y,sizeof(int));
    
    double d1=3.14,d2=2.71;
    swap(&d1,&d2,sizeof(double));
    return 0;
}

