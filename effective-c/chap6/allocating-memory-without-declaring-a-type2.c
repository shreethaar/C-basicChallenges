#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char c[10];
    int i;
    double d;
} widget;

int main() {

    void *p = malloc(sizeof(widget));
    widget w = {"abc",9,3.2};
    memcpy(p,&w,sizeof(widget));
    printf("p.i=%d\n",((widget *)p)->i);

    free(p);
    return 0;
}
