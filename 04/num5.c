// Given number is positive or negative.

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    (num >= 0) ? printf("Positive\n") : printf("Negative\n");
    return 0;
}

/* Output ---------------- 

Enter a number: 9
Positive

Enter a number: 0
Positive

Enter a number: -2
Negative

*/