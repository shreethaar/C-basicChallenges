//write a program to reverse a number

#include <stdio.h>

int reverse_iteration(int N) {
    int ans=0;
    while(N!=0) {
        ans=ans*10+(N%10);
        N=N/10;
    }
    return ans;
}


int reverse(int n, int ans) {
    if(n==0) {
        return ans;
    }

    ans=ans*10+n%10;
    return reverse(n/10,ans);
}

int main() {
    int N=15942;
    printf("Initial number:%d\n",N);
    N=reverse_iteration(N);
    printf("%d after reverse using iteration\n",N);
    N=reverse_iteration(N);
    int ans=0;
    ans=reverse(N,ans);
    printf("%d after again reverse using recursion",ans);
    return 0;
}

