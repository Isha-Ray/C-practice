/* Question 5: Highest Salary (Array + Nested Structure)

Define a structure Employee with:
id, name, and a nested structure Salary having basic, hra, da

Write a program to:
Accept details of 3 employees.
Calculate total salary (basic + hra + da) and display the employee with the highest salary.*/

#include <stdio.h>
#include <string.h>

struct Salary {
    float basic;
    float hra; // House Rent Allowance
    float da; // Dearness Allowance
};

struct Employee {
    int id;
    char name[50];
    struct Salary sal;  
};

int main() {
    struct Employee e[3]; 
    float totalSalary[3], maxSalary = 0;
    int i, maxIndex = 0;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &e[i].sal.basic);

        printf("Enter HRA: ");
        scanf("%f", &e[i].sal.hra);

        printf("Enter DA: ");
        scanf("%f", &e[i].sal.da);

        
        totalSalary[i] = e[i].sal.basic + e[i].sal.hra + e[i].sal.da;

    
        if (totalSalary[i] > maxSalary) {
            maxSalary = totalSalary[i];
            maxIndex = i;
        }
    }

    
    printf("\n--- Employee with Highest Salary ---\n");
    printf("ID: %d\n", e[maxIndex].id);
    printf("Name: %s\n", e[maxIndex].name);
    printf("Basic: %.2f\n", e[maxIndex].sal.basic);
    printf("HRA: %.2f\n", e[maxIndex].sal.hra);
    printf("DA: %.2f\n", e[maxIndex].sal.da);
    printf("Total Salary: %.2f\n", maxSalary);

    return 0;
}

/*Output -------------------------------
Enter details for Employee 1
Enter ID: 2352344
Enter Name: isha
Enter Basic Salary: 89000
Enter HRA: 20000
Enter DA: 10000

Enter details for Employee 2
Enter ID: 234122
Enter Name: saina
Enter Basic Salary: 67000
Enter HRA: 20000
Enter DA: 10000

Enter details for Employee 3
Enter ID: 123445
Enter Name: afifa
Enter Basic Salary: 55000
Enter HRA: 20000
Enter DA: 10000

--- Employee with Highest Salary ---
ID: 2352344
Name: isha
Basic: 89000.00
HRA: 20000.00
DA: 10000.00
Total Salary: 119000.00
*/