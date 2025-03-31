#include <stdio.h>
#include <wchar.h>

int main() {
    char str[100] = "Here comes the sun";
    size_t str_size = sizeof(str);
    printf("sizeof(str): %zu\n",str_size);

    size_t str_len = strlen(str);
    printf("strlen(str): %lu\n",str_len);

    wchar_t str[100] = L"Here comes the sun";
    size_t str_len = wcslen(str); // str_len is 18

    return 0;
}

