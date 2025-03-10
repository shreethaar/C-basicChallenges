#include <stdio.h>

void printgrade(unsigned int marks) {
    if(marks>=90) {
        puts("YOUR GRADE: A");
    }
    else if (marks>=80) {
        puts("YOUR GRADE: B");
    }
    else if (marks>=70) {
        puts("YOUR GRADE: C");
    }
    else {
        puts("YOUR GRADE: FAILED");
    }
}

int main() {
    int input_marks=70;
    printgrade(input_marks);
    return 0;
}

