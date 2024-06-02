#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void printRes(std::vector<int>& indices){
    for(const int indx : indices){
        std::cout << indx << " ";
    }
}

std::vector<int> findWordsContaining(std::vector<std::string>& words, char x) {
        std::vector<int> res;
        for(int i = 0; const std::string &word : words){
            if(std::find(word.begin(), word.end(), x) != word.end()){
                res.push_back(i);
            }
            i++;
        }
    return res;
}

int main(){
    std::vector<std::string> words {"leet","code"};
    char x = 'e';
    auto res = findWordsContaining(words, x);

    printRes(res);
}