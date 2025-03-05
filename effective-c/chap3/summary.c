#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Integer types and limits
    printf("Integer Limits:\n");
    printf("INT_MIN: %d, INT_MAX: %d\n",INT_MIN,INT_MAX);
    printf("UINT_MAX: %u\n",UINT_MAX);
    printf("LONG_MIN: %ld, LONG_MAX: %ld\n\n",LONG_MIN,LONG_MAX);
    
    // Floating-point types and limits
    printf("Floating-point Limits:\n");
    printf("FLT_MIN: %e,FLT_MAX: %e\n",FLT_MIN,FLT_MAX);
    printf("DBL_MIN: %e, DBL_MIN: %e\n",DBL_MIN,DBL_MAX);

    // Implicit and Explicit Conversions
    int i=42;
    double d=i;
    printf("Implicit conversion (int->double): %f\n",d);

    double d2=3.14;
    int i2=(int)d2;
    printf("Explicit conversion (double->int): %d\n",i2);

    // Integer Conversion Rank
    short s=32000;
    int result=s+i; // `short` is promoted to `int`
    printf("Integer conversion rank example: %d\n\n", result);

    // Integer Promotions
    char c = 100;
    printf("Integer promotion (char to int): %d\n\n", c + 1);

    // Usual Arithmetic Conversions
    float f = 2.5f;
    double mixed_result = f + d; // float promoted to double
    printf("Usual arithmetic conversion (float + double): %f\n", mixed_result);

    return 0;
}
