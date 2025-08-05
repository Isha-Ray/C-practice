/*Question 4: Average Marks Using Array of Structures

Create a structure Student with name, roll, and marks in 3 subjects (use an array inside the structure for marks).
Write a program to:
Accept details of 3 students.
Calculate and display average marks of each student.*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks[3]; 
};

int main() {
    struct Student s[3];  
    int i, j;
    float sum, avg;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks for 3 subjects:\n");
        for (j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
        }
    }

    printf("\n--- Average Marks of Each Student ---\n");
    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            sum += s[i].marks[j];
        }
        avg = sum / 3.0;

        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Average Marks: %.2f\n", avg);
    }

    return 0;
}

/*Output -------------------------------
Enter details for Student 1
Enter name: isha
Enter roll number: 44
Enter marks for 3 subjects:
Subject 1: 78
Subject 2: 87
Subject 3: 88

Enter details for Student 2
Enter name: saina
Enter roll number: 43
Enter marks for 3 subjects:
Subject 1: 67
Subject 2: 55
Subject 3: 66

Enter details for Student 3
Enter name: afifa
Enter roll number: 22
Enter marks for 3 subjects:
Subject 1: 65
Subject 2: 44
Subject 3: 56

--- Average Marks of Each Student ----------------------

Student 1:
Name: isha
Roll Number: 44
Average Marks: 84.33

Student 2:
Name: saina
Roll Number: 43
Average Marks: 62.67

Student 3:
Name: afifa
Roll Number: 22
Average Marks: 55.00
*/