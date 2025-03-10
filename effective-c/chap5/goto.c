#include <stdio.h>

int main() {
    int i=0;
    while(i<10) {
        if(i==5) {
            goto end_loop;
        }
        printf("%d\n",i);
        i++;
    }
end_loop:
    printf("Loop ended permaturely.\n");
    return 0;
}

