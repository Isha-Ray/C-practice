// Write a program that takes your roll number (int) and grade (char) as input.

#include <stdio.h>

int main() {
    int roll;
    char grade;

    printf("Enter your roll number: ");
    scanf("%d", &roll);

    getchar();

    printf("Enter your grade: ");
    scanf("%c", &grade);

    printf("Roll Number: %d\n", roll);
    printf("Grade: %c\n", grade);

    return 0;
}

/* Output ----------
Enter your roll number: 54
Enter your grade: O
Roll Number: 54
Grade: O
*/
