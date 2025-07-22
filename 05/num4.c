//  Find factorial of a number

#include <stdio.h>

int main() {
    int num, i;
    long long fact = 1; // long long to handle large results 

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial of negative numbers doesn't exist.");
    } else {
        for(i = 1; i <= num; i++) {
            fact = fact * i;  //fact = fact * i — repeatedly multiplies all numbers from 1 to num.
        }

        printf("Factorial of %d = %lld", num, fact); // %lld means “print a long long integer in decimal form.”
    }

    return 0;
}



/* Output ---------------
Enter a number: 9
Factorial = 362880
*/