// Write a program to print the size of int, float, char, and double using sizeof().

#include <stdio.h>
int main() {
    int a;
    float b;
    char c;
    double d;

    printf("Size of int: %lu bytes\n", sizeof(a));
    printf("Size of float: %lu bytes\n", sizeof(b));
    printf("Size of char: %lu byte\n", sizeof(c));
    printf("Size of double: %lu bytes\n", sizeof(d));

    return 0;
}

/* Output --------------------

Size of int: 4 bytes
Size of float: 4 bytes
Size of char: 1 byte
Size of double: 8 bytes
*/

/* %lu means we're printing a positive whole number that represents memory size (like 4, 8, etc.)
 in bytes. */