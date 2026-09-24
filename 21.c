#include <stdio.h>

int main() {
    int monthNumber;

    // Prompt user for input
    printf("Enter a month number (1-12): ");
    if (scanf("%d", &monthNumber) != 1) {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }

    // Determine the month and days using switch-case
    switch (monthNumber) {
        // Months with 31 days
        case 1:
            printf("Month: January\nDays: 31\n");
            break;
        case 3:
            printf("Month: March\nDays: 31\n");
            break;
        case 5:
            printf("Month: May\nDays: 31\n");
            break;
        case 7:
            printf("Month: July\nDays: 31\n");
            break;
        case 8:
            printf("Month: August\nDays: 31\n");
            break;
        case 10:
            printf("Month: October\nDays: 31\n");
            break;
        case 12:
            printf("Month: December\nDays: 31\n");
            break;

        // Months with 30 days
        case 4:
            printf("Month: April\nDays: 30\n");
            break;
        case 6:
            printf("Month: June\nDays: 30\n");
            break;
        case 9:
            printf("Month: September\nDays: 30\n");
            break;
        case 11:
            printf("Month: November\nDays: 30\n");
            break;

        // Special case: February
        case 2:
            printf("Month: February\nDays: 28 or 29 (depending on Leap Year)\n");
            break;

        // Catch out-of-range inputs
        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
