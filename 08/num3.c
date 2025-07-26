// generate fibonacci series using recursion

// 0, 1, 1, 2, 3, 5, 8, 13, ...
// fib(0) = 0  
// fib(1) = 1  
// fib(n) = fib(n-1) + fib(n-2)   (for n > 1)

#include <stdio.h>

int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

/* Output -------------------------------
Enter number of terms: 12
Fibonacci Series: 0 1 1 2 3 5 8 13 21 34 55 89 
*/