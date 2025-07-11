// Take an integer and a char input from the user and print them.

#include <stdio.h>

int main() {
    int num;
    char ch;
    printf("Enter an integer: ");
    scanf("%d", &num);

    getchar();

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Integer: %d\n", num);
    printf("Character: %c\n", ch);

    return 0;
}

/* Output --------------
Enter an integer: 5
Enter a character: g
Integer: 5
Character: g
*/

/*
What getchar() does -------------------------------
getchar(); reads and removes that leftover \n from the input buffer.
This way, the next scanf("%c", &ch); works properly and waits for real input from the user. */