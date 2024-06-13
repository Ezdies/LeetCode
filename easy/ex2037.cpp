#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int minMovesToSeat(std::vector<int>& seats, std::vector<int>& students) {
    std::sort(seats.begin(), seats.end());
    std::sort(students.begin(), students.end());
    int n = seats.size();

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += std::abs(students[i] - seats[i]);
    }
    return sum;  
}

int main(){
    std::vector<int> students {2,2,6,6};
    std::vector<int> seats {1,3,2,6};
    int res = minMovesToSeat(seats, students);
    std::cout << res << "\n";
}