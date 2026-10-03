#include <stdio.h>

int main() {
    int i, j, k;
    int total_rows = 4; // Number of rows in the upper half (including the middle row)

    // Part 1: Upper half of the diamond (Rows 1 to 4)
    for (i = 1; i <= total_rows; i++) {
        // Print leading spaces
        for (j = 1; j <= total_rows - i; j++) {
            printf(" ");
        }
        // Print stars (1, 3, 5, 7 stars)
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Part 2: Lower half of the diamond (Rows 3 down to 1)
    for (i = total_rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= total_rows - i; j++) {
            printf(" ");
        }
        // Print stars (5, 3, 1 stars)
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
