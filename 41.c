#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, original_num, first_digit, last_digit, digits_count, swapped_num;
    int middle_part, sign;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    original_num = num;

    // Handle single-digit numbers
    if (abs(num) < 10) {
        printf("Number after swapping first and last digit: %d\n", original_num);
        return 0;
    }

    // Keep track of the sign for negative numbers
    sign = (num < 0) ? -1 : 1;
    num = abs(num);

    // 1. Find the last digit
    last_digit = num % 10;

    // 2. Find total digits minus 1
    digits_count = (int)log10(num);

    // 3. Find the first digit
    first_digit = num / (int)pow(10, digits_count);

    // 4. Extract the middle part of the number
    // Remove the first digit using modulo, then remove the last digit using division
    middle_part = (num % (int)pow(10, digits_count)) / 10;

    // 5. Reconstruct the number with swapped digits
    swapped_num = (last_digit * (int)pow(10, digits_count)) + (middle_part * 10) + first_digit;
    
    // Restore the original sign
    swapped_num *= sign;

    printf("Number after swapping first and last digit: %d\n", swapped_num);

    return 0;
}
