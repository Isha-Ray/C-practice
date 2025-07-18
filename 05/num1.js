// Loops --------------------------------------------------

/* Loops in C are used to execute a block of code repeatedly until a certain condition is false. 
    This helps avoid writing repetitive code manually. */

/*  Types of Loops in C:

      Loop Type                   	            Description
  1.  for loop	                            Repeats a block a specific number of times.
  2.  while loop	                            Repeats while a condition is true.
  3.  do...while loop	                        Executes at least once, then repeats while condition is true.

*/

/*  for Loop ------------------------------------

for(initialization; condition; update) {
    // code to run
}

*/

/* while loop ------------------------------------

while(condition) {
    // code to run
}

*/

/* do while loop ------------------------------------

do {
    // code to run
} while(condition);

*/

/* Difference Between for, while, and do...while Loops

Feature	                    for Loop	                        while Loop	                             do...while Loop

Use case	         Known number of iterations	        Unknown number of iterations	        Unknown, but must run at least once
Syntax	                for(init; cond; update)	                while(cond)	                        do { } while(cond);
Entry/Exit	        Entry-controlled (checks first)	    Entry-controlled (checks first)	        Exit-controlled (checks after 1st run)
Run at least once?	            No	                                No	                                        Yes

*/

/*
 // for loop
for(int i = 1; i <= 5; i++) {
    printf("%d ", i);
}

// while loop
int i = 1;
while(i <= 5) {
    printf("%d ", i);
    i++;
}

// do...while loop
int i = 1;
do {
    printf("%d ", i);
    i++;
} while(i <= 5);

*/


/* Nested For Loop ----------------------------------------
A nested loop is a loop inside another loop. It's used when you need to perform repeated actions within another repeated action —
 like printing patterns, working with matrices, etc.  */

/* Syntax of Nested Loops:

for(initialization1; condition1; update1) {
    for(initialization2; condition2; update2) {
        // inner loop code
    }
    // outer loop code
}

*/

/* Loop Control Statements --------------------------

Statement	            Purpose

break	                Exits the loop early.
continue	            Skips the current iteration and moves to the next.
*/

/* for(int i = 1; i <= 5; i++) {
    if(i == 3) continue;
    printf("%d\n", i);
}
*/

/* for(int i = 1; i <= 5; i++) {
    if(i == 3) break;
    printf("%d\n", i);
}
*/

/* switch case Control Statement -------------------------
Used to select one block of code from many based on the value of a variable. */

/*
 switch(expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}

Imp ---------------------------------------------------------------------

break; stops the flow, or else fall-through will happen (next case runs).
default is optional, used if no case matches.

*/

/* goto Statement ------------------------
The goto statement jumps to a labeled part of the program, useful in rare cases (error handling, exiting deeply nested loops).

Syntax -------------------------------------
goto label;

// code

label:
    // code


Example -------------------------------------------

#include <stdio.h>
int main() {
    int n = 5;
    if(n == 5) {
        goto skip;
    }
    printf("This won't print");

skip:
    printf("Jumped to here");
    return 0;
}


Use of goto ---------------------------------------------------------

Discouraged in most cases — makes code hard to read and debug.
Use loops, functions, or break/continue instead when possible.

*/









