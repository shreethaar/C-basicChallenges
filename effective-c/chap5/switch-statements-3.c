#include <stdio.h>

int main(void) {
    char grade = 'B';
    int day = 3;

    printf("Student performance: ");
    switch(grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good"\n");
            break;
        case 'C':
            printf("Satisfactory\n");
            break;
        case 'D':
            printf("Needs improvement\n");
            break;
        case 'F':
            printf("Failing\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }

    printf("Today is ");
    switch(day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
        case 7:
            printf("Weekend");
            break;
        default:
            printf("Invalid day");
    }
    printf("\n");

    int month=7;
    printf("Days in month: ");
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n");
            break;
        case 4: case 6: case 9: case 11: 
            printf("30 days\n");
        case 2:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month\n");
    }
    return 0;
}

