#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    // 1 and negative numbers are not prime
    if (num <= 1) {
        return false;
    }
    
    // 2 is the only even prime number
    if (num == 2) {
        return true;
    }
    
    // Exclude all other even numbers
    if (num % 2 == 0) {
        return false;
    }

    // Check odd factors up to the square root of the number (i * i <= num)
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false; // Found a factor, so it is composite
        }
    }

    return true; // No factors found, it is prime
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
