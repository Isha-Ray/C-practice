/*Swap Two Numbers Using Pointers
Q:
Create a function that swaps two numbers using pointers.

void swap(int *a, int *b);

Focus: Passing pointers to functions and modifying values*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp;

    temp = *a;   
    *a = *b;     
    *b = temp;   
}

int main() {
    int x = 5, y = 10;

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

/*Output ----------------------------
Before swapping:
x = 5, y = 10
After swapping:
x = 10, y = 5
*/