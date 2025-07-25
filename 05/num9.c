// Print numbers from 1 to 100. Stop when a number divisible by 7 is found.

#include <stdio.h>

int main() {
    int i;

    printf("Numbers from 1 to 100 that are NOT divisible by 7:\n");

    for(i = 1; i <= 100; i++) {
        if(i % 7 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

/* Output ----------------------------------------------------------
1 2 3 4 5 6 8 9 10 11 12 13 15 16 17 18 19 20 22 23 24 25 26 27 29 30 31 
32 33 34 36 37 38 39 40 41 43 44 45 46 47 48 50 51 52 53 54 55 57 58 59 60
 61 62 64 65 66 67 68 69 71 72 73 74 75 76 78 79 80 81 82 83 85 86 87 88 89 90
  92 93 94 95 96 97 99 100  
*/