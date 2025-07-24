// Count Even and Odd Elements

// Write a C program to count how many even and odd numbers are present in a given array of size 8.

#include <stdio.h>

int main() {
    int arr[8];
    int i, even = 0, odd = 0;

    printf("Enter 8 integers:\n");
    for(i = 0; i < 8; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 8; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nTotal even numbers = %d\n", even);
    printf("Total odd numbers  = %d\n", odd);

    return 0;
}

/* Output ----------------------------------------
Enter 8 integers:
Element 1: 32
Element 2: 44
Element 3: 33
Element 4: 55
Element 5: 76
Element 6: 87
Element 7: 34
Element 8: 77

Total even numbers = 4
Total odd numbers  = 4
*/
