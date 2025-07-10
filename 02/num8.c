// Take 2 integer variables x and y, print their values before and after swapping.

#include <stdio.h>
int main() {
    int x, y, temp;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    printf("Before swapping: \n");
    printf("x = %d, y = %d\n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

/* Output ----------------------

Enter value of x: 9
Enter value of y: 14
Before swapping: 
x = 9, y = 14
After swapping:
x = 14, y = 9

*/