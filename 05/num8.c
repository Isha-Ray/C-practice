// Print a Square of Stars
// Input: n = 4

#include <stdio.h>

int main() {
    int n = 4;  
    int i, j;

    for(i = 1; i <= n; i++) {         // Outer loop → rows
        for(j = 1; j <= n; j++) {     // Inner loop → columns
            printf("* ");
        }
        printf("\n");  
    }

    return 0;
}


/* Output -------------
* * * * 
* * * * 
* * * * 
* * * * 
*/
