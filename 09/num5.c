/*Access Array Elements Using Pointers
Q:
Write a program to input 5 integers in an array and print them using a pointer (not array indexing).

Focus: Pointer arithmetic (*(ptr + i))*/

#include <stdio.h>

int main() {
    int arr[5];
    int *ptr;
    int i;

    ptr = arr;  

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", (ptr + i));  
    }

    printf("You entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  
    }

    return 0;
}

/*Output --------------------------------------------
Enter 5 integers:
1
2
3
5
6
You entered:
1 2 3 5 6 
*/
