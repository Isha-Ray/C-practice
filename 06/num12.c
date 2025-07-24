//  Reverse Array

// Write a program that takes 7 elements in an array and prints them in reverse order.

#include <stdio.h>

int main() {
    int arr[7];
    int i;

    printf("Enter 7 integers:\n");
    for(i = 0; i < 7; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nElements in reverse order:\n");
    for(i = 6; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/* Output ----------------------
Enter 7 integers:
Element 1: 1
Element 2: 3
Element 3: 4
Element 4: 6
Element 5: 7
Element 6: 4
Element 7: 3

Elements in reverse order:
3 4 7 6 4 3 1

*/