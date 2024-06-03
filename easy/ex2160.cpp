#include <iostream>
#include <string>
#include <algorithm>

int minimumSum(int num) {
    
    auto numString = std::to_string(num);
    std::sort(numString.begin(), numString.end());
    auto num1String = std::string("") + numString[0] + numString[2];
    auto num2String = std::string("") + numString[1] + numString[3];

    return std::stoi(num1String) + std::stoi(num2String);
}

int main(){
    int num = 2687;
    int res = minimumSum(num);

    std::cout << res << "\n";
}