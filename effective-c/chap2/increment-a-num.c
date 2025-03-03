#include <stdio.h>

// function to increment a number by 5 (call by reference)
void increment(int *value) {
    *value+=5;
}

int main() {
    int value;
    //input a number
    printf("Enter a number: ");
    scanf("%d",&value);
    //call increment function
    increment(&value);
    //print update value
    printf("After incrementing: %d\n",value);
    return 0;

}

