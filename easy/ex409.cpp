#include <iostream>
#include <map>
#include <string>
#include <cmath>

void printMap(std::map<char, int> &myMap){
    for(const auto &[letter, occur] : myMap){
        std::cout << letter << " " << occur << "\n";
    }
}

int longestPalindrome(const std::string& s) {
    std::map<char, int> charOccur;
    int sum = 0;
    bool hasOdd = false;

    for(char c : s) {
        charOccur[c]++;
    } 

    for(const auto& [letter, occur] : charOccur) {
        if(occur % 2 == 0) {
            sum += occur;
        } else {
            sum += occur - 1;
            hasOdd = true;
        } 
    }

    return hasOdd ? sum + 1 : sum;  
}

int main(){
    std::string s = "civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
    int res = longestPalindrome(s);
   // printMap(res);
    std::cout << res << "\n";
}
