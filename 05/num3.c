// Check whether a number is prime or not.

#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
        isPrime = 0;
    else {
        for(i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;  // break; ← exit the loop immediately
            }
        }
    }

    if(isPrime)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);

    return 0;
}


/* Output ---------------
Enter a number: 9
9 is not a prime number.
*/

// Example of prime numbers: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, ...
