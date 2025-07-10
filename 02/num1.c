/* 1. What is a variable in C? Why is it needed? 
    // --------> A variable in C is a named storage location in memory used to store data (like numbers, letters, etc.)
    //  during program execution. A variable is like a box with a name that holds some value while the program runs.
    // Example ---------------------------
    // int age = 20;
    // Here: int → data type (integer),age → variable name, 20 → value stored in the variable.
    Need of Variable ----------------------------------
    // To store values we want to use or change in the program.
    // To perform operations using those values.
    // To make the program dynamic and reusable.                     */

// ------------------------------------------------------------------------------------------------------------------------------------

/* 2. Write the rules for naming a variable in C.
   1. Use only letters, digits, and underscore - first-name (hyphen not allowed)
   2. Must start with a letter or underscore - 1score (can't start with a digit)
   3. No spaces allowed.
   4. No special symbols allowed -  Invalid: @data, mark$
   5. Cannot use C keywords - Invalid: int, float, return, etc.      */

// -----------------------------------------------------------------------------------------------------------------------------------


/* 3. Declare a variable of type int, float, and char.
#include <stdio.h>
int main() {
    int age;         // int (Integer)
    float marks;     // Float (decimal) 
    char grade;      // char (Character)
    return 0;
}                                                         
    // Output -------------------
    int age = 20;
    float marks = 85.5;
    char grade = 'A';                                    */

// -----------------------------------------------------------------------------------------------------------------------------------


/* 4. What is the difference between variable declaration and definition?
   . Declaration = "Hey compiler, this variable exists somewhere!"
   . Definition = "Here is the variable, give it memory and maybe a value."

   // Declaration (no memory yet)
    extern int x;
    // Definition (memory + optional value)
    int x = 5;                                            */

// ---------------------------------------------------------------------------------------------------------------------------------


/* 5. Can a variable name start with a digit? Justify.
     ---------> Variable names can't start with digits because the compiler would confuse them with numbers. */


// ---------------------------------------------------------------------------------------------------------------------------


/* 6.What will be the output of this code?

 int x = 10;
 printf("%d", x);

    Output --------------------> 10.
    To run this code correctly, it should be inside the main() function and include the necessary header(#include <stdio.h>).  */


// --------------------------------------------------------------------------------------------------------------------------------


/* 7. Can you declare multiple variables in one line? Show with example.
    Yes, we can declare multiple variables in one line in C.
    int a = 5, b = 10, c = 15;                                */

// -----------------------------------------------------------------------------------------------------------------------------


/* 8. What is the scope of a variable in C?
  ------> The scope of a variable in C means where in the program the variable can be accessed or used.
    Scope = Where a variable "lives" and can be used.  
    Types of Scope in C: Local Scope, Global Scope, Block Scope.     */

// --------------------------------------------------------------------------------------------------------------------------


/* 9. What is the difference between global and local variables?
    Global Variable --------------------
    Variable declared inside a function or block.
    Can be used only within that function/block.
    Global variable used everywhere.

    Example ----------------
    #include <stdio.h>
    int x = 10;  // Global variable
    int main() {
    printf("%d", x);  // Accessible here
    return 0;
    }

    Local Variable ----------------------
    Variable declared outside all functions.
    Can be used anywhere in the program.
    Local variable used only where it's declared.

    Example ----------------
    #include <stdio.h>
    int main() {
    int x = 5;  // Local variable
    printf("%d", x);  // Accessible only here
    return 0;
    }                                                          */


// ------------------------------------------------------------------------------------------------------------------------------


/* 10. What is an uninitialized variable? What value does it hold?
   --------> An uninitialized variable is a variable that is declared but not given any value. 
   In local scope (inside a function): It holds a garbage value (random, unpredictable).
   In global scope or if declared as static: It gets default value 0.                        */
