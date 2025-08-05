// Write a C program to find the length of a string using a pointer (without using strlen()).

#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    ptr = str;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    if (str[length - 1] == '\n') {
        length--;  
    }

    printf("Length of the string: %d\n", length);

    return 0;
}

/* ptr = str; sets the pointer to point to the beginning of the string.
while (*ptr != '\0') keeps moving the pointer until it reaches the end of the string.
length++ counts each character.
fgets() is used instead of gets() for safety (avoids buffer overflow).
We check if the last character is '\n' (newline) due to fgets, and subtract one if it is. 
*/

/* Output :
Enter a string: isha
Length of the string: 4
*/

/*  
Enter a string: Hello world
Length of the string: 11
*/

// Here in hello world, the length of the string is 11 because space is also a character, and it counted with that.