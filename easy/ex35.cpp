#include <iostream>
#include <algorithm>
#include <vector>

int searchInsert(std::vector<int>& nums, int target) {
    auto it = std::lower_bound(nums.begin(), nums.end(), target);
    return std::distance(nums.begin(), it);
    }

int main(){
    std::vector<int> nums {1,3,5,6};
    int target = 7;
    int res = searchInsert(nums, target);
    std::cout << res << "\n";
}