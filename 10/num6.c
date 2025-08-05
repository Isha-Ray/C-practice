// Write a program to check if a given string is a palindrome or not (ignore case).

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int start = 0, end, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    end = len - 1;

    while (start < end) {
    
        if (tolower(str[start]) != tolower(str[end])) {
            isPalindrome = 0;  
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

/* Output --------------------
Enter a string: afifa
The string is a palindrome.
*/