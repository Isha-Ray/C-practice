// Matrix Addition –----------------------------

// Take two 2×2 matrices and add them element-wise.

#include <stdio.h>
int main() {
    int A[2][2], B[2][2], sum[2][2];
    int i, j;

    printf("Enter elements of matrix A (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of matrix B (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nSum of the two matrices (A + B):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/* Output ----------------------

Enter elements of matrix A (2x2):
A[0][0] = 9
A[0][1] = 4
A[1][0] = 5
A[1][1] = 6

Enter elements of matrix B (2x2):
B[0][0] = 3
B[0][1] = 4
B[1][0] = 5
B[1][1] = 6

Sum of the two matrices (A + B):
12      8
10      12

*/