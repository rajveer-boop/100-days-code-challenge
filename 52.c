#include <stdio.h>

int main() {
    int i, j;
    // An array containing the number of stars to print in each block
    int pattern_sequence[] = {1, 3, 5, 3, 1};
    int total_blocks = 5;

    for (i = 0; i < total_blocks; i++) {
        // Print the stars vertically for the current block
        for (j = 0; j < pattern_sequence[i]; j++) {
            printf("*\n");
        }
        
        // Print a blank separator line after each block, except the last one
        if (i < total_blocks - 1) {
            printf("\n");
        }
    }

    return 0;
}
