// Declare variables of all basic types (int, float, char, double) and print them.

#include <stdio.h>
int main() {
    int age = 20;         // int (Integer)
    float marks = 89.5;     // Float (decimal) 
    char grade = 'E';     // char (Character)
    double percentile = 98.678; // double(more precise)

    printf("Age: %d\n", age);
    printf("Marks: %.1f\n", marks);
    printf("Grade: %c\n", grade);
    printf("Percentile: %.10f\n", percentile);

    return 0;
}            

/* Output --------------------------------
    Age: 20
    Marks: 89.5
    Grade: E
    Percentile: 98.6780000000                           */






















