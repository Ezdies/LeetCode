#include <iostream>
#include <vector>

void printMatrix(const std::vector<std::vector<int>> &matrix) {
    for (const auto &row : matrix) {
        for (const int number : row) {
            std::cout << number << " ";
        }
        std::cout << "\n";
    }
}

std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> result;

    if (numRows <= 0) return result;

    result.push_back({1});
    for (int i = 1; i < numRows; i++) {
        std::vector<int> row;
        row.push_back(1);
        for (int j = 1; j < i ; j++) {
            row.push_back(result[i-1][j-1] + result[i-1][j]);
        }
        row.push_back(1);
        result.push_back(row);
    }
    return result;
}

int main() {
    int numRows = 5;
    auto res = generate(numRows);
    printMatrix(res);
    return 0;
}
