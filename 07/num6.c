/* Create a function to find the largest of two numbers.

Input: Two numbers
Output: The greater number
*/

#include <stdio.h>

int findLargest(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = findLargest(num1, num2);
    printf("The larger number is: %d\n", max);
    return 0;
}

/* Output --------------------------------------------
Enter two numbers: 99 67
The larger number is: 99
*/
