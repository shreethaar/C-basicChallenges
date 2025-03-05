#include <stdio.h>
int main() {
    char abc[] = "abc";
    char xyz[] = "xyz";
    char *p = abc;
    printf("%c",++*p);
    p=xyz;
    printf("%c",*p++);
    return 0;
}

