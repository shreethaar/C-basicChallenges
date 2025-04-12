// type-generic macros (using _Generic in C11) 

#include <stdio.h>

#define print_value(x) _Generic((x), \
    int: print_int, \
    float: print_float, \
    double: print_double, \
    default: print_unknown)(x)

void print_int(int x) {
    printf("int: %d\n", x);
}

void print_float(float x) {
    printf("float: %.2f\n", x);
}

void print_double(double x) {
    printf("double: %.2f\n", x);
}

void print_unknown(void* x) {
    printf("Unknown type\n");
}

int main(void) {
    print_value(10);        // int
    print_value(3.14f);     // float
    print_value(2.718);     // double
    return 0;
}
