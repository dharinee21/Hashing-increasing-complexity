//Problem: Given two strings, determine whether they are anagrams.

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string &strX, string &strY){
    sort(strX.begin(), strX.end());
    sort(strY.begin(), strY.end());
    if(strX.compare(strY) == 0){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    string X = "listen";
    string Y = "silent";
    bool res = isAnagram(X, Y);
    cout<< "The result is: " <<res <<endl;
    
    return 0;
}
