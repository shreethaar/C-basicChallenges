#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <stdlib.h>

int main() {
    /********************** Narrow (char) Functions **********************/
    printf("----- Narrow Character Functions (char) -----\n");
    
    // strcpy
    char src_cpy[] = "Hello";
    char dest_cpy[10];
    strcpy(dest_cpy, src_cpy);
    printf("strcpy: %s\n", dest_cpy);

    // strncpy
    char src_ncpy[] = "This is a long string";
    char dest_ncpy[15];
    strncpy(dest_ncpy, src_ncpy, sizeof(dest_ncpy) - 1);
    dest_ncpy[sizeof(dest_ncpy) - 1] = '\0';
    printf("strncpy: %s\n", dest_ncpy);

    // memcpy
    char mem_src[] = "ABCDEFGH";
    char mem_dest[5];
    memcpy(mem_dest, mem_src, 4);
    mem_dest[4] = '\0';
    printf("memcpy: %s\n", mem_dest);

    // memmove (overlapping)
    char str_mv[] = "123456789";
    memmove(str_mv + 2, str_mv, 5);
    printf("memmove: %s\n", str_mv);

    // strcat
    char dest_cat[20] = "Hello ";
    strcat(dest_cat, "World!");
    printf("strcat: %s\n", dest_cat);

    // strncat
    char dest_ncat[20] = "Hello ";
    strncat(dest_ncat, "Universe!!!", 7);
    printf("strncat: %s\n", dest_ncat);

    // strcmp
    printf("strcmp: %d\n", strcmp("apple", "apple"));   // 0 (equal)
    printf("strcmp: %d\n", strcmp("apple", "apples"));  // negative

    // strncmp
    printf("strncmp: %d\n", strncmp("apple", "apples", 5));  // 0

    // strchr
    char *found = strchr("search", 'e');
    printf("strchr: Found at position %ld\n", found - "search");

    // strcspn
    printf("strcspn: %zu\n", strcspn("test", "s"));  // 3

    // strpbrk
    printf("strpbrk: %s\n", strpbrk("find any vowel", "aeiou"));

    // strrchr
    printf("strrchr: %s\n", strrchr("reverse search", 'r'));

    // strspn
    printf("strspn: %zu\n", strspn("aaa123", "a"));  // 3

    // strstr
    printf("strstr: %s\n", strstr("find substring", "sub"));

    // strtok
    char str_tok[] = "split,this,string";
    char *token = strtok(str_tok, ",");
    printf("strtok:");
    while (token) {
        printf(" %s", token);
        token = strtok(NULL, ",");
    }
    printf("\n");

    // memchr
    char *mem_found = (char*)memchr("memory", 'm', 6);
    printf("memchr: Found at position %ld\n", mem_found - "memory");

    // strlen
    printf("strlen: %zu\n", strlen("measure"));

    // memset
    char memset_arr[10];
    memset(memset_arr, 'X', 9);
    memset_arr[9] = '\0';
    printf("memset: %s\n", memset_arr);

    /********************** Wide (wchar_t) Functions **********************/
    printf("\n----- Wide Character Functions (wchar_t) -----\n");
    
    // wcscpy
    wchar_t wsrc_cpy[] = L"World";
    wchar_t wdest_cpy[10];
    wcscpy(wdest_cpy, wsrc_cpy);
    wprintf(L"wcscpy: %ls\n", wdest_cpy);

    // wcsncpy
    wchar_t wsrc_ncpy[] = L"Wide characters example";
    wchar_t wdest_ncpy[15];
    wcsncpy(wdest_ncpy, wsrc_ncpy, sizeof(wdest_ncpy)/sizeof(wchar_t) - 1);
    wdest_ncpy[14] = L'\0';
    wprintf(L"wcsncpy: %ls\n", wdest_ncpy);

    // wmemcpy
    wchar_t wmem_src[] = L"WXYZ";
    wchar_t wmem_dest[5];
    wmemcpy(wmem_dest, wmem_src, 4);
    wmem_dest[4] = L'\0';
    wprintf(L"wmemcpy: %ls\n", wmem_dest);

    // wmemmove (overlapping)
    wchar_t wstr_mv[] = L"123456789";
    wmemmove(wstr_mv + 2, wstr_mv, 5);
    wprintf(L"wmemmove: %ls\n", wstr_mv);

    // wcscat
    wchar_t wdest_cat[20] = L"Hello ";
    wcscat(wdest_cat, L"World!");
    wprintf(L"wcscat: %ls\n", wdest_cat);

    // wcsncat
    wchar_t wdest_ncat[20] = L"Hello ";
    wcsncat(wdest_ncat, L"Universe!!!", 7);
    wprintf(L"wcsncat: %ls\n", wdest_ncat);

    // wcscmp
    wprintf(L"wcscmp: %d\n", wcscmp(L"apple", L"apple"));   // 0
    wprintf(L"wcscmp: %d\n", wcscmp(L"apple", L"apples"));  // negative

    // wcsncmp
    wprintf(L"wcsncmp: %d\n", wcsncmp(L"apple", L"apples", 5));  // 0

    // wcschr
    wchar_t *wfound = wcschr(L"search", L'e');
    wprintf(L"wcschr: Found at position %ld\n", wfound - L"search");

    // wcscspn
    wprintf(L"wcscspn: %zu\n", wcscspn(L"test", L"s"));  // 3

    // wcspbrk
    wprintf(L"wcspbrk: %ls\n", wcspbrk(L"find any vowel", L"aeiou"));

    // wcsrchr
    wprintf(L"wcsrchr: %ls\n", wcsrchr(L"reverse search", L'r'));

    // wcsspn
    wprintf(L"wcsspn: %zu\n", wcsspn(L"aaa123", L"a"));  // 3

    // wcsstr
    wprintf(L"wcsstr: %ls\n", wcsstr(L"find substring", L"sub"));

    // wcstok
    wchar_t wstr_tok[] = L"split,this,string";
    wchar_t *wtoken = wcstok(wstr_tok, L",");
    wprintf(L"wcstok:");
    while (wtoken) {
        wprintf(L" %ls", wtoken);
        wtoken = wcstok(NULL, L",");
    }
    wprintf(L"\n");

    // wmemchr
    wchar_t *wmem_found = wmemchr(L"memory", L'm', 6);
    wprintf(L"wmemchr: Found at position %ld\n", wmem_found - L"memory");

    // wcslen
    wprintf(L"wcslen: %zu\n", wcslen(L"measure"));

    // wmemset
    wchar_t wmemset_arr[10];
    wmemset(wmemset_arr, L'X', 9);
    wmemset_arr[9] = L'\0';
    wprintf(L"wmemset: %ls\n", wmemset_arr);

    /********************** Dynamic Memory Example **********************/
    printf("\n----- Dynamic Memory Allocation -----\n");
    char *dyn_str = malloc(20 * sizeof(char));
    strcpy(dyn_str, "Dynamic String");
    printf("Dynamic: %s\n", dyn_str);
    free(dyn_str);

    wchar_t *dyn_wstr = malloc(20 * sizeof(wchar_t));
    wcscpy(dyn_wstr, L"Wide Dynamic String");
    wprintf(L"Dynamic Wide: %ls\n", dyn_wstr);
    free(dyn_wstr);

    return 0;
}
