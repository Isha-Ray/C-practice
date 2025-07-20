// Print numbers from 1 to 10 but skip even numbers using continue.

#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            continue;  
        }
        printf("%d ", i);
    }

    return 0;
}
