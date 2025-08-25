/* 1. Dynamic Memory Allocation :

In C, memory can be allocated at runtime (not fixed at compile time).

Done using functions from <stdlib.h>:

malloc()
calloc()
realloc()
free()

Example:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    if (ptr == NULL) {
        printf("Memory not allocated\n");
    } else {
        printf("Memory allocated successfully\n");
    }
    free(ptr); // Deallocate memory
    return 0;
}

*/


/* 2. malloc() vs calloc()

malloc(size):
Allocates a block of memory.
Does not initialize (garbage values).

calloc(n, size):
Allocates memory for n blocks.
Initializes all bytes to 0. 

Example:

int *a = (int*) malloc(5 * sizeof(int));   // 5 garbage integers
int *b = (int*) calloc(5, sizeof(int));    // 5 integers initialized to 0

*/



/* 3. Bitwise Operations

Work directly on binary representation of numbers.

Operators:
& (AND)
| (OR)
^ (XOR)
~ (NOT)
<< (Left shift)
>> (Right shift) 


Example:
int a = 5, b = 3;   // 5=0101, 3=0011
printf("%d", a & b);  // 1 (0001)
printf("%d", a | b);  // 7 (0111)
printf("%d", a ^ b);  // 6 (0110)
printf("%d", a << 1); // 10 (1010)

*/

/* 4. Increment and Decrement Operators

++ → Increase by 1

-- → Decrease by 1

Pre-increment (++a): value updated before use.
Post-increment (a++): value updated after use.


Example:
int a = 5;
printf("%d", ++a); // 6
printf("%d", a++); // prints 6, then a becomes 7

*/

/* 5. Curly Brackets { } in C

Used to group multiple statements into a block.
Common in loops, functions, conditionals. 

Example:
if (x > 0) {
    printf("Positive\n");
    printf("Greater than zero\n");
}

*/
