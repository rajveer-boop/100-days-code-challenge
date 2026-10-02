#include <stdio.h>
#include <math.h>

int is_perfect_number(int num) {
    // Perfect numbers must be positive integers greater than 1
    if (num <= 1) {
        return 0; // False
    }

    // 1 is always a proper divisor for any number greater than 1
    int divisor_sum = 1;
    
    // Find the square root of the number
    int square_root = (int)sqrt(num);
    
    // Loop from 2 up to the square root
    for (int i = 2; i <= square_root; i++) {
        if (num % i == 0) {
            divisor_sum += i;
            
            // If the divisors are distinct, add the matching paired divisor
            if (i != (num / i)) {
                divisor_sum += (num / i);
            }
        }
    }
    
    // Return 1 (true) if the sum matches the number, otherwise 0 (false)
    return (divisor_sum == num);
}

int main() {
    int user_input;
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &user_input) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    if (is_perfect_number(user_input)) {
        printf("✨ %d is a Perfect Number!\n", user_input);
    } else {
        printf("❌ %d is NOT a Perfect Number.\n", user_input);
    }
    
    return 0;
}
