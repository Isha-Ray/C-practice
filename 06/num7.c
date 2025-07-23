// Count and display the total number of elements in a 2D array.

#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[10][10];  

    printf("Enter elements of the array (%dx%d):\n", rows, cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int total = rows * cols;

    printf("\nTotal number of elements in the array = %d\n", total);

    return 0;
}

/* Output -------------------------------------

Enter number of rows: 2
Enter number of columns: 3
Enter elements of the array (2x3):
arr[0][0] = 4
arr[0][1] = 3
arr[0][2] = 2
arr[1][0] = 1
arr[1][1] = 5
arr[1][2] = 6

Total number of elements in the array = 6

*/
