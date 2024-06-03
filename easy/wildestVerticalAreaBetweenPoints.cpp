#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

void printVector(std::vector<std::vector<int>>& points){
    for(const auto &x : points){
        for(const auto y : x){
            std::cout << y << " ";
        }
        std::cout << "\n";
    }
}

int maxWidthOfVerticalArea(std::vector<std::vector<int>>& points) {
    std::sort(points.begin(), points.end(), [](const std::vector<int> &a, const std::vector <int> &b){ return a[0] < b[0];});
    int n = points.size();

    int maxi = 0;

    for(int i = 0; i < n - 1; i++){
        maxi = std::max(maxi, points[i + 1][0] - points[i][0]); 
    }
    return maxi;
}

int main(){
    std::vector<std::vector<int>> points {{8,7},{9,9},{7,4},{9,7}};
    //std::vector<std::vector<int>> points {{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}};
    printVector(points);
    std::cout << "Result: " << maxWidthOfVerticalArea(points) << "\n";
}