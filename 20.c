#include <stdio.h>

int main() {
    int dayNumber;

    // Prompt user for input
    printf("Enter a number (1-7): ");
    if (scanf("%d", &dayNumber) != 1) {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }

    // Determine the day of the week using switch-case
    switch (dayNumber) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            // Handles any integer outside the 1-7 range
            printf("Invalid input! Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}
