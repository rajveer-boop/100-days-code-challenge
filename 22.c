#include <stdio.h>

int main() {
    double costPrice, sellingPrice;
    double amount, percentage;

    // Prompt user for input
    printf("Enter the Cost Price (CP): ");
    if (scanf("%lf", &costPrice) != 1) {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }

    printf("Enter the Selling Price (SP): ");
    if (scanf("%lf", &sellingPrice) != 1) {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }

    // Validation: Cost price must be greater than 0 to avoid division by zero
    if (costPrice <= 0) {
        printf("Error: Cost Price must be greater than 0 to calculate percentage.\n");
        return 1;
    }
    if (sellingPrice < 0) {
        printf("Error: Selling Price cannot be negative.\n");
        return 1;
    }

    // Determine Profit, Loss, or Break-Even
    if (sellingPrice > costPrice) {
        // Profit scenario
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;
        printf("\nResult: Profit\n");
        printf("Profit Amount: %.2f\n", amount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } 
    else if (costPrice > sellingPrice) {
        // Loss scenario
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;
        printf("\nResult: Loss\n");
        printf("Loss Amount: %.2f\n", amount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } 
    else {
        // Break-Even scenario (SP == CP)
        printf("\nResult: No Profit, No Loss (Break-Even)\n");
    }

    return 0;
}
