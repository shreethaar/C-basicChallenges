// Declare an array of three pointers to functions and invoke the appropriate function based on an index value passed in as an argument

#include <stdio.h>


void func1();
void func2();
void func3();


int main() {    
    void (*funcs[3])() = {func1,func2,func3};
    int index;
    printf("Enter an index (0-2): ");
    scanf("%d",&index);

    if(index>=0 && index <3) {
        funcs[index]();
    }
    else {
        printf("Invalid index\n");
    }

    return 0;
}

void func1() {
    printf("Function 1 Invoked\n");
}

void func2() {
    printf("Function 2 Invoked\n");
}

void func3() {
    printf("Function 3 Invoked\n");
}

