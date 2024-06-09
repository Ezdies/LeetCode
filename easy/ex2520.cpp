#include <iostream>

int countDigits(int num) {
    int counter = 0;
    int origNumber = num;

    while(num > 0){
        int digit = num % 10;
        if(origNumber % digit == 0){
            counter++;
        }
        num /= 10;
    }
    return counter;
}

int main(){
    int num = 121;
    int res = countDigits(num);
    std::cout << res << "\n";
}