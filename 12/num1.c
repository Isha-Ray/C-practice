/* What is Union?

A union in C is a user-defined data type (like structure) that allows storing different data types in the same memory location.
But unlike a structure, all members of a union share the same memory location, and the size of the union is determined by its largest member.

Syntax -----------------------------------------------
union UnionName {
    data_type member1;
    data_type member2;
    ...
};

Example ----------------------------------------------------------
#include <stdio.h>
union Data {
    int i;
    float f;
    char ch;
};

int main() {
    union Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 20.5;   // overwrites previous data
    printf("Float: %.2f\n", d.f);

    d.ch = 'A';   // overwrites previous data
    printf("Char: %c\n", d.ch);

    return 0;
}


Output ----------------------------------------
Integer: 10
Float: 20.50
Char: A

*/


/* Structure in C -----------------------------------------------
A structure in C is a user-defined data type that groups different data types under a single name.
Each member has its own separate memory location, so all members can hold values at the same time.

Syntax ----------------------------------------------------
struct StructName {
    data_type member1;
    data_type member2;
    ...
};

Example -----------------------------------------------
#include <stdio.h>
struct Student {
    int roll;
    float marks;
    char grade;
};

int main() {
    struct Student s1 = {101, 89.5, 'A'};

    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);
    printf("Grade: %c\n", s1.grade);

    return 0;
}


Output ---------------------------
Roll: 101
Marks: 89.50
Grade: A

*/
