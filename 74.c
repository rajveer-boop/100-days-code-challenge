#include <iostream>
#include <vector>

int main() {
    // Original 2x3 matrix
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();

    // Initialize the transpose matrix with swapped dimensions (cols x rows)
    std::vector<std::vector<int>> transpose(cols, std::vector<int>(rows));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    std::cout << "Transposed Matrix:\n";
    for (const auto& row : transpose) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
    // Output:
    // 1 4 
    // 2 5 
    // 3 6 

    return 0;
}
