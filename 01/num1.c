
    // Questions related to INTRODUCTION OF C PROGRAMMING -----------------------------------------------------


/* 1. What is C language? List any 3 features of C.
 --------->  C is a general-purpose, procedural programming language. It is one of the most widely used programming languages and
   forms the foundation of many modern programming languages like C++, Java, and Python. 

   Three Key Features of C -------------
    1. Simple Language: Easy to learn and use.
                         Uses common English words like if, else, while, for.

    2. Fast and Efficient: C programs run quickly.
                            Good for system-level tasks like operating systems.

    3. Portable: We can write a C program on one computer and run it on another with little change.

                */

    // ------------------------------------------------------------------------------------------------------------------------------- 

/* 2. Who developed C language and in which year?
 ---------> C language was developed by Dennis Ritchie in 1972 at Bell Labs.   */


    // --------------------------------------------------------------------------------------------------------------------------------


/* 3. What are the uses of C programming in real life?
  ---------> Operating Systems: Used to build parts of Windows, Linux, and macOS.
             Used in devices like washing machines, microwaves, cars, and ATMs. C runs the software that controls these machines.
             Tools like file managers, text editors, and terminal programs are often written in C.  */


    // --------------------------------------------------------------------------------------------------------------------------------


/* 4. What is a compiler? Name any one C compiler.
 --------> Compiler is a program converts the C code (written by us) into machine code (understood by the computer).
            One C Compiler Name: GCC – GNU Compiler Collection (very commonly used).  */


    // ---------------------------------------------------------------------------------------------------------------------------------


/* 5. What is the difference between a compiled and an interpreted language?
 ---------> A compiled language is a programming language where:
            The entire code is first converted into machine code (0s and 1s) using a compiler, before it runs.

            An interpreter is a program that:
            Reads and runs the code line by line, directly — without converting the whole code into machine code at once.

                        ---------Compiled Language-------	                               ------Interpreted Language-----
Translation	    |   Entire code is translated at once into machine code.	    |    Code is translated line by line at runtime.
Speed	        |   Faster execution after compiling.	                        |    Slower, as each line runs one by one.
Error Handling	|   Shows all errors at once after compilation.	                |    Shows errors one at a time, while running.
Examples	    |   C, C++, Rust	                                            |    Python, JavaScript, Ruby

                                                                     */

    // -------------------------------------------------------------------------------------------------------------------------------
                                                                    
                                                                     
/* 6. Explain the flow of a C program from writing to execution.

     1. Writing the Code: Write a 'C' program in a text editor. |  File is saved as hello.c. 
     2. Compiling: The code is given to a compiler (like GCC). |  Compiler checks for errors and translates it into machine code.
     If no errors, it creates an executable file (like hello.exe on Windows or a.out on Linux).
     3. Linking: The compiler links the code with built-in libraries (e.g., stdio.h). | Adds necessary code to make the program complete.
     4. Execution: You run the final .exe or output file. | Computer executes machine code and shows the output.
                                                                                                                     */

    // ------------------------------------------------------------------------------------------------------------------------------- 


/* 7. What is the extension of a C source code file?
  ---------> The extension of a C source code file is: .c    */


    // --------------------------------------------------------------------------------------------------------------------------------


/* 8. Can a C program run without the main() function? Why or why not?
 ------->  No, a standard C program cannot run without the main() function.
    REASON ------------------
    . The main() function is the entry point of a C program.
    . When we run a C program, the execution always starts from main().
    . Without main(), the compiler doesn’t know where to begin execution.       */


    // --------------------------------------------------------------------------------------------------------------------------


// 9. Write a simple C program to print “Hello, World!”.

#include <stdio.h> // stdio.h ---- standard input output. header file(h)
int main() {
    printf("Hello, World!");
    return 0;
}

    // ---------------------------------------------------------------------------------------------------------------------------


/* 10. What are header files in C? Give examples.
 ---------> Header files in C are: Files that contain ready-made code (like functions) that you can use in your program. 

          --Header File--            ---What it's used for-----
            stdio.h	                    Input/output (e.g. printf(), scanf())
            math.h	                    Math functions (e.g. sqrt(), pow())
            string.h	                String work (e.g. strlen(), strcpy())
                                                                                    */




