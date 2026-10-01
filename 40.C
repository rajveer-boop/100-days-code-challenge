#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 100

int main() {
    char binary[MAX_LIMIT];

    printf("Enter a binary number: ");
    if (scanf("%99s", binary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Validate the input string to ensure it only contains 0s and 1s
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Error: Input is not a valid binary number.\n");
            return 1;
        }
    }

    printf("Original Binary:  %s\n", binary);
    printf("1's Complement:   ");

    // Invert the bits: '0' becomes '1' and '1' becomes '0'
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}
