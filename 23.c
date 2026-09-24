#include <stdio.h>

int main() {
    int daysLate;
    double fine = 0.0;

    // Prompt user for input
    printf("Enter the number of days late: ");
    if (scanf("%d", &daysLate) != 1) {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }

    // Validation: Late days cannot be negative
    if (daysLate < 0) {
        printf("Error: Days late cannot be negative.\n");
        return 1;
    }

    // Calculate fine based on progressive criteria
    if (daysLate == 0) {
        printf("\nNo fine. Book returned on time!\n");
        return 0;
    }
    else if (daysLate > 30) {
        // Condition 4: More than 30 days
        printf("\nStatus: Membership Cancelled!\n");
        printf("Reason: Book returned more than 30 days late.\n");
        return 0;
    }
    else if (daysLate <= 5) {
        // Condition 1: First 5 days (1 to 5)
        fine = daysLate * 2.0;
    }
    else if (daysLate <= 10) {
        // Condition 2: Next 5 days (6 to 10)
        // First 5 days @ ₹2 + Remaining days @ ₹4
        fine = (5 * 2.0) + ((daysLate - 5) * 4.0);
    }
    else {
        // Condition 3: Next 20 days (11 to 30)
        // First 5 days @ ₹2 + Next 5 days @ ₹4 + Remaining days @ ₹6
        fine = (5 * 2.0) + (5 * 4.0) + ((daysLate - 10) * 6.0);
    }

    // Display total fine amount
    printf("\nTotal Fine Amount: ₹%.2f\n", fine);

    return 0;
}
