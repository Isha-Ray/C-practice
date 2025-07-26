/* Write a function to calculate the square of a number.
Input: A number from the user
Output: Square of the number using a function
*/

#include <stdio.h>

int square(int num) {
    return num * num;
}
int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = square(number);
    printf("Square of %d is: %d\n", number, result);
    return 0;
}

/* Output ----------------------------------------
Enter a number: 6
Square of 6 is: 36
*/