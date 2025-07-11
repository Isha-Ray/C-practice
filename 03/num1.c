/* 1. What are data types in C? Why are they important?
    -----------> Data types in C tell the compiler: What kind of data a variable will store (like numbers, characters, etc.)
    Data Type --- int, float, double, char.

    Data Types Importance ----------------------------
    They define the type of value a variable can store.
    e.g., int age = 20; means age can only store whole numbers.

    They help the compiler understand how much memory to use,
    int takes 4 bytes, char takes 1 byte, etc.

    They prevent errors by not allowing wrong data types.
    We can't store a letter in an int variable.                 */

// -----------------------------------------------------------------------------------------------------------------------------------


/* 2. List all primary data types in C with examples.
    ------> In C, primary data types are the fundamental types used to declare variables.
----Data Type-----	                    -------Description------	                               ------Example--------
    int	                                Integer (whole numbers)	                                    int age = 25;
    float	                            Decimal numbers (less precision)	                        float temp = 36.5f;
    double	                            Decimal numbers (more precision)	                        double pi = 3.14159;
    char	                            Single character	                                        char grade = 'A';
    void	                            No value (used in functions)	                            void display();
*/

// -----------------------------------------------------------------------------------------------------------------------------------


/* 3. What is the size (in bytes) of int, float, char, and double in C?
-------> int = 4 bytes, float = 4 bytes, double = 8 bytes, char = 1 byte.      */


// -----------------------------------------------------------------------------------------------------------------------------------


/* 4. What is the difference between float and double?
-------> double is more precise and accurate than float, but uses more memory.   */

// -----------------------------------------------------------------------------------------------------------------------------------


/* 5. What is a character constant? Give an example.
------> A character constant is a single character enclosed in single quotes ('') that represents a specific value in memory.
Example: char grade = 'A';  // 'A' is a character constant.      */

// ------------------------------------------------------------------------------------------------------------------------------------


// 6. Write a program to input two integers and print their sum.
// #include <stdio.h>

// int main() {
//     int num1, num2, sum;

//     printf("Enter first number: ");
//     scanf("%d", &num1);

//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     sum = num1 + num2;

//     printf("The sum of %d and %d is: %d\n", num1, num2, sum);
//     return 0;
// } 

/* Output -------->
Enter first number: 9
Enter second number: 14
The sum of 9 and 14 is: 23  */

// -----------------------------------------------------------------------------------------------------------------------------------


/* 7. What is the format specifier for int, float, char, and double?
--------> Format specifiers are used in printf() and scanf() to tell the compiler what type of data you are working with.
Data Type	        Format Specifier	
int	                 %d	                        
float	             %f	                        
char	             %c	                                
double	             %lf	                 
*/

// -----------------------------------------------------------------------------------------------------------------------------------


/* 8. What is the range of int and char in C?
int (Integer) --------------------
Size: Usually 4 bytes (32 bits)
Range: -2,147,483,648 to 2,147,483,647

char (Character) ---------------
Size: 1 byte (8 bits)
Range (Signed char): -128 to 127
Range (Unsigned char): 0 to 255    */

// ----------------------------------------------------------------------------------------------------------------------------


/* 9. What is the use of sizeof() operator? Give an example.
 ------> The sizeof() operator is used to find the size (in bytes) of any data type, variable, or expression in C.
#include <stdio.h>
int main() {
    int a;
    float b;
    char c;
    double d;

    printf("Size of int: %lu bytes\n", sizeof(a));
    printf("Size of float: %lu bytes\n", sizeof(b));
    printf("Size of char: %lu byte\n", sizeof(c));
    printf("Size of double: %lu bytes\n", sizeof(d));

    return 0;
}

// Output --------------------
Size of int: 4 bytes
Size of float: 4 bytes
Size of char: 1 byte
Size of double: 8 bytes                  */


// -----------------------------------------------------------------------------------------------------------------------------------


/* 10. What are derived data types? Name a few.
-------> Derived data types help in organizing complex data and making code more flexible and reusable.

Derived Type---	                            Description-------------
Array	                                Collection of elements of same type
Pointer	                                Stores the address of another variable
Structure	                            Groups different types of variables
Union	                                Like structure but shares memory space
Function	                            A block of code that performs a task

*/
