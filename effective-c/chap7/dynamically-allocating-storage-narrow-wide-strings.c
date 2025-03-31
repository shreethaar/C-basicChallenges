#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //narrow strings
    char str1[] = "Here comes the sun";
    char *str2 = malloc(strlen(str1)+1);
    
    Characters and Strings 137
    // wide strings
    wchar_t wstr1[] = L"Here comes the sun";
    wchar_t *wstr2 = malloc((wcslen(wstr1) + 1) * sizeof(wchar_t));
    /*
    char* strtest = "test";
    printf("%s",strtest);
    */
    return 0;

}

