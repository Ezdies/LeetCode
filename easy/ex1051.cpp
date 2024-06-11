#include <iostream>
#include <vector>
#include <algorithm>

int heightChecker(std::vector<int>& heights) {
    auto original = heights;
    std::sort(heights.begin(), heights.end());
    int counter = 0;
    int n = heights.size();

    for(int i = 0; i < n; i++){
        if(heights[i] != original[i]){
            counter++;
        }
    }
    return counter;  
}

int main(){
    std::vector<int> heights {1,1,4,2,1,3};
    int res = heightChecker(heights);
    std::cout << res << "\n";
}