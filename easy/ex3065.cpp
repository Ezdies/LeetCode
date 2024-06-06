#include <iostream>
#include <vector>
#include <algorithm>

int minOperations(std::vector<int>& nums, int k) {
    std::sort(nums.begin(), nums.end());

    int counter = 0;
    int n = 0;

    for(const int num : nums){
        if(num >= k){

            break;
        }
        counter++;
    }

    return counter;       
}

int main(){
    std::vector<int> nums {2,11,10,1,3};
    int k = 10;

    int res = minOperations(nums, k);

    std::cout << res << "\n";
}