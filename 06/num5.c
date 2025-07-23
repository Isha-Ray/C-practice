// Input a 2×3 and 3×2 matrix, multiply them, and store the result.

#include <stdio.h>

int main() {
    int A[2][3], B[3][2], C[2][2];
    int i, j, k;

    printf("Enter elements of Matrix A (2x3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B (3x2):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            C[i][j] = 0;
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    printf("\nResultant Matrix C (2x2) = A * B:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/* Output ------------------------

Enter elements of Matrix A (2x3):
A[0][0] = 1
A[0][1] = 2
A[0][2] = 3
A[1][0] = 4
A[1][1] = 5
A[1][2] = 6

Enter elements of Matrix B (3x2):
B[0][0] = 1
B[0][1] = 3
B[1][0] = 5
B[1][1] = 7
B[2][0] = 9
B[2][1] = 8

Resultant Matrix C (2x2) = A * B:
38      41
83      95

*/