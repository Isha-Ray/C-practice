// Write a C program to count the number of vowels and consonants in a given string.

#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = tolower(str[i]); 

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}


/* Output ---
Enter a string: Isha
Vowels: 2
Consonants: 2
*/

/* stdin refers to standard integer.
 tolower() is a function in C that converts an uppercase letter to its lowercase equivalent.
For example, 'A' and 'a' should be treated the same when checking for vowels.*/
