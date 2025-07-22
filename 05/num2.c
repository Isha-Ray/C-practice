//  Sum of digits of a number.

#include <stdio.h>
int main() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num != 0) {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);
    return 0;
}

/* Output --------------
Enter a number: 765
Sum of digits = 18
*/

/* digit = num % 10; Extracts the last digit of the number.

Example:
If num = 472 → 472 % 10 = 2
So digit = 2

sum += digit;  Adds the extracted digit to the total sum.
It keeps adding each digit to sum as the loop runs.

Example : If sum = 0 and digit = 2 → sum = 0 + 2 = 2

num = num / 10;  Removes the last digit from the number.

Example:
If num = 472 → 472 / 10 = 47
Now num = 47 for the next loop.

Step	        num	            digit (%10)	            sum	                num after /10

1	            472	                2	            0 + 2 = 2	                    47
2	            47	                7	            2 + 7 = 9	                    4
3	            4	                4	            9 + 4 = 13	                    0

So the final answer is 13.

*/
