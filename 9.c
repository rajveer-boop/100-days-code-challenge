#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest, amount;

    // Input values from the user
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    // Simple Interest Calculation
    simple_interest = (principal * rate * time) / 100;

    // Compound Interest Calculation
    // Formula: P * (1 + R/100)^T - P
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    // Displaying the results
    printf("\n--- Results ---\n");
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}
