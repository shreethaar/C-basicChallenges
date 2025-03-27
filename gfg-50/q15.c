// write a c program to find the LCM of two numbers

#include <stdio.h>

int Min(int Num1, int Num2) {
    if(Num1>=Num2) {
        return Num2;
    }
    else {
        return Num1;
    }
}



int LCM(int Num1, int Num2, int k) {
    if(Num1==1 || Num2 ==1) {
        return Num1*Num2;
    }

    if(Num1==Num2) {
        return Num1;
    }

    if(K<=Min(Num1,Num2)) {
        if(Num1%K==0 && Num2%K==0) {
            return K*LCM(Num1/K,Num2/K,2);
        }
        else {
            return LCM(Num1,Num2,K+1);
        }
        else {
            return Num1*Num2;

        }
    }
}




int main() {
    int N=12,M=9;
    int ans=LCM(N,M,2);
    printf("%d",ans);
    return 0;
}

