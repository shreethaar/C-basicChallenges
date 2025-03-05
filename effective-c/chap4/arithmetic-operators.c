#include <stdio.h>

int main() {
    int x=5,y=-3;
    printf("Unary plus: +%d=%d\n",x,+x);
    printf("Unary minus: -%d=%d\n",x,-x);

    printf("Multiplication: %d * %d = %d\n",x,y,x*y);
    printf("Division: %d / %d = %d\n",x,2,x/2);
    printf("Modulo: %d %% %d = %d\n",x,2,x%2);

    printf("Addition: %d + %d = %d\n",x,y,x+y);
    printf("Subtraction: %d - %d = %d\n",x,y,x-y);

    return 0;
}

