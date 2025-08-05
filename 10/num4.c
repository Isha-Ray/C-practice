// Write a program to reverse a string without using the strrev() function.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}

/* Output -----------------
Enter a string: Isha
Reversed string: ahsI
*/

/*len = strlen(str); // Get length of string
if (str[len - 1] == '\n') // Remove newline if needed
for (i = 0; i < len / 2; i++) // Reverse loop

*/