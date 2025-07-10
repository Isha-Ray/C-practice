// Create a program to demonstrate local and global variables.

#include <stdio.h>

int globalVar = 100; // Global

void show() {
    int localVar = 50; // Local variable in show

    printf("Inside show() function\n");
    printf("Local variable: %d\n", localVar);
    printf("Global variable: %d\n", globalVar);
}

int main() {
    int localMain = 25;  // Local variable in main

    printf("Inside main() function\n");
    printf("Local variable in main: %d\n", localMain);
    printf("Global variable: %d\n", globalVar);

    show();

    return 0;
}

/* Output ----------------------
Inside main() function
Local variable in main: 25
Global variable: 100
Inside show() function
Local variable: 50
Global variable: 100      */

//Pehle main wala function chalega uske baad void wala.
//globalVar is accessible in all functions (global scope).
//localVar and localMain are accessible only in their own functions.


