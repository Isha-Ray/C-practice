// Try using a variable before declaring it — observe the compiler error.

// #include <stdio.h>

// int main() {
//     value = 10;         //  before declaring
//     printf("%d", value);

//     int value;          // Declared after use

//     return 0;
// }


/* Output ---------------
num10.c: In function 'main':
num10.c:6:5: error: 'value' undeclared (first use in this function)       
     value = 10;         //  before declaring
     ^~~~~
num10.c:6:5: note: each undeclared identifier is reported only once
 for each function it appears in

*/

// Correct -------------------------------

#include <stdio.h>

int main() {
    int value = 10;     // Declare first
    printf("%d", value);
    return 0;
}
