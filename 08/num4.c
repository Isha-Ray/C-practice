/*Print Numbers from 1 to N
Write a recursive function to print numbers from 1 to n.
Example: Input: 5 → Output: 1 2 3 4 5*/

#include <stdio.h>

void printNumbers(int n) {
    if (n == 0) {
        return; 
    }

    printNumbers(n - 1); 
    printf("%d ", n);    
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Numbers from 1 to %d are:\n", num);
    printNumbers(num);

    return 0;
}

/*Output -----------
Enter a number: 44
Numbers from 1 to 44 are:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22
23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 
*/