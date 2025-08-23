/* What is a structure in C? How is it different from an array?
----->A structure in C is a user-defined data type that allows you to combine variables of different data types under a single name.

Syntax ------------------------------------------------------------------------------------------


struct Student {
    int rollNo;
    char name[50];
    float marks;
};

This defines a new data type struct Student that groups:
an int (rollNo)
a char array (name)
a float (marks)

Difference Between structure and array -----

Structure = Box with different types of items (e.g., ID card with name, ID number, photo)
Array = List of same type items (e.g., list of roll numbers)

*/

/* How do you declare and use an array of structures in C?
----> An array of structures is used when you want to store multiple records, where each record is a structure (like multiple students, books, employees, etc.).

Declare the Structure -------------------------------------------------------------------
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

Declare an Array of Structures--------------------------------------------------------------------
struct Student s[3];  // Array to store 3 students

Access and Assign Values------------------------------------------------------------------------------------
strcpy(s[0].name, "Isha");
s[0].rollNo = 101;
s[0].marks = 95.5;

strcpy(s[1].name, "Afifa");
s[1].rollNo = 102;
s[1].marks = 88.0;

Loop to Input/Output-----------------------------------------------------------------------------------------------------
for (int i = 0; i < 3; i++) {
    printf("Enter details for student %d:\n", i + 1);
    printf("Roll No: ");
    scanf("%d", &s[i].rollNo);

    printf("Name: ");
    scanf(" %[^\n]", s[i].name); // Note the space before %[^\n]

    printf("Marks: ");
    scanf("%f", &s[i].marks);
}

for (int i = 0; i < 3; i++) {
    printf("\nStudent %d - Roll: %d, Name: %s, Marks: %.2f", 
           i + 1, s[i].rollNo, s[i].name, s[i].marks);
}

// An array of structures lets you store many real-world objects, each having multiple properties (like a list of students — each with roll number, name, and marks).

*/


/* What is a nested structure? Give a simple example.
-----> A nested structure means defining one struct inside another struct.
It helps when one structure is a part of another — like a Date of Birth inside a Student structure.

Syntax -----------------------------------------------------
struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int rollNo;
    char name[50];
    struct Date dob;  // Nested structure
};

*/

/* How can you access members of a structure using dot (.) operator?
------> The dot operator (.) is used in C to access individual members of a structure variable.

Syntax ----------------------------------------------------------
structure_variable.member_name

Example -----------------------------------------------------------

// Assigning values using dot operator
    s1.rollNo = 101;
    strcpy(s1.name, "Isha");
    s1.marks = 92.5;

// Accessing and printing values using dot operator
    printf("Roll No: %d\n", s1.rollNo);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

Note :
Dot operator is used only with normal structure variables.
For pointers to structures, use '->' instead of '.'(dot).

*/


/* Why do we use structures in C? Mention two advantages.
------> In C, we use structures to group different types of related data under a single name.
This helps in organizing and managing complex data in a clean and meaningful way.

Two Main Advantages of Using Structures:
1️. Grouping of Related Data:
    . Structures allow you to combine variables of different data types.
    . You can treat all related data (like student info, employee data, etc.) as one unit.

2. Improves Code Readability and Reusability:
    . Structures make your code more organized and readable.
    . Once defined, you can use the structure to declare multiple variables or arrays, just like built-in types.

*/
