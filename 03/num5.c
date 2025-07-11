// Print the maximum and minimum values of int using limits.h library.

#include <stdio.h>
#include <limits.h>  // Header 

int main() {
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of int: %d\n", INT_MAX);
    return 0;
}

/* Output -------------
Minimum value of int: -2147483648
Maximum value of int: 2147483647
*/

// limits.h contains the limits for integer types in C.