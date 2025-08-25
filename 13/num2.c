/* 6. Operations on Pointers

Assigning: int *p = &x;

Dereferencing: *p → value at address.

Pointer arithmetic:
p + 1 → next memory block (depends on type size).
p - 1
p1 - p2 → difference in elements. 


Example:
int arr[3] = {10, 20, 30};
int *p = arr;
printf("%d", *p);     // 10
printf("%d", *(p+1)); // 20

*/



/* 7. Self-referential Structure

A structure that contains a pointer to itself.
Common in linked lists, trees, etc.

Example:
struct Node {
    int data;
    struct Node *next;  // Pointer to same structure type
};

*/


/* 8. Enumerated Data Type (enum)

User-defined type with named integer constants.
Improves readability.

Example:
enum week {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
enum week today;
today = Wed;
printf("%d", today);  // 2 (index starts from 0)

*/

/* 9. Nested if and if-else ladder

Nested if: if inside another if.
If-else ladder: chain of conditions.

Example (Nested if):

if (x > 0) {
    if (x % 2 == 0) {
        printf("Positive Even");
    }
}

Example (If-else ladder):

if (marks >= 90)
    printf("Grade A");
else if (marks >= 75)
    printf("Grade B");
else if (marks >= 50)
    printf("Grade C");
else
    printf("Fail");

*/