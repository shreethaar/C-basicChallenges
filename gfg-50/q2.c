// C program for checking value is prime is not

#include <stdbool.h>
#include <stdio.h>

int main() {
    int n=91;
    int cnt=0;

    //if n is less than/equal to 1
    if(n<=1) {
        printf("%d is NOT prime\n",n);
    }
    else {
        for(int i=1;i<=n;i++) {
            if(n%i==0) {
                cnt++;
            }
        }
        if(cnt>2) {
            printf("%d is NOT prime\n",n);
        }
        else {
            printf("%d is prime\n",n);
        }
    }
    return 0;
}
