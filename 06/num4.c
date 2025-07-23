//  Transpose of Matrix –----------------------------

// Take a 2×2 matrix and print its transpose (swap rows and columns).

#include <stdio.h>

int main() {
    int matrix[2][2], transpose[2][2];
    int i, j;

    printf("Enter elements of 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/* Output -----------------------

Enter elements of 2x2 matrix:
matrix[0][0] = 2
matrix[0][1] = 3
matrix[1][0] = 4
matrix[1][1] = 3

Transpose of the matrix:
2       4
3       3

*/
