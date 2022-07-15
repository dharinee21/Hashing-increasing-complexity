//Problem: Given two strings, determine whether they are anagrams
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool isAnagram(string &strx, string &stry){
    if(strx.length() != stry.length()){
        return false;
    }
    
    unordered_map<int, int> freqcharX;
    unordered_map<int, int> freqcharY;
    
    for(char i: strx){
        freqcharX[i]++;
    }
    
    for(char j: stry){
        freqcharY[j]++;
    }
    
    if(freqcharX == freqcharY){
        return true;
    }
    else {return false;}
}

int main() {
    string x = "abcd";
    string y = "dabgy";
    
    bool res = isAnagram(x,y);
    if (res==1){
        cout<<"\n The strings are anagrams "<<endl;
    }
    else{
        cout<< "\n The strings are not anagrams"<<endl;
    }

    return 0;
}

//The time complexity of this solution is O(n) if we assume that constant-time operations for hash table