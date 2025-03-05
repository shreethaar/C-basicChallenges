#include <stdio.h>

// function that will be passed as a pointer
int add_five(void) {
    return 5;
}

// function that takes a function pointer as argument
void process_function(int (*func)(void)) {
    int result=func();
    if(result!=0) {
        printf("Function returned: %d\n",result);
    }
    else {
        printf("Function returned zero\n");
    }
}



int main() {
    process_function(add_five);
    return 0;
}

