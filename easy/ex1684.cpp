#include <iostream>
#include <vector>
#include <string>

int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
    int wordMatchCount = 0;
    int totalCount = 0;

    for(const std::string &word : words){
        for(const char letter : word){
            for(const char allowedLetter : allowed){
                if(letter == allowedLetter){
                    wordMatchCount++;
                    break;
                }
            }
        }
        if(wordMatchCount == word.size()){
                totalCount++;
            }
            wordMatchCount = 0;
    }
    return totalCount;
}

int main(){
    std::string allowed = "cad";
    std::vector<std::string> words {"cc","acd","b","ba","bac","bad","ac","d"};
    int res = countConsistentStrings(allowed, words);
    std::cout << res << "\n";
}