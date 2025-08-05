/* Question 1: Basic Structure
Create a structure named Student with the following members:
name (string)
roll (integer)
marks (float)
Write a program to accept and display details of one student using this structure.*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf(" %[^\n]", s.name);  

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

/*Output -------------------------
Enter name: isha
Enter roll number: 44
Enter marks: 78

--- Student Details ---
Name: isha
Roll Number: 44
Marks: 78.00
*/