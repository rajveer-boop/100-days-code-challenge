#include <stdio.h>

int main() {
    int num, i;
    int started = 0; // Flag to skip printing unnecessary leading zeros

    // 1. Get the decimal number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Binary representation of %d is: ", num);

    // Handle the special case where the input number is exactly 0
    if (num == 0) {
        printf("0\n");
        return 0;
    }

    // 2. Loop through all bits of a standard 32-bit integer (from left to right)
    for (i = 31; i >= 0; i--) {
        // Shift the number right by 'i' positions and check if the last bit is 1 or 0
        int bit = (num >> i) & 1;

        if (bit == 1) {
            started = 1; // Found the first meaningful bit, start printing from here
        }

        if (started) {
            printf("%d", bit);
        }
    }
    printf("\n");

    return 0;
}
