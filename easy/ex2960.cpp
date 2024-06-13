#include <iostream>
#include <vector>

int countTestedDevices(std::vector<int>& batteryPercentages) {
    int devicesTested = 0;

    for(const int device : batteryPercentages){
        if(device - devicesTested > 0){
            devicesTested++;
        }
    }
    return devicesTested;  
}

int main(){
    std::vector<int> batteryPercentages {1,1,2,1,3};
    int res = countTestedDevices(batteryPercentages);

    std::cout << res << "\n";
}