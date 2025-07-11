// Take input of a float number and print its square.

#include<stdio.h>
int main(){
    float num, square;
    printf("Enter the number: ");
    scanf("%f", &num);

    square = num * num;
    printf("The square of %.1f is : %.2f", num, square);

    return 0;
}

/* Output ----------------------- 
Enter the number: 9.5
The square of 9.5 is : 90.25
*/