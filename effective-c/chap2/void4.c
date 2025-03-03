#include <stdio.h>

void printValue(void *data,char type) {
    if(type=='i') {
        printf("Integer: %d\n",*(int *)data);
    }
    else if(type=='c'){
        printf("Character: %c\n",*(char *)data);
    }
}



int main() {
    int num=100;
    char ch='Z';
    printValue(&num,'i');
    printValue(&ch,'c');
    return 0;

}
