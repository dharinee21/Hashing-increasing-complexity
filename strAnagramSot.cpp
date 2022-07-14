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
    if (res==1){
        cout<<"\n The strings are anagrams "<<endl;
    }
    else{
        cout<< "\n The strings are not anagrams"<<endl;
    }
    
    return 0;
}