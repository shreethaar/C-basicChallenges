#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    //narrow character types
    char normalChar = 'A';          // typically 1 byte, can be signed or unsigned  
    signed char signedChar = -10;   // explicitly signed, stores negative values 
    unsigned char unsignedChar = 250;// explicitly unsigned, only positive values
    
    //wide character type
    setlocale(LC_ALL, "");            // enable wide character support 
    wchar_t wideChar = L'Ω';

    //display the sizes
    printf("Size of char: %zu bytes\n",sizeof(char));
    printf("Size of signed char: %zu bytes\n",sizeof(signed char));
    printf("Size of unsigned char: %zu bytes\n",sizeof(unsigned char));
    printf("Size of wchar_t: %zu bytes\n",sizeof(wchar_t));

    //display values 
    printf("normalChar: %c (ASCII: %d)\n",normalChar,normalChar);
    printf("signedChar: %d\n", signedChar);
    printf("unsignedChar: %d\n",unsignedChar);
    wprintf(L"widechar: %lc (Unicode: U+%X)\n",wideChar,wideChar);

    return 0;
}
