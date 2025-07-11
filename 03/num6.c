// Write a program to multiply two floating-point numbers.

#include <stdio.h>

int main() {
    float num1, num2, product;

    printf("Enter first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter second floating-point number: ");
    scanf("%f", &num2);
    product = num1 * num2;

    printf("Product = %.2f\n", product);
    return 0;
}

/* Output -----------------------
Enter first floating-point number: 9.6
Enter second floating-point number: 14.2
Product = 136.32
*/