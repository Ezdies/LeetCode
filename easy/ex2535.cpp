#include <iostream>
#include <vector>
#include <cmath>

int sumOfDigits(int num){
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int differenceOfSum(std::vector<int>& nums) {
    int numberSum = 0;
    int digitSum = 0;

    for(const int num : nums){
        numberSum += num;
        digitSum += sumOfDigits(num);
    }
    return std::abs(numberSum - digitSum);     
}

int main(){
    std::vector<int> nums {1,15,6,3};
    int res = differenceOfSum(nums);

    std::cout << res << "\n";
}