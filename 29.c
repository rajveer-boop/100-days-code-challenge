#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    // 1. Get input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 2. Safety check for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number does not exist.\n");
        return 1;
    }

    // 3. Loop to calculate factorial
    // Note: 0! is mathematically equal to 1, which this loop safely handles by skipping
    for (i = 1; i <= n; i++) {
        factorial *= i; // Multiply the running total by the current loop index
    }

    // 4. Print the final result
    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
