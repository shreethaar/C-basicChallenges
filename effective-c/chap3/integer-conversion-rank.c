#include <stdio.h>

int main() {
    signed char sc = 100;
    short int si = 200;
    int i = 300;
    long int li = 400;
    long long int lli = 500;

    unsigned char uc = 100;
    unsigned short usi = 200;
    unsigned int ui = 300;
    unsigned long uli = 400;
    unsigned long long ulli = 500;

    // Implicit conversion examples
    printf("sc + si (signed char + short int) = %d (int type)\n", sc + si);
    printf("si + i (short int + int) = %d (int type)\n", si + i);
    printf("i + li (int + long) = %ld (long type)\n", i + li);
    printf("li + lli (long + long long) = %lld (long long type)\n", li + lli);

    printf("uc + usi (unsigned char + unsigned short) = %u (unsigned int type)\n", uc + usi);
    printf("usi + ui (unsigned short + unsigned int) = %u (unsigned int type)\n", usi + ui);
    printf("ui + uli (unsigned int + unsigned long) = %lu (unsigned long type)\n", ui + uli);
    printf("uli + ulli (unsigned long + unsigned long long) = %llu (unsigned long long type)\n", uli + ulli);

    // Mixed signed and unsigned conversions
    printf("i + ui (int + unsigned int) = %u (unsigned int type, due to promotion)\n", i + ui);
    printf("li + ui (long + unsigned int) = %lu (unsigned long type, due to promotion)\n", li + ui);
    printf("lli + uli (long long + unsigned long) = %llu (unsigned long long type, due to promotion)\n", lli + uli);

    return 0;
}

// Implicit conversion follows rank hierarchy:
// _Bool < char < short < int < long < long long
