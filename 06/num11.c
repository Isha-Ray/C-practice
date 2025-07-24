//  Find Maximum Element

// Write a C program to find the maximum element from an array of 6 numbers entered by the user.

#include <stdio.h>

int main() {
    int arr[6];
    int i, max;

    printf("Enter 6 integers:\n");
    for(i = 0; i < 6; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i = 1; i < 6; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("\nMaximum element in the array = %d\n", max);
    return 0;
}

/* Output ----------------------------------------
Enter 6 integers:
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
Element 5: 6
Element 6: 7

Maximum element in the array = 7
*/
