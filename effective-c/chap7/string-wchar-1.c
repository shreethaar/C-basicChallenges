#include <stddef.h>
#include <stdio.h>
#include <string.h> // for narrow string functions
#include <wchar.h>  // for wide character functions
#include <stdlib.h> // for malloc and free
#include <locale.h> // for setlocale


// Helper function to print byte values of a string
void print_string_bytes(const char* str, size_t len) {
    printf("Bytes: ");
    for (size_t i = 0; i < len; i++) {
        printf("%02X ", (unsigned char)str[i]);
    }
    printf("\n");
}

// Helper function to print wide character byte values
void print_wstring_bytes(const wchar_t* wstr, size_t len) {
    printf("Bytes: ");
    for (size_t i = 0; i < len; i++) {
        // Print each wchar_t as bytes
        unsigned char* bytes = (unsigned char*)&wstr[i];
        for (size_t j = 0; j < sizeof(wchar_t); j++) {
            printf("%02X ", bytes[j]);
        }
        printf("| ");
    }
    printf("\n");
}

int main() {
    // set locale to support wide characters
    setlocale(LC_ALL, "");

    printf("===== STANDARD STRING FUNCTIONS (string.h) ====\n\n");

    // 1. strcpy and strncpy 
    printf("---- strcpy and strncpy ----\n");
    char src[] = "Hello, world!";
    char dest1[20];
    char dest2[10]; // Intentionally smaller than source

    strcpy(dest1,src);
    printf("strcpy result: %s\n", dest1);
    
    strncpy(dest2,src,sizeof(dest2)-1);
    dest2[sizeof(dest2)-1]='\0'; //ensure null termination
    printf("strncpy result (limited to %zu bytes): %s\n",sizeof(dest2)-1,dest2);


    // 2. strlen
    printf("\n----strlen----\n");
    size_t len = strlen(src);
    printf("Length of \"%s\": %zu bytes): %s\n",sizeof(dest2)-1,dest2);

    // 3. strcat and strncat
    printf("\n----strcat and strncat----\n");
    char base1[30]="Base: ");
    char base2[15]="Base: ");

    strcat(base1,src);
    printf("strcat result: %s\n",base1);

    strncat(base2,src,5); //append only 5 chars 
    printf("strncat result (limited to 5 chars): %s\n",base2);

    // 4. memcpy and memmove
    printf("\n----memcpy and memmove----\n");
    char memstr[]="ABCDEFGHIJKLMN";
    char memcpy_dest[15];

    memcpy(memcpy_dest,memstr,sizeof(memstr));
    printf("memcpy result: %s\n",memcpy_dest);

    // Demonstrate memmove with overlapping memory
    char memmove_str[] = "ABCDEFGHIJKLMN";
    printf("Before memmove: %s\n",memmove_str);
    // Move "DEFG" to position starting at "BCDE"
    memmove(&memmove_str[1],&memmove_str[3],4);
    printf("After memmove: %s\n",memmove_str);

    // 5. strcmp
    printf("\n----strcmp----\n");
    char str1[] = "apple";
    char str2[] = "banana";
    char str3[] = "apple";

    printf("strcmp(%s, %s): %d\n",str1,str2,strcmp(str1,str2));
    printf("strcmp(%s, %s): %d\n", str1,str3,strcmp(str1,str3));

    printf("==== STANDARD STRING FUNCTIONS (string.h) ====\n\n");
    
    // 1. strcpy and strncpy
    printf("--- strcpy and strncpy ---\n");
    char src[] = "Hello, World!";
    char dest1[20];
    char dest2[10]; // Intentionally smaller than source
    
    strcpy(dest1, src);
    printf("strcpy result: %s\n", dest1);
    
    strncpy(dest2, src, sizeof(dest2) - 1);
    dest2[sizeof(dest2) - 1] = '\0'; // Ensure null termination
    printf("strncpy result (limited to %zu bytes): %s\n", sizeof(dest2) - 1, dest2);
    
    // 2. strlen
    printf("\n--- strlen ---\n");
    size_t len = strlen(src);
    printf("Length of \"%s\": %zu\n", src, len);
    
    // 3. strcat and strncat
    printf("\n--- strcat and strncat ---\n");
    char base1[30] = "Base: ";
    char base2[15] = "Base: ";
    
    strcat(base1, src);
    printf("strcat result: %s\n", base1);
    
    strncat(base2, src, 5); // Append only 5 chars
    printf("strncat result (limited to 5 chars): %s\n", base2);
    
    // 4. memcpy and memmove
    printf("\n--- memcpy and memmove ---\n");
    char memstr[] = "ABCDEFGHIJKLMN";
    char memcpy_dest[15];
    
    memcpy(memcpy_dest, memstr, sizeof(memstr));
    printf("memcpy result: %s\n", memcpy_dest);
    
    // Demonstrate memmove with overlapping memory
    char memmove_str[] = "ABCDEFGHIJKLMN";
    printf("Before memmove: %s\n", memmove_str);
    // Move "DEFG" to position starting at "BCDE"
    memmove(&memmove_str[1], &memmove_str[3], 4);
    printf("After memmove: %s\n", memmove_str);
    
    // 5. strcmp
    printf("\n--- strcmp ---\n");
    char str1[] = "apple";
    char str2[] = "banana";
    char str3[] = "apple";
    
    printf("strcmp(%s, %s): %d\n", str1, str2, strcmp(str1, str2));
    printf("strcmp(%s, %s): %d\n", str1, str3, strcmp(str1, str3));
    
    printf("\n\n==== WIDE CHARACTER FUNCTIONS (wchar.h) ====\n\n");
    
    // 1. wcscpy and wcsncpy
    printf("--- wcscpy and wcsncpy ---\n");
    wchar_t wsrc[] = L"Hello, World! 你好, 世界!";
    wchar_t wdest1[30];
    wchar_t wdest2[10]; // Intentionally smaller than source
    
    wcscpy(wdest1, wsrc);
    wprintf(L"wcscpy result: %ls\n", wdest1);
    
    wcsncpy(wdest2, wsrc, sizeof(wdest2)/sizeof(wchar_t) - 1);
    wdest2[sizeof(wdest2)/sizeof(wchar_t) - 1] = L'\0'; // Ensure null termination
    wprintf(L"wcsncpy result (limited to %zu wide chars): %ls\n", 
            sizeof(wdest2)/sizeof(wchar_t) - 1, wdest2);
    
    // 2. wcslen
    printf("\n--- wcslen ---\n");
    size_t wlen = wcslen(wsrc);
    wprintf(L"Length of \"%ls\": %zu wide characters\n", wsrc, wlen);
    
    // 3. wcscat and wcsncat
    printf("\n--- wcscat and wcsncat ---\n");
    wchar_t wbase1[50] = L"Base: ";
    wchar_t wbase2[20] = L"Base: ";
    
    wcscat(wbase1, wsrc);
    wprintf(L"wcscat result: %ls\n", wbase1);
    
    wcsncat(wbase2, wsrc, 5); // Append only 5 wide chars
    wprintf(L"wcsncat result (limited to 5 wide chars): %ls\n", wbase2);
    
    // 4. wmemcpy and wmemmove
    printf("\n--- wmemcpy and wmemmove ---\n");
    wchar_t wmemstr[] = L"ABCDEFGHIJKLMN";
    wchar_t wmemcpy_dest[15];
    
    wmemcpy(wmemcpy_dest, wmemstr, wcslen(wmemstr) + 1); // +1 for null terminator
    wprintf(L"wmemcpy result: %ls\n", wmemcpy_dest);
    
    // Demonstrate wmemmove with overlapping memory
    wchar_t wmemmove_str[] = L"ABCDEFGHIJKLMN";
    wprintf(L"Before wmemmove: %ls\n", wmemmove_str);
    // Move "DEFG" to position starting at "BCDE"
    wmemmove(&wmemmove_str[1], &wmemmove_str[3], 4);
    wprintf(L"After wmemmove: %ls\n", wmemmove_str);
    
    // 5. wcscmp
    printf("\n--- wcscmp ---\n");
    wchar_t wstr1[] = L"apple";
    wchar_t wstr2[] = L"banana";
    wchar_t wstr3[] = L"apple";
    
    printf("wcscmp(%ls, %ls): %d\n", wstr1, wstr2, wcscmp(wstr1, wstr2));
    printf("wcscmp(%ls, %ls): %d\n", wstr1, wstr3, wcscmp(wstr1, wstr3));
    
    // 6. Dynamic memory allocation with strings
    printf("\n--- Dynamic memory allocation ---\n");
    
    // Standard string with malloc
    const char* dynamic_src = "Dynamically allocated string";
    size_t src_size = strlen(dynamic_src) + 1; // +1 for null terminator
    char* dynamic_dest = (char*)malloc(src_size);
    
    if (dynamic_dest) {
        strcpy(dynamic_dest, dynamic_src);
        printf("Dynamic string: %s\n", dynamic_dest);
        printf("Length: %zu\n", strlen(dynamic_dest));
        print_string_bytes(dynamic_dest, strlen(dynamic_dest) + 1);
        free(dynamic_dest);
    }
    
    // Wide string with malloc
    const wchar_t* dynamic_wsrc = L"Dynamically allocated wide string 世界";
    size_t wsrc_size = (wcslen(dynamic_wsrc) + 1) * sizeof(wchar_t);
    wchar_t* dynamic_wdest = (wchar_t*)malloc(wsrc_size);
    
    if (dynamic_wdest) {
        wcscpy(dynamic_wdest, dynamic_wsrc);
        wprintf(L"Dynamic wide string: %ls\n", dynamic_wdest);
        printf("Length: %zu wide characters\n", wcslen(dynamic_wdest));
        print_wstring_bytes(dynamic_wdest, wcslen(dynamic_wdest) + 1);
        free(dynamic_wdest);
    }
    
    return 0;
}


