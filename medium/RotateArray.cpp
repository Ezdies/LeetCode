#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    void rotate(std::vector<int> &nums, int k)
    {   
        k = k % nums.size();
        std::rotate(nums.rbegin(), nums.rbegin() + k, nums.rend());
    }

    // void print(const std::vector<int> &nums)
    // {
    //     std::for_each(nums.begin(), nums.end(), [](const int num)
    //                   { std::cout << num << " "; });
    // }
};

// int main()
// {
//     std::vector<int> nums{1, 2, 3, 4, 5, 6, 7};
//     int k = 3;
//     Solution solution;
//     solution.rotate(nums, k);
//     solution.print(nums);
// }