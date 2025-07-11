// Input a double value and display it in scientific format.

#include <stdio.h>

int main() {
    double num;

    printf("Enter a double value: ");
    scanf("%lf", &num);

    printf("Scientific format: %e\n", num);
    return 0;
}

/* Output ---------------
Enter a double value: 23456.4567
Scientific format: 2.345646e+004
*/

/* %e is used for scientific (exponential) notation.
 use %E for uppercase:  2.345646E+004  */
