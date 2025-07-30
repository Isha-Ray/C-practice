/* Find Maximum Element in Array Using Pointer
Q:
Write a program to find the largest number in an array using a pointer (no direct indexing).

Focus: Traversing array with pointers*/

#include <stdio.h>

int main() {
    int arr[5];
    int *ptr;
    int i, max;

    ptr = arr;  

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", (ptr + i));
    }

    max = *ptr;

    for (i = 1; i < 5; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("Maximum element: %d\n", max);

    return 0;
}

/*Output ---------------------------------------------
Enter 5 integers:
2
3
5
7
9
Maximum element: 9
*/