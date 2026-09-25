#include <stdio.h>

int main() {
    int num, originalNum, remainder;
    int reversedNum = 0;

    // 1. Get the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Save the original value before modifying the number in the loop
    originalNum = num; 

    // Negative numbers are typically not considered palindromes due to the minus sign
    if (num < 0) {
        printf("%d is NOT a palindrome number.\n", originalNum);
        return 0;
    }

    // 2. Reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // 3. Compare the reversed number with the original number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is NOT a palindrome number.\n", originalNum);
    }

    return 0;
}
