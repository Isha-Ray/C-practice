/*Question 2: Array of Structures

Using the Student structure from Question 1, write a program to:
Accept and display the details of 5 students using an array of structures.*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];  

    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);  

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}

/*Output ----------------------
Enter details for Student 1
Enter name: isha
Enter roll number: 44
Enter marks: 89

Enter details for Student 2
Enter name: afifa
Enter roll number: 25
Enter marks: 67

Enter details for Student 3
Enter name: saina
Enter roll number: 27
Enter marks: 56

Enter details for Student 4
Enter name: sultan
Enter roll number: 34
Enter marks: 55

Enter details for Student 5
Enter name: fufi
Enter roll number: 45
Enter marks: 66

--- Student Details ---

Student 1
Name: isha
Roll Number: 44
Marks: 89.00

Student 2
Name: afifa
Roll Number: 25
Marks: 67.00

Student 3
Name: saina
Roll Number: 27
Marks: 56.00

Student 4
Name: sultan
Roll Number: 34
Marks: 55.00

Student 5
Name: fufi
Roll Number: 45
Marks: 66.00
*/