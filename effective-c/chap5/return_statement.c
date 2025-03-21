// return_statement.c
// Demonstrating return statements in C

#include <stdio.h>
#include <stdbool.h>

// Function that returns nothing (void)
void printMessage(const char* message) {
    printf("%s\n", message);
    // Implicit return happens here
}

// Function that returns an integer
int add(int a, int b) {
    return a + b;  // Returns the sum of a and b
}

// Function with early returns
int max(int a, int b) {
    if (a > b) {
        return a;  // Early return if a is greater
    }
    return b;      // Return b otherwise
}

// Function with multiple return statements based on conditions
char gradeLetter(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

// Function that returns a boolean value
bool isPrime(int num) {
    if (num <= 1) {
        return false;  // 0 and 1 are not prime numbers
    }
    
    if (num <= 3) {
        return true;   // 2 and 3 are prime numbers
    }
    
    if (num % 2 == 0 || num % 3 == 0) {
        return false;  // Numbers divisible by 2 or 3 are not prime
    }
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

// Function that uses return for error handling
int divide(int a, int b, int* result) {
    if (b == 0) {
        return -1;  // Return error code for division by zero
    }
    
    *result = a / b;
    return 0;      // Return success code
}

int main(void) {
    // Call function with void return type
    printMessage("Hello, World!");
    
    // Call function that returns a value
    int sum = add(5, 7);
    printf("5 + 7 = %d\n", sum);
    
    // Call function with early returns
    printf("Maximum of 10 and 15: %d\n", max(10, 15));
    
    // Call function with multiple returns
    printf("Grade for score 85: %c\n", gradeLetter(85));
    
    // Call function that returns a boolean
    int testNumber = 17;
    if (isPrime(testNumber)) {
        printf("%d is a prime number\n", testNumber);
    } else {
        printf("%d is not a prime number\n", testNumber);
    }
    
    // Call function that uses return for error handling
    int divisionResult;
    int status = divide(10, 2, &divisionResult);
    if (status == 0) {
        printf("10 / 2 = %d\n", divisionResult);
    } else {
        printf("Error: Division by zero\n");
    }
    
    status = divide(10, 0, &divisionResult);
    if (status == 0) {
        printf("10 / 0 = %d\n", divisionResult);
    } else {
        printf("Error: Division by zero\n");
    }
    
    // Return from main function
    printf("Returning from main with status 0\n");
    return 0;  // Successful program execution
}
