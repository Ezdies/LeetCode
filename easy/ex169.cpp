#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

void printMap(std::map<int, int> &myMap){
for(const auto &[num, occur] : myMap){
std::cout << num << " " << occur << "\n";
}
}

int majorityElement(std::vector<int>& nums) {
std::map<int, int> occurMap;


for(const int &num : nums){
    occurMap[num]++;
}
int maxElem = std::max_element(occurMap.begin(), occurMap.end(),[](const std::pair<int, int>&a, const std::pair<int, int> &b){
return a.second < b.second;
})->first;
return maxElem;
}

int main(){
std::vector<int> nums {2,2,1,1,1,2,2};
int res = majorityElement(nums);

std::cout << res << "\n";
}