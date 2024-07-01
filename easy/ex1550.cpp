#include <iostream>
#include <vector>

bool areABCodd(int& a, int& b, int& c){
    return a % 2 == 1 && b % 2 == 1 && c % 2 == 1; 
}

bool threeConsecutiveOdds(std::vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n - 2; i++){
        if(areABCodd(arr[i] , arr[i + 1], arr[i + 2])){
            return true;
        }
    }
    return false;
}

int main(){
    std::vector<int> arr {1,2,34,3,4,5,7,23,12};
    bool res = threeConsecutiveOdds(arr);
    std::cout << res << "\n";
}