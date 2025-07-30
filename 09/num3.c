/* Print Value and Address Using Pointer
Q:
Write a program that declares an integer variable and a pointer to it.
Print the value of the variable and its address using the pointer.

Focus: & and * operators*/

#include <stdio.h>

int main() {
    int num = 10;         
    int *ptr;             

    ptr = &num;           

    printf("Value of num: %d\n", num);              
    printf("Address of num: %p\n", &num);           
    printf("Value using pointer: %d\n", *ptr);      
    printf("Address using pointer: %p\n", ptr);     

    return 0;
}

/*Output ------------------
Value of num: 10
Address of num: 0061FF18
Value using pointer: 10
Address using pointer: 0061FF18
*/
