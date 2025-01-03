#include <stdio.h>

int main() {
    int i=1;
    int j=2;
    int *ptr=&i;
    //i+=1;
    printf("i is %d\n",i);
    printf("j is %d\n",j);
    printf("*ptr is %d\n", *ptr);
    i+=1;
    printf("\nNow i is %d\n",i);
    printf("Now *ptr is %d\n", *ptr);
    
    *ptr+=1;
    printf("\nNow i is %d\n",i);
    printf("Now *ptr is %d\n", *ptr);
    return 0;
}
