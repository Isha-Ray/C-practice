// Write a program that shows syntax error by missing ; and then fix it.

// #include <stdio.h>

// int main() {
//     printf("Hello!") // missing ;  
//     return 0;
// }

/* Output --------------------- (error)
    num10.c: In function 'main':
    num10.c:7:5: error: expected ';' before 'return'
     return 0;
     ^~~~~~
*/

// Fixing it -------------------------------

#include <stdio.h>

int main() {
    printf("Hello!"); // added ;
    return 0;
}

// Output --------> Hello!

