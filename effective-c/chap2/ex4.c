// Modify the previous program so that:
//
//  1.  Each function takes an integer argument and prints a message along with the received number.
//  2.  The function pointer array should store functions that accept an integer parameter.
//  3.  The user enters an index (0-2) and a number, and the selected function should be called with that number.
//


#include <stdio.h>

int func1(int x);
int func2(int x);
int func3(int x);

int main() {
    int (*func[3])(int) = {func1,func2,func3};
    int index,arg;
    printf("Enter an index: ");
    scanf("%d",&index);
    
    if (index<0 || index>2) {
        printf("Invalid index\n");
        return 1;
    }

    printf("Enter an integer to be pass an argument ");
    scanf("%d",&arg);
        
    int result=func[index](arg);
    printf("Result: %d\n",result);

    return 0;
}

int func1(int x) {
    return x+x;
}

int func2(int x) {
    return x+x+x;
}

int func3(int x) {
    return x+x+x+x;
}

