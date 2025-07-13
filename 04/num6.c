// Whether a character is vowel or consonent. 

#include<stdio.h>
int main(){
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) ?
     printf("Vowel\n") : printf("Consonent\n");
     return 0;

}

/* Output ----------------

Enter a character: p
Consonent

Enter a character: e
Vowel

*/