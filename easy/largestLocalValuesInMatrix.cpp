#include <iostream>
#include <vector>
#include <algorithm>

void printRes(std::vector<std::vector<int>> &result){
      for (const auto& row : result) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
}

int largestIn3x3Matrix(const std::vector<std::vector<int>>& grid, int startRow, int startCol) {
    int maxi = 0;
    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            maxi = std::max(maxi, grid[i][j]);
        }
    }
    return maxi;
}

std::vector<std::vector<int>> largestLocal(std::vector<std::vector<int>>& grid) {
    int n = grid.size();
    std::vector<std::vector<int>> res(n - 2, std::vector<int>(n - 2));

    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n - 2; j++) {
            res[i][j] = largestIn3x3Matrix(grid, i, j);
        }
    }

    return res;
}

int main() {
    std::vector<std::vector<int>> grid = {
        {9, 9, 8, 1},
        {5, 6, 2, 6},
        {8, 2, 6, 4},
        {6, 2, 2, 2}
    };

    std::vector<std::vector<int>> result = largestLocal(grid);

    printRes(result);

    return 0;
}
