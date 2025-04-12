#include <stdio.h> // angle brackests on the system include path, specified using the -isystem flag
#include "mathutils.h" // quoted strings on the quoted included path, specified using the -iquote flag

int main() {
    printf("Sum :%d\n",add(5,4));
    printf("Minus: %d\n",subtract(10,5));
    return 0;    
}

