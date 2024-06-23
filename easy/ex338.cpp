#include <iostream>
#include <vector>

void printVector(const std::vector<int> &arr){
    for(const int &num : arr){
        std::cout << num << "\n";
    }
}

int countOnes(int n) {
    int counter = 0;

    while(n != 0){
        if((n & 1) == 1){
            counter++;
        }
        n >>= 1;
    }
    return counter;     
}

std::vector<int> countBits(int n) {
    std::vector<int> res;
    for(int i = 0; i <= n; i++){
        res.push_back(countOnes(i));
    }
    return res;       
}

int main(){
    int n = 5;
    auto res = countBits(n);
    printVector(res);
}