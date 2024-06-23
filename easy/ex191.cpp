#include <iostream>

int hammingWeight(int n) {
    int counter = 0;

    while(n != 0){
        if((n & 1) == 1){
            counter++;
        }
        n >>= 1;
    }
    return counter;     
}

int main(){
    int n = 2147483645;
    int res = hammingWeight(n);
    
    std::cout << res << "\n";
}