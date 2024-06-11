#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool isAcronym(std::vector<std::string>& words, std::string s) {
    int m = words.size();
    int n = s.size();

    if(m != n){
        return false;
    }

    for(int i = 0; i < m; i++){
        if(words[i].front() != s[i]){
            return false;
        }
    }
    return true;     
}

int main(){
    std::vector<std::string> words {"never","gonna","give","up","on","you"};
    std::string s = "ngguoy";
    bool res = isAcronym(words, s);

    std::cout << res << "\n";
}