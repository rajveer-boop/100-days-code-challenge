#include <stdio.h>

int main() {
    int i, j;
    
    // Part 1: Upper half of the pattern (1 to 9 stars)
    // i controls the number of stars: 1, 3, 5, 7, 9
    for (i = 1; i <= 9; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Part 2: Lower half of the pattern (7 down to 1 stars)
    // i controls the number of stars: 7, 5, 3, 1
    for (i = 7; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
