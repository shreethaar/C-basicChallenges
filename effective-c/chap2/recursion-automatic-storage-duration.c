//a new instance of any variables declared inside that function is created each time the function is called. Each instance is separate and does not share memory with previous calls.



#include <stdio.h>

void recursiveFunction(int n) {
    int x = n; // x is an automatic variable
    printf("Recursive call %d: x = %d at address %p\n", n, x, (void*)&x);
    
    if (n > 1) {
        recursiveFunction(n - 1); // Recursive call
    }

    printf("Returning from call %d: x = %d\n", n, x);
}

int main() {
    recursiveFunction(3); // Start recursion
    return 0;
}
