// find factorial of a number using recursion

// n! = n × (n-1) × (n-2) × ... × 1  
// 0! = 1 (Base case)

#include <stdio.h>

int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;  // base case
    else
        return n * factorial(n - 1);  // recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}

/* Output ------------------------
Enter a number: 9
Factorial of 9 is 362880
*/
