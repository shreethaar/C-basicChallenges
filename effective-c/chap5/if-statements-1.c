#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

bool safediv(int dividend, int divisor, int *quotient) {
    if(!quotient) return false;
    if((divisor==0)||((dividend==INT_MIN)&&(divisor==-1)))
        return false;
    *quotient=dividend/divisor;
    return true;
}


int main() {
    int x=4,y=2,z=0;
    if(!safediv(x,y,&z)) {
        printf("division operation is safe\n");
    }
    else {
        printf("division operation is not safe\n");
    }


    return 0;


}

