/* 11. Binary Search Logic

Works only on sorted array.

Steps:
Find middle element.
If element == key → found.
If key < mid → search left.
If key > mid → search right.
Repeat until found or low > high.

*/

/* 12. Binary Search Program

#include <stdio.h>
int main() {
    int n, i, arr[50], key, low, high, mid;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0; high = n-1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        }
        else if(key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    printf("Not Found");
    return 0;
}

*/

/* 13. While Loop

Repeats statements while condition is true.

Syntax:
while(condition) {
   // code
}

Example:
int i=1;
while(i<=5) {
    printf("%d ", i);
    i++;
}

*/