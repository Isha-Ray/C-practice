/* 5. Preprocessor:

Part of compilation that runs before actual compilation.
Handles directives like #include, #define.

*/

/* 6. Preprocessor Directives:

Start with #, no semicolon.

Types:

#include → include header file
#define → macro definition
#ifdef, #endif → conditional compilation
#undef → undefine macro

Example:
#include <stdio.h>
#define PI 3.14

int main() {
    printf("%f", PI);
    return 0;
}

*/



/* 7. Macro in C

Name given to a constant or expression using #define.
Replaced by value before compilation.

Example:

#define SQUARE(x) (x * x)
printf("%d", SQUARE(5)); // Output: 25

*/

/* 8. Ternary Operator

Short form of if-else.

(condition) ? expression1 : expression2;

Example:
int a=10, b=20, max;
max = (a > b) ? a : b;
printf("%d", max); // 20

*/

/* 9. C Program to Find Largest Element in an Array

#include <stdio.h>
int main() {
    int n, i, arr[50], largest;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    largest = arr[0];
    for(i=1; i<n; i++)
        if(arr[i] > largest)
            largest = arr[i];

    printf("Largest = %d", largest);
    return 0;
}

*/


/* 10. C Program to Find an Element in an Array

#include <stdio.h>
int main() {
    int n, i, arr[50], key, found=0;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i=0; i<n; i++) {
        if(arr[i] == key) {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }
    if(!found) printf("Not Found");
    return 0;
}

*/