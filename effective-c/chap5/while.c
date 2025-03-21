#include <stdio.h>

int main(void) {
    int count=1;
    while(count<=5) {
        printf("Count: %d\n",count);
        count++;
    }

    int sum=0;
    int i=1;
    while(i<=10) {
        sum+=i;
        i++;
    }

    printf("Sum of numbers from 1 to 10: %d\n", sum);

    int a=5,b=10;
    while(a>0 && b>0) {
        printf("a = %d, b = %d\n", a,b);
        a--;
        b-=2;
    }

    int num=1;
    while(1) {
        printf("%d ",num);
        num*=2;
        if(num>50) {
            break;
        }
    }
    printf("\n");

    int j=0;
    while(j<10) {
        j++;
        if(j%2==0) {
            continue;
        }
        printf("Odd number: %d\n",j);
    }

    return 0;
}

