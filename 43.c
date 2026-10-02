#include <stdio.h>

// Function to calculate the factorial of a single digit
long long get_factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is a strong number
int is_strong_number(int num) {
    // Negative numbers are not considered strong numbers
    if (num < 0) return 0; 

    int original_num = num;
    long long factorial_sum = 0;

    // Extract each digit, calculate its factorial, and add it to the sum
    while (num > 0) {
        int digit = num % 10;
        factorial_sum += get_factorial(digit);
        num /= 10; // Remove the last digit
    }

    // Return 1 (True) if the sum matches the original number, else 0 (False)
    return (factorial_sum == original_num);
}

int main() {
    int user_input;

    printf("Enter a number: ");
    if (scanf("%d", &user_input) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (is_strong_number(user_input)) {
        printf("✨ %d is a Strong Number!\n", user_input);
    } else {
        printf("❌ %d is NOT a Strong Number.\n", user_input);
    }

    return 0;
}
