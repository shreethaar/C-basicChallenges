// _Alignas is alignment specifier which is use to request stricter aligment (a larger power of two)

#include <stdio.h>

struct S {
    int i;double d;char c;
};

int main(void) {
    unsigned char bad_buff[sizeof(struct S)];
    _Alignof(struct S) unsigned char good_buff[sizeof(struct S)];

    struct S *bad_s_ptr = (struct S *)bad_buff; //wrong pointer alignment 
    struct S *good_s_ptr = (struct S *)good_buff; //correct pointer alignment 
}

// Notes:
// alignments are ordered from weaker to stronger (also called stricter alignmets)
// Stricter alignments have larger alignment values
