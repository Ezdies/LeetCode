#include <iostream>

int sumOfMultiples(int n) {
    int sum = 0;

    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int n = 7;
    int res = sumOfMultiples(n);
    std::cout << res << '\n';
}