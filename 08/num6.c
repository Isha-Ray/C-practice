/*Reverse a Number
Write a recursive function to reverse a number.
Example: Input: 1234 → Output: 4321*/

#include <stdio.h>

int reverseNumber(int num, int rev) {
    if (num == 0)
        return rev;
    else
        return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main() {
    int num, reversed;
    printf("Enter a number: ");
    scanf("%d", &num);

    reversed = reverseNumber(num, 0);

    printf("Reversed Number: %d\n", reversed);
    return 0;
}

/*Output--------------------
Enter a number: 6543889
Reversed Number: 9883456
*/