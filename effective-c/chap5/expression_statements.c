// demonstrating expression statements

#include <stdio.h>

int main(void) {
    int x,y;
    x=5;
    y=x+3;

    printf("x=%d, y=%d\n",x,y);
    x++;
    --y;

    printf("After increment/decrement: x=%d, y=%d\n",x,y);
    x=1,y=2;
    printf("After comma expression: x=%d, y=%d\n",x,y);


    (void)x;
    ; // null statement (empty expression) 

    return 0;
}

