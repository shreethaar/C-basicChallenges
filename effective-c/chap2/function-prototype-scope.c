// function prototype scope
// used in the function declaration
// only valid inside the function prototype and does not affect the function definition

#include <stdio.h>

// function prototype (parameters exist only within this line)
void add(int a, int b);

int main() {
    int x=3,y=7;
    add(x,y);
    return 0;

}

// function definition (a and b are separate from the prototype)
void add(int a,int b) {
    printf("Sum: %d\n",a+b);
}


