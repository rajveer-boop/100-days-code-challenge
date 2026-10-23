#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix_a = {
        {1, 2, 3},
        {4, 5, 6}
    };

    std::vector<std::vector<int>> matrix_b = {
        {7, 8},
        {9, 1},
        {2, 3}
    };

    int rows_a = matrix_a.size();
    int cols_a = matrix_a[0].size();
    int rows_b = matrix_b.size();
    int cols_b = matrix_b[0].size();

    if (cols_a != rows_b) {
        std::cout << "Error: Columns of A must match rows of B.\n";
        return 1;
    }

    // Initialize result matrix of size rows_a x cols_b with zeros
    std::vector<std::vector<int>> result(rows_a, std::vector<int>(cols_b, 0));

    // Perform matrix multiplication
    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < cols_b; ++j) {
            for (int k = 0; k < cols_a; ++k) {
                result[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }

    // Print the result
    std::cout << "Product Matrix:\n";
    for (const auto& row : result) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
    // Output:
    // 31 19 
    // 85 55 

    return 0;
}
