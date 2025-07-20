//  Sum of digits of a number.

#include <stdio.h>
int main() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num != 0) {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);
    return 0;
}

/* Output --------------
Enter a number: 765
Sum of digits = 18
*/

