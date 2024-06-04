#include <iostream>
#include <algorithm>
#include <vector>

void printRes(std::vector<int>& nums){
    for(const int num : nums){
        std::cout << num << " ";
    }
}

std::vector<int> numberGame(std::vector<int>& nums) {

    std::sort(nums.begin(), nums.end());
    const int n = nums.size();
    for(int i = 0; i < n - 1; i += 2){
        std::swap(nums[i], nums[i + 1]);
    }

    return nums;  
}

int main(){
    std::vector<int> nums {18,26,37,46,13,33,39,1,37,16};
    auto res = numberGame(nums);
    printRes(res);
    
}