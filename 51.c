#include <stdio.h>

int main() {
    int i, j, k;
    
    // Outer loop controls the starting number for each row
    for (i = 5; i >= 1; i--) {
        
        // Loop 1: Prints the leading spaces
        // Row 1 gets 4 spaces, Row 2 gets 3 spaces, etc.
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        
        // Loop 2: Prints the numbers from 'i' up to 5
        for (k = i; k <= 5; k++) {
            printf("%d", k);
        }
        
        printf("\n"); // Moves to the next line after each row
    }
    
    return 0;
}
