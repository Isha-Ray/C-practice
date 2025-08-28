/* Static Variable in C

A static variable in C is a variable that retains its value between function calls
 (it is created only once and stored in memory until program ends).

Properties of Static Variable:

Storage class: static
Memory allocation: Done in Data Segment (not in Stack).
Default value: 0 (if not initialized).
Scope: Local to the function/block if declared inside, but lifetime is entire program.
Lifetime: Exists throughout program execution.

Example 1: Static Variable inside a Function

#include <stdio.h>

void counter() {
    static int count = 0;  // initialized only once
    count++;
    printf("Count = %d\n", count);
}

int main() {
    counter();  // Count = 1
    counter();  // Count = 2
    counter();  // Count = 3
    return 0;
}

Unlike normal local variable, count does not reset each time.

Example 2: Static Global Variable

#include <stdio.h>

static int x = 10;   // static global, accessible only in this file

int main() {
    printf("%d", x);
    return 0;
}

A static global variable has file scope (not accessible outside the file).


Differences: Local vs Static Local Variable

Feature	                            Normal Local Variable	                                Static Local Variable

Storage	                                Stack	                                                Data Segment
Lifetime	                Created & destroyed each function call	                        Exists till program ends
Default value	                        Garbage	                                                      0
Value persistence	                No (reset every call)	                                   Yes (retains value)

*/

