#include <iostream>
#include <vector>

bool isSymmetric(const std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    if (rows == 0) return true;
    int cols = matrix[0].size();

    // A matrix must be square to be symmetric
    if (rows != cols) {
        return false;
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = i + 1; j < cols; ++j) {
            // Compare element at (i, j) with element at (j, i)
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };

    if (isSymmetric(matrix)) {
        std::cout << "The matrix is symmetric.\n";
    } else {
        std::cout << "The matrix is NOT symmetric.\n";
    }
    // Output: The matrix is symmetric.

    return 0;
}
