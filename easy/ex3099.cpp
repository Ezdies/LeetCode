#include <iostream>

int sumOfDigits(int num){
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isHarshadNumber(int num){
    return num % sumOfDigits(num) == 0;
}

int sumOfTheDigitsOfHarshadNumber(int x) {
    return isHarshadNumber(x) ? sumOfDigits(x) : -1;        
}

int main(){
    int x = 18;
    int res = sumOfTheDigitsOfHarshadNumber(x);
    std::cout << res << "\n";
}