// write a program to check if the year is a leap year or not

#include <stdio.h>

void leap_year(int year) {
    if(year%400==0) {
        printf("%d is a leap year.\n",year);
    }
    else if(year%100==0) {
        printf("%d is not a leap year.\n",year);
    }
    else if(year%4==0) {
        printf("%d is a leap year.\n",year);
    }
    else {
        printf("%d is not a leap year.\n",year);
    }

}

int main() { 
    leap_year(2000);
    leap_year(2002);
    leap_year(2008);
    return 0;
}

    
