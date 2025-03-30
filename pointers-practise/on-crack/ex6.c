// function pointers: allow to store and invoke function dynamically 

int add(int a, int b) {
    return a+b;
}

int subtract(int a, int b) {
    return a-b;
}

int main() {
    // declaring a function pointer)
    int (*operation)(int, int);

    operation = add;
    int result=operation(4,3);

    operation = subtract;
    result=operation(5,3);
    
    return 0;
}
