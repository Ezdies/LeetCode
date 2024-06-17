#include <iostream>
#include <algorithm>
#include <vector>

int countCompleteDayPairs(std::vector<int>& hours) {
    
    int n = hours.size();
    int counter = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if((hours[i] + hours[j]) % 24 == 0){
                counter++;
            }
        }
    }
    return counter;
}

int main(){
    std::vector<int> hours {72,48,24,3};
    int res = countCompleteDayPairs(hours);
    std::cout << res << "\n";
}