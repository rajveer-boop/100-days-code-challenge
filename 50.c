#include <stdio.h>

int main() {
    int i, j, k;
    
    // Outer loop controls the number of rows (5 rows down to 1)
    for (i = 5; i >= 1; i--) {
        
        // Loop 1: Prints the leading spaces
        // Row 1 gets 0 spaces, Row 2 gets 1 space, etc.
        for (j = 5; j > i; j--) {
            printf(" ");
        }
        
        // Loop 2: Prints the stars (*)
        // The number of stars matches the current value of 'i'
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        
        printf("\n"); // Moves to the next line
    }
    
    return 0;
}
