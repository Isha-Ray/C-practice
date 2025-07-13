/* Ternary Operator ---------------------------------------------
The ternary operator in C is a shorthand for if-else.
It is also called the conditional operator.

syntax -------------------------------------------
condition ? expression_if_true : expression_if_false; 

*/

// Print whether the number is even or odd.

#include<stdio.h>
int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}

/* Output ---> Enter a number: 9
               Odd 
*/