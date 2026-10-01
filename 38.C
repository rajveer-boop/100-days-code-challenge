#include <stdio.h>
#include <stdlib.h> // For abs()

// Function to calculate the sum of digits
int getSumOfDigits(int num) {
    int sum = 0;

    // Convert negative numbers to positive to handle them correctly
    num = abs(num);

    while (num > 0) {
        sum += num % 10;  // Extract the last digit and add to sum
        num /= 10;        // Remove the last digit from the number
    }

    return sum;
}

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int result = getSumOfDigits(number);
    
    printf("The sum of digits of %d is: %d\n", number, result);

    return 0;
}
