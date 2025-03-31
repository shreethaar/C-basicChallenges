// malloc: allocates space for an object of a specified size whose initial value is indeterminate

#include <stdlib.h>
#include <stdio.h>
typedef struct {
    char c[10];
    int i;
    double d;
} widget;

widget* p = malloc(sizeof(widget));
if(p==NULL) {
    printf("malloc error\n");
}


// all memory allocations functions accept an argument of type size_t that specifies the number of bytes of memory to be allocated
// malloc function returns either a null pointer to indicate an error or a pointer to the allocated space
