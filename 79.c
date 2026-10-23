#include <iostream>
#include <vector>

std::vector<int> findDiagonalOrder(const std::vector<std::vector<int>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return {};
    
    int rows = matrix.size();
    int cols = matrix[0].size();
    std::vector<int> result;
    result.reserve(rows * cols);
    
    int r = 0, c = 0;
    int direction = 1; // 1 for up-right, -1 for down-left
    
    while (result.size() < rows * cols) {
        result.push_back(matrix[r][c]);
        
        if (direction == 1) {
            // Moving Up-Right
            if (c == cols - 1) {
                r++;
                direction = -1;
            } else if (r == 0) {
                c++;
                direction = -1;
            } else {
                r--;
                c++;
            }
        } else {
            // Moving Down-Left
            if (r == rows - 1) {
                c++;
                direction = 1;
            } else if (c == 0) {
                r++;
                direction = 1;
            } else {
                r++;
                c--;
            }
        }
    }
    
    return result;
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::vector<int> traversal = findDiagonalOrder(matrix);
    
    std::cout << "Diagonal Traversal: ";
    for (int val : traversal) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    // Output: Diagonal Traversal: 1 2 4 7 5 3 6 8 9 

    return 0;
}
