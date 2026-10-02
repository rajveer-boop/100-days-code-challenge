#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Loop through each term from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            // The first term is explicitly 1
            sum += 1.0; 
        } else {
            // General formula for subsequent terms: (2i - 1) / (2i)
            // Explicit typecasting to double ensures fractional division
            double numerator = (2 * i) - 1;
            double denominator = 2 * i;
            sum += numerator / denominator;
        }
    }

    // Print the result up to 4 decimal places
    printf("The sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
