#include <iostream>
#include <vector>
#include <unordered_set>

bool areDiagonalDistinct(const std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    if (rows == 0) return true;
    int cols = matrix[0].size();

    // A matrix must be square
    if (rows != cols) {
        return false; 
    }

    std::unordered_set<int> seen;

    for (int i = 0; i < rows; ++i) {
        int val = matrix[i][i]; // Main diagonal element
        
        // If the element is already in the set, it's a duplicate
        if (seen.count(val)) {
            return false;
        }
        seen.insert(val);
    }

    return true; // All elements were unique
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    if (areDiagonalDistinct(matrix)) {
        std::cout << "The diagonal elements are distinct.\n";
    } else {
        std::cout << "The diagonal elements are NOT distinct.\n";
    }
    // Output: The diagonal elements are distinct.

    return 0;
}
