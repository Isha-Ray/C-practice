// Take a number (1–7) and print the corresponding weekday using switch.

#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1 to 7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.");
    }

    return 0;
}

/* Output ---------------------------------------------------
Enter a number (1 to 7): 2
Tuesday
*/