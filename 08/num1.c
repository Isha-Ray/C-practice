/* What is recursion in C programming?
Explain the concept of a function calling itself.

------> Recursion is a programming technique where a function calls itself to solve a problem.

Every recursive function must have:
Base case – The condition to stop recursion.
Recursive case – The part where the function calls itself.
*/

/* What are the two main parts of a recursive function? 
-----> 
Base Case ---------------------------------------
This is the stopping condition for the recursion.
It tells the function when to stop calling itself.
Without it, the function would keep calling itself forever (leading to stack overflow).

Example:
if (n == 0)  // base case
    return 1;

Recursive Case ---------------------------------------------------------------
This is the part where the function calls itself with a smaller or simpler input.
It helps break down the problem into smaller sub-problems.

Example:
return n * factorial(n - 1);  // recursive case
*/

/* What is the difference between recursion and iteration?

Feature:	                                Recursion:	                                                         Iteration:
Definition	                    A function that calls itself repeatedly	                            Repeating a block of code using loops
Approach	                    Divide-and-conquer strategy	                                        Looping (step-by-step)
Used Keywords	                Function calls	                                                    for, while, or do-while loops
Base Condition	            Must have a base case to stop recursion	                            Has loop condition to control repetition
Memory Usage	            Uses more memory (call stack for each call)	                            Uses less memory
Performance	                Slower due to overhead of function calls	                    Faster, especially for simple repetitive tasks
Best For	            Problems like factorial, Fibonacci, tree traversal, etc.	        Simple tasks like summing numbers, loops, etc.
Risk	                Can cause stack overflow if base case is missing	                Can go into infinite loop if condition is wrong

*/

/* What are the advantages and disadvantages of recursion?
----> Advantages --------------------------------------------
1. Recursive solutions can be shorter and cleaner than loops, especially for complex problems like trees, graphs, etc.
2. Many problems (like factorial, Fibonacci, tree traversal) are naturally recursive, so recursion matches the way we think about them.
3. Fewer lines of code compared to iterative logic in some cases.
4. Recursion is ideal for algorithms like Merge Sort, Quick Sort, etc.

-----> Disadvantages ---------------------------------------------
1. Each recursive call uses stack memory, which can lead to stack overflow.
2. Recursive calls have function call overhead (pushing and popping the stack).
3. Tracing recursive calls and understanding flow can be confusing for beginners.
4. If the base case is missing or incorrect, it leads to infinite recursion and program crash.
*/
