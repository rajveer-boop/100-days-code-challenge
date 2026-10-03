#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    bool is_prime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    // Loop through numbers from 2 up to n (1 is not prime)
    for (i = 2; i <= n; i++) {
        is_prime = true;

        // Check if 'i' is divisible by any number up to its square root
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false; // Found a factor, not prime
                break;
            }
        }

        // If no factors were found, the number is prime
        if (is_prime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
