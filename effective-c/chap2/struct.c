#include <stdio.h>
#include <string.h>
struct sigrecord {
    int signum;
    char signame[20];
    char sigdesc[100];
} sigline,*sigline_p;

int main() {
    // referecing members oof an object of the structure type by using the structure member .
    sigline.signum=5;
    strcpy(sigline.signame,"SIGINT");
    strcpy(sigline.sigdesc,"Interrupt from keyboard");

    sigline_p=&sigline;

    sigline_p->signum=5;
    strcpy(sigline_p->signame,"SIGINT");
    strcpy(sigline_p->sigdesc,"Interrupt from keyboard");
    
    return 0;
}


// the structure has three member objects:
// 1. signum is an object of type int
// 2. signame is an array of type char consisting of 20 elements 
// 3. sigdesc is an array of type char consisting of 100 elements 
//
// Structures are useful for declaring collections of related objects and may be used to represent things such as date, customer and personal record 
//
// Useful for grouping objects that are frequetnly passed together as arguments of a function 
