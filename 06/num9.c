// Input & Display Elements

// Write a C program to input 5 integers from the user into an array and display them using a loop.

#include <stdio.h>

int main() {
    int arr[5];  
    int i;

    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe entered elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

/* Output ----------------------------
Enter 5 integers:
Element 1: 3
Element 2: 4
Element 3: 5
Element 4: 6
Element 5: 7

The entered elements are:
arr[0] = 3
arr[1] = 4
arr[2] = 5
arr[3] = 6
arr[4] = 7
*/