// Write a program to swap two variables (using a third variable).

#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;

    printf("Before swapping: \n");
    printf("a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: \n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

/* Output ------------
    Before swapping: 
    a = 5, b = 10
    After swapping:    
    a = 10, b = 5   
*/


/* temp is temporary variable. */