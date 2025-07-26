/* Create a function that checks if a number is even or odd.

Input: Integer from user
Output: "Even" or "Odd" (printed from the main function)
*/

#include <stdio.h>
int isEven(int num) {
    if (num % 2 == 0)
        return 1;  // Even
    else
        return 0;  // Odd
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isEven(number))
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}

/* Output ------------------------
Enter an integer: 5
Odd
*/