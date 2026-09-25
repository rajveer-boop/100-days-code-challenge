#include <stdio.h>

int main() {
    int num, originalNum, remainder;
    int reversedNum = 0;

    // 1. Get the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Save the original value for display purposes

    // 2. Loop to reverse the digits
    while (num != 0) {
        remainder = num % 10;                  // Get the last digit (e.g., 123 % 10 = 3)
        reversedNum = reversedNum * 10 + remainder; // Append it to the reversed number
        num /= 10;                             // Remove the last digit from num (e.g., 123 / 10 = 12)
    }

    // 3. Print the reversed result
    printf("Original number: %d\n", originalNum);
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
