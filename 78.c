#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = matrix.size();
    int diagonal_sum = 0;

    // Iterate through the main diagonal where row == col
    for (int i = 0; i < n; ++i) {
        diagonal_sum += matrix[i][i];
    }

    std::cout << "Sum of main diagonal: " << diagonal_sum << std::endl;
    // Output: Sum of main diagonal: 15

    return 0;
}
