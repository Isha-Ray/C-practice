/*Sum of Natural Numbers
Write a recursive function to calculate the sum of first n natural numbers.
Example: sum(4) = 1 + 2 + 3 + 4 = 10*/

#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0; 
    else
        return n + sum(n - 1); 
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of first %d natural numbers is: %d\n", num, sum(num));
    return 0;
}

/* Output --------------------------------------------
Enter a number: 10
Sum of first 10 natural numbers is: 55
*/