#include <stdio.h>

int main() {
    int rows = 5;
    int columns = 5;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop for columns (printing stars in a single row)
        for (int j = 1; j <= columns; j++) {
            printf("*");
        }
        
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}
