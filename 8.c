#include <stdio.h>

int main() {
    long long n, total_sum;

    // Input the value of n
    printf("Enter a positive integer (n): ");
    scanf("%lld", &n);

    if (n < 1) {
        printf("Please enter a valid natural number (greater than 0).\n");
    } else {
        // Calculate sum using the formula (using long long to prevent overflow)
        total_sum = (n * (n + 1)) / 2;
        printf("The sum of the first %lld natural numbers is: %lld\n", n, total_sum);
    }

    return 0;
}
