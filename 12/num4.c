/* 10. fprintf() and fscanf()

fprintf() → Works like printf but writes to file.

fscanf() → Works like scanf but reads from file.

FILE *fp;
int age;
char name[20];

fp = fopen("data.txt", "w");
fprintf(fp, "Isha 20");
fclose(fp);

fp = fopen("data.txt", "r");
fscanf(fp, "%s %d", name, &age);
printf("Name: %s, Age: %d\n", name, age);
fclose(fp);

*/


/* 11. fflush()

Used to clear the output buffer of a stream and force writing immediately.

fflush(stdout);  // clears console output buffer
fflush(fp);      // clears file buffer, writes pending data

*/

/* 12. Program: Writing Employee Record in a File

#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e;

    fp = fopen("employee.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);
    printf("Enter Name: ");
    scanf("%s", e.name);
    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);

    fclose(fp);
    printf("Employee record written successfully!\n");

    return 0;
}


*/