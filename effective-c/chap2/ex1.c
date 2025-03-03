//Add a retrieve function to the counting example from Listing 2-6 to retrieve the current value of counter.

#include <stdio.h>

void increment(void);
unsigned int retrieve(void);

int main(void) {
    for (int i=0;i<5;i++){ 
        increment();
    }
    return 0;
}


void increment(void) {
    static unsigned int counter=0;
    counter++;
    printf("[%d] ", counter);
}

unsigned int retrieve(void) {
    static unsigned int counter = 0;
    return counter;
}

