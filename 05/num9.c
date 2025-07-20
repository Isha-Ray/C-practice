// Print numbers from 1 to 100. Stop when a number divisible by 7 is found.

#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 100; i++) {
        if(i % 7 == 0) {
            break;  
        }
        printf("%d ", i);
    }

    return 0;
}
