// Sum of Array Elements

// Write a C program to calculate and print the sum of all elements in an integer array of size 10.

#include <stdio.h>

int main() {
    int arr[10];       
    int i, sum = 0;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
        sum += arr[i];
    }

    printf("\nSum of the array elements = %d\n", sum);

    return 0;
}

/* Output ----------------------------------
Enter 10 integers:
Element 1: 3
Element 2: 4
Element 3: 1
Element 4: 2
Element 5: 5
Element 6: 6
Element 7: 7
Element 8: 8
Element 9: 6
Element 10: 5

Sum of the array elements = 47
*/