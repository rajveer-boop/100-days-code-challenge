#include <stdio.h>
#include <stdlib.h> // For abs()
#include <stdbool.h>

int main() {
    int number;
    int product = 1;
    bool hasOddDigit = false;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Convert negative numbers to positive to process digits correctly
    int temp = abs(number);

    while (temp > 0) {
        int digit = temp % 10; // Extract the last digit

        // Check if the digit is odd
        if (digit % 2 != 0) {
            product *= digit;
            hasOddDigit = true;
        }

        temp /= 10; // Remove the last digit
    }

    // Print result based on whether any odd digits were found
    if (hasOddDigit) {
        printf("The product of the odd digits of %d is: %d\n", number, product);
    } else {
        printf("The number %d contains no odd digits. Product is: 0\n", number);
    }

    return 0;
}
