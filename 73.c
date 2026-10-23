#include <iostream>
#include <vector>
#include <numeric> // for std::accumulate

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::vector<int> row_sums;

    for (const auto& row : matrix) {
        // Calculate the sum of elements in the current row
        int sum = std::accumulate(row.begin(), row.end(), 0);
        row_sums.push_back(sum);
    }

    // Print the results
    std::cout << "Row sums: ";
    for (int s : row_sums) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    // Output: Row sums: 6 15 24 

    return 0;
}
