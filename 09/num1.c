/* What is a pointer in C? Why are pointers used?

Explain what pointers are and their main uses like 
dynamic memory, function arguments, and data structures.

---->A pointer in C is a variable that stores the memory address of another variable.
Instead of holding a data value directly (like int x = 10;), a pointer holds the address of a variable:
int x = 10;
int *p = &x;  // 'p' stores the address of variable 'x'

Pointers are powerful and used in many key areas:
1. Dynamic Memory Allocation:
Pointers are essential for working with heap memory using functions like malloc(), calloc(), and free():

int *arr = (int *)malloc(5 * sizeof(int));  // Allocate array of 5 integers

2. Function Arguments (Call by Reference)
Normally, function arguments are passed by value (copy).
But with pointers, you can modify the original variable:

void update(int *n) {
    *n = *n + 5;
}
int x = 10;
update(&x);  // x becomes 15

3. Data Structures (Linked List, Trees, Graphs)
Most advanced data structures rely on pointers to connect elements dynamically:

struct Node {
    int data;
    struct Node *next;  // Pointer to next node
};

*/

// --------------------------------------------------------------------------------------------

/* What is the difference between * (dereference) and & (address-of) operators in C?
Describe with examples how these two operators work and how they are used with pointers.

----> In C, * and & are pointer-related operators with opposite purposes:
Operator:	            Meaning:                        Purpose:
&	                Address-of operator	            Gets the address of a variable
*	                Dereference operator	        Accesses the value at an address (pointer)

& (Address-of Operator) -------------------------------------------------------------------------
Used to get the memory address of a variable.
Ex: 
int x = 10;
int *p = &x;   // p stores the address of x
Note : &x gives the address of x.

* (Dereference Operator) -------------------------------------------------------------------------------
Used to access or change the value stored at a pointer's address.
Ex:
int x = 10;
int *p = &x;
printf("%d", *p);  // Outputs 10 (value at address p)
*p = 20;           // Changes the value of x to 20
Note: *p gives the value stored at the address p.

*/

// ----------------------------------------------------------------------------------------------------------------------

/* What is a NULL pointer? Why is it important to initialize a pointer to NULL?
Explain the concept of a NULL pointer and its use in avoiding undefined behavior or crashes.

------> A NULL pointer is a pointer that does not point to any valid memory location.
It is explicitly set to NULL to indicate that it is not yet assigned or intentionally empty.

Syntax:
int *ptr = NULL;

In C, NULL is defined as:
#define NULL ((void *)0)

Uninitialized pointers may contain garbage addresses, leading to -----------------------------------------
Undefined behavior
Segmentation faults (crashes)
Corrupted data

By setting a pointer to NULL, you ensure -----------------------------------------------------
It is not pointing anywhere dangerous
You can safely check if the pointer is valid before using it

*/

// --------------------------------------------------------------------------------------------------------------

/*  What are the advantages and disadvantages of using pointers in C?
List key benefits (like efficient memory usage) and risks (like segmentation faults or memory leaks). 

Advantages of Pointers ---------------------------------------------------------
Advantage:	                         Explanation:
Efficient Memory Usage	             Pointers allow dynamic memory allocation using malloc() and free(), helping you use only the memory you need.
Function Argument by Reference	     You can modify actual values of variables by passing pointers to functions, saving memory and avoiding copying large data.
Dynamic Data Structures	             Pointers enable building flexible structures like linked lists, trees, graphs, etc., which are not limited by static array sizes.
Array and String Handling	         Pointers simplify iteration and manipulation of arrays and strings, especially with pointer arithmetic.
Low-level Memory Access	             Pointers provide direct access to memory locations, useful in system-level programming (like OS or embedded systems).

Disadvantages of Pointers -----------------------------------------------------------
Disadvantage:	            Explanation:
Segmentation Faults	        Dereferencing an uninitialized or NULL pointer can crash the program.
Memory Leaks	            Forgetting to free() memory allocated with malloc() leads to wasted memory (leaks).
Complex Syntax	            Pointers can be confusing for beginners due to syntax like *p, &x, **pp, etc.
Dangling Pointers	        Using pointers after the memory is freed can cause bugs that are hard to detect.
Security Risks	            Improper use of pointers can lead to vulnerabilities like buffer overflows.

*/

// --------------------------------------------------------------------------------------------------------------------------

/*Explain pointer arithmetic with examples. What operations can be performed on pointers?
Discuss allowed operations (increment, decrement, comparison) and how pointer types affect the results.

------> Pointer arithmetic refers to performing mathematical operations (like addition or subtraction) on pointers.
C allows arithmetic operations because pointers are just memory addresses — but the type of pointer matters because it determines how many bytes to move.

Allowed Pointer Operations ------------------------------------
Operation	                Description
++ / --	                    Increment / Decrement (move to next or previous element)
+ / -	                    Add/Subtract an integer to/from a pointer
- (pointer - pointer)	    Find the distance (number of elements) between two pointers of the same array
==, !=, <, >	            Comparison between two pointers (mostly useful within arrays)

Example:
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Points to arr[0]

    printf("Value at ptr: %d\n", *ptr);        // 10
    printf("Value at ptr+1: %d\n", *(ptr + 1)); // 20
    printf("Value at ptr+2: %d\n", *(ptr + 2)); // 30

    ptr++;  // Now points to arr[1]
    printf("After ptr++, value: %d\n", *ptr);   // 20

    return 0;
}

Type:	                Step Size of ptr + 1:
int *	                4 bytes
char *	                1 byte
float*	                4 bytes
double*	                8 bytes

*/

