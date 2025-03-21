//demonstrating compound statements (blocks) in c 

#include <stdio.h>

int main(void) {
    int x=5;
    
    {
        int y=10;
        printf("Inside block: x=%d, y=%d\n",x,y);

        {
            int z=15;
            printf("Inside nested block: x=%d, y=%d, z=%d\n",x,y,z);
        }

    }

    if(x>0) {
        printf("x is positive\n");
        int temp=x*2;
        printf("Twice x is %d\n",temp);
    }

    if(x<10) {
        printf("x is less than 10\n");
    }
    return 0;
}

