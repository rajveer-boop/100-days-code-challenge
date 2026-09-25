#include <stdio.h>

int main() {
    int n, i;
    int current_odd = 1;
    int sum = 0;

    // 1. Get the value of n from the user
    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);

    // Safety check for positive input
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    // 2. Loop n times to find and add the odd numbers
    for (i = 1; i <= n; i++) {
        sum += current_odd;          // Add the current odd number to the running sum
        current_odd += 2;            // Move to the next odd number
    }

    // 3. Print the final result
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    
    // Quick math formula validation check (n * n)
    printf("(Formula Verification: %d * %d = %d)\n", n, n, n * n);

    return 0;
}
