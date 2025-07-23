// Print only the diagonal elements of a 3x3 matrix.

#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMain diagonal elements:\n");
    for(i = 0; i < 3; i++) {
        printf("%d ", matrix[i][i]);
    }

    printf("\n\nSecondary diagonal elements:\n");
    for(i = 0; i < 3; i++) {
        printf("%d ", matrix[i][2 - i]);
    }

    return 0;
}

/* Output -----------------

Enter elements of 3x3 matrix:
matrix[0][0] = 1
matrix[0][1] = 2
matrix[0][2] = 3
matrix[1][0] = 4
matrix[1][1] = 5
matrix[1][2] = 4
matrix[2][0] = 3
matrix[2][1] = 2
matrix[2][2] = 1

Main diagonal elements:
1 5 1

Secondary diagonal elements:
3 5 3

*/
