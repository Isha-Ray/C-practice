//  Find factorial of a number

#include <stdio.h>
int main() {
    int num, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
        printf("Factorial of negative numbers doesn't exist.");
    else {
        for(i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial = %llu", fact);
    }

    return 0;
}

/* Output ---------------
Enter a number: 9
Factorial = 362880
*/