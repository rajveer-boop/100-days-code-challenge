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
        // Calculate numerator: 2, 4, 6, 8...
        double numerator = 2.0 * i;
        
        // Calculate denominator: 3, 7, 11, 15...
        double denominator = (4.0 * i) - 1.0;
        
        // Accumulate the fraction value into the total sum
        sum += (numerator / denominator);
    }

    // Print the final sum up to 6 decimal places
    printf("The sum of the series up to %d terms is: %.6f\n", n, sum);

    return 0;
}
