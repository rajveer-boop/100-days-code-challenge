#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int even_count = 0;

    // 1. Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // 2. Loop from 1 to n to find and multiply even numbers
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) { // Check if the number is even
            product *= i;
            even_count++;
        }
    }

    // 3. Print the final result based on input values
    if (n < 2) {
        printf("There are no even numbers between 1 and %d to multiply.\n", n);
    } else {
        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    }

    return 0;
}
