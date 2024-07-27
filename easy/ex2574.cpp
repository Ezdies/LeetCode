#include <iostream>
#include <vector>
#include <cmath>

void printVec(const std::vector<int> &arr){
    for(const int num : arr){
        std::cout << num << " ";
    }
}

std::vector<int> leftRightDifference(std::vector<int>& nums) {
    
    int n = nums.size();
    std::vector<int> leftSum(n);
    std::vector<int> right_sum(n);
    int lsum = 0;
    int rsum = 0;
    std::vector<int> result(n);

    for(int i = 0; i < n - 1; i++){
        lsum += nums[i];
        rsum += nums[n-1-i];
        leftSum[i+1] = lsum;
        right_sum[n-2-i] = rsum;
    }
    for(int i = 0; i < n; i++){
        result[i] += (abs(leftSum[i] - right_sum[i]));
    }
    return result;
}

int main(){
    std::vector<int> nums {10,4,8,3};
    auto res = leftRightDifference(nums);
    printVec(res);
}
