#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix_a = {
        {1, 2, 3},
        {4, 5, 6}
    };

    std::vector<std::vector<int>> matrix_b = {
        {9, 8, 7},
        {6, 5, 4}
    };

    int rows = matrix_a.size();
    int cols = matrix_a[0].size();

    // Initialize result matrix with the same dimensions
    std::vector<std::vector<int>> result(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }

    // Print the result
    std::cout << "Sum Matrix:\n";
    for (const auto& row : result) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
    // Output:
    // 10 10 10 
    // 10 10 10 

    return 0;
}
