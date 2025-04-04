#include <stdio.h>
#include <stdlib.h>


int main() {
    int num_count;
    double sum=0;
    printf("How many number? ");
    scanf("%d",&num_count);
    float *numbers=(float*)malloc(num_count*sizeof(float));

    int count=1;
    while(count!=num_count+1) {
        printf("Enter number %d:",count);
        scanf("%f",&numbers[count]);
        count++;
    }
    
    for(int i=0;i<=num_count;i++) {
        sum+=numbers[i];
    }

    printf("Average=%.2f\n",sum/num_count);

    return 0;
}

