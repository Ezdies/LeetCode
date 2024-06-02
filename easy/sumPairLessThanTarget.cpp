#include <iostream>
#include <vector>
#include <algorithm>

int countPairs(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    int i = 0;
    int j = nums.size() - 1;
    int counter = 0;

    while (i < j) {
        if (nums[i] + nums[j] < target) {
            counter += (j - i);
            i++;
        } else {
            j--;
        }
    }

    return counter;
}

int main() {
    std::vector<int> nums = {-1,1,2,3,1};
    int target = 2;
    std::cout << "Number of pairs: " << countPairs(nums, target) << std::endl;
    return 0;
}
