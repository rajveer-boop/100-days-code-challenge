#include <stdio.h>
#include <stdlib.h>

int findMostFrequentDigit(long long num) {
    int frequency[10] = {0}; // Array to store counts of digits 0-9
    
    // Handle negative numbers by converting to absolute value
    num = llabs(num);
    
    // Handle the special case where the number itself is 0
    if (num == 0) {
        return 0;
    }
    
    // Extract digits and update their frequencies
    while (num > 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
    
    // Find the digit with the maximum frequency
    int max_digit = 0;
    int max_count = frequency[0];
    
    for (int i = 1; i < 10; i++) {
        if (frequency[i] > max_count) {
            max_count = frequency[i];
            max_digit = i;
        }
    }
    
    return max_digit;
}

int main() {
    long long num = 12233344;
    
    int most_frequent = findMostFrequentDigit(num);
    
    printf("The digit that occurs the most times in %lld is: %d\n", num, most_frequent);
    
    return 0;
}
