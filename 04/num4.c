// Greatest number among three numbers.

#include<stdio.h>
int main(){
    int a,b,c,max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The Greatest number is: %d", max);
    return 0;
}

/* Output -------------------------

Enter three numbers: 5 9 7
The Greatest number is: 9

*/

/* Meaning of max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

(a > b) → Is a greater than b?

If yes ----------------------------

Then check: (a > c)
If yes → a is the greatest
If no → c is the greatest

If no ---------------------------

Then check: (b > c)
If yes → b is the greatest
If no → c is the greatest

*/



