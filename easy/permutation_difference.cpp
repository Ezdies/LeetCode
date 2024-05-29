#include <iostream>
#include <string>
#include <map>

int findPermutationDifference(std::string s, std::string t) {
    std::map<char, int> firstWordIndexes;
    std::map<char, int> secondWordIndexes;

    for(int index = 0; const char c : s){
        firstWordIndexes[c] = index;
        index++;
    }

    for(int index = 0; const char c : t){
        secondWordIndexes[c] = index;
        index++;
    }

    int res = 0;

    for(const auto &[c, index] : firstWordIndexes){
        res += abs(index - secondWordIndexes[c]);
    }
    return res;
}

int main(){
    std::string s = "abcde";
    std::string t = "edbac";

    int res = findPermutationDifference(s, t);
    std::cout << "Res: " << res << "\n"; 
}