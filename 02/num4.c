// Declare 3 variables a, b, sum. Take input for a and b and print sum.

#include <stdio.h>
int main(){
    int a, b, sum;
    printf("Enter two digit : ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum of %d and %d is : %d\n",a, b, sum);
    return 0;
}

/* Output -------------
Enter two digit : 2
                  3
Sum of 2 and 3 is : 5 
*/