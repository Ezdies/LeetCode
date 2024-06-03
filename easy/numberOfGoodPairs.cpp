#include <iostream>
#include <vector>

int numberOfPairs(std::vector<int>& nums1, std::vector<int>& nums2, int k) {
    int n = nums1.size();
    int m = nums2.size();

    int counter = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(nums1[i] % (nums2[j] * k) == 0){
                counter++;
            }
        }
    }
    return counter;
}

int main(){
    std::vector<int> nums1 {1,2,4,12};
    std::vector<int> nums2 {2,4};
    int k = 3;

    int res = numberOfPairs(nums1, nums2, k);
    std::cout << res << "\n";
}