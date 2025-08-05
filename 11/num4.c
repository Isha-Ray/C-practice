/* Question 3: Nesting of Structures

Define two structures:
Date with members: day, month, year
Employee with members: id, name, and joiningDate (which is of type Date)
Write a program to accept and display details of an employee using nested structures.*/

#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);  

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Joining Date: %02d-%02d-%d\n",
           emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}

/*Output-------------------------
Enter Employee ID: 345672
Enter Employee Name: isha
Enter Joining Date (dd mm yyyy): 13 08 2024

--- Employee Details ---
ID: 345672
Name: isha
Joining Date: 13-08-2024
*/