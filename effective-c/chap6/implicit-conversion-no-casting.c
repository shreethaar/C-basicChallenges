#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char c[10];
    int i;
    double d;
} widget;

int main() {
    widget* p = malloc(sizeof(widget)); // no explicit cast
    if(p==NULL) {
        perror("memory allocation failed\n");
        return 1;
    }

    p->i=42;
    printf("p->i = %d\n",p->i);
    free(p);
    return 0;
}

// why is this fine ?
// in c, void* automatically converts to any other pointer type without any expicit cast
