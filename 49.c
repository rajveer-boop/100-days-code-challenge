#include <stdio.h>

int main() {
    int i, j;
    
    // Outer loop controls the starting number for each row
    for (i = 5; i >= 1; i--) {
        // Inner loop prints numbers from 'i' up to 5
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Moves to the next line after each row
    }
    
    return 0;
}
