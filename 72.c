#include <stdio.h>

#define ROWS 3
#define COLS 3

int getMatrixSum(int matrix[ROWS][COLS]) {
    int totalSum = 0;

    // Traverse through each row and column
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            totalSum += matrix[i][j];
        }
    }

    return totalSum;
}

int main() {
    int myMatrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = getMatrixSum(myMatrix);
    
    printf("The sum of all elements in the matrix is: %d\n", sum); 
    // Output: 45 (1+2+3+4+5+6+7+8+9)

    return 0;
}
