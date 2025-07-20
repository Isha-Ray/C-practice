//  Fibonacci series program

#include <stdio.h>
int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

/* Output ---------------
Enter the number of terms: 9
Fibonacci Series: 0 1 1 2 3 5 8 13 21 
*/
