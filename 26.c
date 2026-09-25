#include <stdio.h>

int main() {
    int n, i;

    // 1. Ask the user for the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Validation check for positive limits
    if (n < 1) {
        printf("Please enter a positive integer greater than or equal to 1.\n");
        return 1;
    }

    // 2. Loop through and print each number from 1 to n
    printf("Numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n"); // Print a new line at the end

    return 0;
}
