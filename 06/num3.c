// Matrix Addition

//Add two 2D arrays of size 2×3 and display the result.

#include <stdio.h>

int main() {
    int A[2][3], B[2][3], sum[2][3];
    int i, j;

    printf("Enter elements of Array A (2x3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Array B (2x3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }


    printf("\nSum of the two arrays (A + B):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/* Output ---------------------------

Enter elements of Array A (2x3):
A[0][0] = 2
A[0][1] = 3
A[0][2] = 4
A[1][0] = 5
A[1][1] = 6
A[1][2] = 7

Enter elements of Array B (2x3):
B[0][0] = 4
B[0][1] = 6
B[0][2] = 3
B[1][0] = 2
B[1][1] = 9
B[1][2] = 5

Sum of the two arrays (A + B):
6       9       7
7       15      12

*/