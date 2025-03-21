#include <stdio.h>

int main(void) {
    int age=17;
    float temperature = 101.5;
    if(age>=18) {
        printf("You are an adult.\n");
    }

    if(age>=18) {
        printf("You are eligible to vote.\n");
    }
    else {
        printf("You are not eligible to vote yet.\n");
        printf("You need to wait %d more years.\n",18-age);
    }

    if(temperature<98.0) {
        printf("Body temperature is below normal.\n");
    }
    else if(temperature<=99.0){
        printf("Body temperature is normal.\n");
    }
    else if(temperature <= 100.5) {
        printf("Mild fever detected.\n");
    }

    else {
        printf("High fever detected. Please consult a doctor.\n");
    }

    if (age<18) {
        printf("You are a minor.\n");
        if (age>=13) {
            printf("You are a teenager.\n");
        }
        else {
            printf("You are a child.\n");
        }

    }

    printf("You are %s.\n",(age>=18) ? "an adult" : "a minor");
    return 0;
}

