#include <stdio.h>

int main() {
    double units, totalBill = 0.0;

    // Prompt user for input
    printf("Enter the total units consumed: ");
    if (scanf("%lf", &units) != 1) {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }

    // Validation: Consumed units cannot be negative
    if (units < 0) {
        printf("Error: Units consumed cannot be negative.\n");
        return 1;
    }

    // Calculate bill based on progressive slab criteria
    if (units <= 100) {
        // Slab 1: First 100 units @ ₹5/unit
        totalBill = units * 5.0;
    }
    else if (units <= 200) {
        // Slab 2: Next 100 units (101 to 200) @ ₹7/unit
        // First 100 units @ ₹5 + Remaining units @ ₹7
        totalBill = (100 * 5.0) + ((units - 100) * 7.0);
    }
    else if (units <= 300) {
        // Slab 3: Next 100 units (201 to 300) @ ₹10/unit
        // First 100 @ ₹5 + Next 100 @ ₹7 + Remaining units @ ₹10
        totalBill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
    }
    else {
        // Slab 4: Above 300 units @ ₹12/unit
        // First 100 @ ₹5 + Next 100 @ ₹7 + Next 100 @ ₹10 + Remaining units @ ₹12
        totalBill = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
    }

    // Display the generated bill
    printf("\n--- Electricity Bill Statement ---\n");
    printf("Units Consumed: %.2f\n", units);
    printf("Total Amount Due: ₹%.2f\n", totalBill);

    return 0;
}
