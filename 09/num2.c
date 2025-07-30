/* 1. Passing an Array to a Function Through a Pointer ---------------------------------------------------
When you pass an array to a function in C, what you’re really passing is a pointer to its first element.*/
// ------>
/*Syntax: 

void display(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int numbers[] = {10, 20, 30, 40};
    display(numbers, 4);  // Passing array as pointer
    return 0;
}

*/

/* 2. Array of Pointers --------------------------------------------------------------------------
An array of pointers is an array where each element is a pointer (typically to data like int, char, or strings).*/
// ------> 
/* Example: Array of int* --------------------------------
int a = 10, b = 20, c = 30;
int *arr[3];      // array of 3 int pointers

arr[0] = &a;
arr[1] = &b;
arr[2] = &c;

printf("%d", *arr[1]);  // prints 20

Example: Array of Strings (char*) ---------------------------------------

char *names[] = {"Alice", "Bob", "Charlie"};
printf("%s", names[0]);  // prints "Alice"

*/
