#include <iostream>
#include <algorithm>
#include <vector>

int numberOfEmployeesWhoMetTarget(std::vector<int>& hours, int target) {
    return std::count_if(hours.begin(), hours.end(), [target](int hour){ return hour >= target;}); 
}

int main(){
    std::vector<int> hours {0,1,2,3,4};
    int target = 2;
    int result = numberOfEmployeesWhoMetTarget(hours, target);
    std::cout << result << "\n";
}