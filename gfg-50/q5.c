// write a program to replace all 0s with 1s in a number
#include <stdio.h>
#include <math.h>

int main() {
    int N=102301;
    int ans=0;
    int i=0;
    while(N!=0) {
        if(N%10==0) 
            ans=ans+1*pow(10,i);
        else
            ans=ans+(N%10)*pow(10,i);
        N=N/10;
        i++;
    }
    printf("%d",ans);
    return 0;
}

    

