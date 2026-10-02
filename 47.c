#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop controls the row number
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop prints stars equal to the current row number (i)
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Move to the next line after completing the row
        printf("\n");
    }

    return 0;
}
