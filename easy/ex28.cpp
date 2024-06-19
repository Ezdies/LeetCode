#include <iostream>
#include <string>

int strStr(std::string haystack, std::string needle) {
    return haystack.find(needle) != std::string::npos ? haystack.find(needle) : -1;     
}

int main(){

    std::string haystack = "sadbutsad"; 
    std::string needle = "sad";
    int res = strStr(haystack, needle);
    std::cout << res << "\n";
    
}