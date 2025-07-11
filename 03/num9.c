// Write a program to input a float and an int, then display both.

#include<stdio.h>
int main(){
    int i;
    float f;
    printf("Enter a integer number: ");
    scanf("%d",&i);
    printf("Enter a float number: ");
    scanf("%f",&f);

    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    return 0;
}


/* Output --------------------
Enter a integer number: 9
Enter a float number: 9.6
Integer: 9
Float: 9.60
*/
