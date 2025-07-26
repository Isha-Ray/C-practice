/* What is a function in C?
A function in C is a block of code that performs a specific task. */

/*Syntax of a Function:
return_type function_name(parameters) {
    // body of the function
}
*/

/* What are the different types of functions in C?
Types of Functions in C:

Library Functions – Already defined in C libraries.
E.g. printf(), scanf(), sqrt(), strlen()
User-defined Functions – Created by the programmer.
*/


/* Why are functions used in programming?

Code Reusability: You can write a block of code once and reuse it multiple times by calling the function.
Modularity: Functions help you break a big program into smaller parts (modules).
Avoids Repetition: Using functions means you don’t need to repeat the same code again and again. This reduces the chances of mistakes.

Example:
#include <stdio.h>
// Function to add two numbers
int add(int a, int b) {
    return a + b;
}
int main() {
    int result = add(5, 10);  // Reusing the add function
    printf("Sum is: %d\n", result);
    return 0;
}

*/

/* What is the difference between library functions and user-defined functions?

Feature:	                            Library Functions:	                                            User-Defined Functions:
Definition	                Predefined functions provided by the language	                    Functions written by the programmer
Written By	            Created by developers of the programming language (like C creators)	    Created by the user (you)
Location	                Stored in header files like <stdio.h>, <math.h>	                    Defined by the user in the program
Examples	                    printf(), scanf(), sqrt(), strlen()	                            sum(), factorial(), isEven()
Need to Write Code?	                No – just use the function	                                Yes – you must define and implement it yourself
Purpose	                           To perform common standard tasks	                            To perform specific tasks as per user's need

*/


/* What is the difference between a function declaration and function definition?

Feature:	                            Function Declaration:	                                    Function Definition:
What is it?	       Tells the compiler about the function’s name, return type, and parameters	Contains the actual body/code of the function
Also Known As	                     Function prototype	                                        Function implementation
Ends with	                            A semicolon (;)	                                        A block of code inside { }
Code Written?	                        No code inside it	                                    Yes, contains full logic
When Used?	            Usually written at the top before main() or in header files	            Can be written before or after main()
*/

/* What is function prototype? Why is it used?

A function prototype is a declaration of a function that tells the compiler:
The function’s name
Its return type
The number and type of arguments it takes
It does not contain the function body.

Syntax ---------------
return_type function_name(type1, type2, ...);

*/

/* Can a function return more than one value in C?
A function in C can only return a single value using the return statement.
*/


/* What are actual and formal parameters in C functions?
Actual Parameters:	The real values passed to the function when it is called
Formal Parameters:	The variables defined in the function definition to receive the values

Example:
#include <stdio.h>

// Function definition
void greet(char name[]) {        // 'name' is a formal parameter
    printf("Hello, %s!\n", name);
}
int main() {
    greet("Isha");               // "Isha" is the actual parameter
    return 0;
}

*/