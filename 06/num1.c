/* What is an array? Explain its advantages and limitations.
-------> An array is a collection of elements of the same data type stored in contiguous memory locations. 

Example: int numbers[5] = {10, 20, 30, 40, 50};

Advantage:
1. Random Access----Any element can be accessed directly using an index (e.g., arr[i]).
2. Easy Traversal---Can be easily looped through using loops (for, while, etc.).

Limitation:
1. Fixed Size---Size must be declared at compile-time and cannot change dynamically.
2. Same Data Type---All elements must be of the same data type.
*/

/* How is memory allocated for arrays in C?
-----> In C programming, memory allocation for arrays depends on how and where the array is declared —
 either statically or dynamically.

Memory allocation means reserving space in the computer's memory (RAM) for
 storing data (like variables, arrays, etc.) while a program is running.
*/

/* What is the difference between a one-dimensional and multi-dimensional array?
----> One-Dimensional Array (1D Array):
A 1D array is a linear collection of elements stored in a single row.
Example: int numbers[5] = {10, 20, 30, 40, 50};

Multi-Dimensional Array:
A multi-dimensional array stores data in rows and columns (2D) or even more dimensions.

Example: int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
*/

/* How do you access and modify an element in an array?
---->  Accessing an Element :

int arr[5] = {10, 20, 30, 40, 50};
printf("%d", arr[2]);  // Output: 30 (accessing 3rd element)
// arr[2] accesses the element at index 2 (the 3rd element).

Modifying an Element :

arr[2] = 99;           // Change 3rd element to 99
printf("%d", arr[2]);  // Output: 99

*/

/* Why is array index starting from 0?
---> Array indexing starts from 0 mainly due to how memory addressing works in low-level languages like C, 
and this concept is followed in many modern programming languages.

If arrays started at 1: First element would be *(arr + 1)
That means you skip the first memory cell.
*/

/* What happens if you try to access an array index out of bounds?
-----> 
int arr[5] = {1, 2, 3, 4, 5};
printf("%d", arr[10]);  // Out of bounds access
Accessing an index outside the valid range of an array leads to undefined behavior in C and many other languages.
*/

/* How are arrays passed to functions in C?
----> In C, when you pass an array to a function, you're actually
 passing a pointer to the first element of the array — not the entire array.

// Passes as	Pointer to first element (int *arr)
*/

/* Explain static vs dynamic arrays.
-----> Static Arrays: A static array has a fixed size that is known at compile time. 
Ex: int arr[5];   // Static array of 5 integers
Limitation:
Cannot change size during runtime
Stack memory is limited (not suitable for large arrays)

Dynamic Arrays: A dynamic array is created at runtime, and its size can be determined while the program is running. 
You use malloc(), calloc(), or realloc() from <stdlib.h>.
Ex: int *arr = (int *)malloc(5 * sizeof(int));  // Allocates space for 5 integers
Limitations:
Slightly slower than static arrays (heap access)
Must manage memory manually using free()
More complex syntax
*/
