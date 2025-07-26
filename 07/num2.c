/*call by value and call by reference
passing array element to a function
passing whole array to a function
*/

/*  Call by Value --------------------------------------------------------

A copy of the variable is passed to the function.
Changes made inside the function do not affect the original variable.

Example: 
#include <stdio.h>
void change(int x) {
    x = x + 5;
}

int main() {
    int a = 10;
    change(a);
    printf("a = %d", a);  // Output: a = 10 (original not changed)
    return 0;
}


Call by Reference -----------------------------------------------------------------

The address of the variable is passed.
Changes made in the function affect the original variable.

Example:
#include <stdio.h>
void change(int *x) {
    *x = *x + 5;
}

int main() {
    int a = 10;
    change(&a);
    printf("a = %d", a);  // Output: a = 15 (original changed)
    return 0;
}
*/

/* passing array element to a function --------------------------------------------------

#include <stdio.h>
void show(int x) {
    printf("Value = %d\n", x);
}

int main() {
    int arr[3] = {10, 20, 30};
    show(arr[1]);  // Passing 2nd element
    return 0;
}

*/


/* Passing Whole Array to a Function --------------------------------------------------------
#include <stdio.h>
void display(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    display(arr, 5);
    return 0;
}

*/