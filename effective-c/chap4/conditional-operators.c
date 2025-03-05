#include <stdio.h>

int main() {
    int a=10,b=5;

    int min=(a<b) ? a : b;
    printf("Mininum of %d and %d is %d\n",a,b,min);

    int max=(a>b) ? a : b;
    printf("Maximum of %d and %d is %d\n",a,b,max);

    return 0;
}
