/* Write a function to calculate the factorial of a number.

Input: Integer n
Output: n! using function and return the result
*/

#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, result;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(num);  
        printf("Factorial of %d is: %d\n", num, result);
    }
    return 0;
}

/* Output ------------------------------------
Enter a positive integer: 9
Factorial of 9 is: 362880
*/
