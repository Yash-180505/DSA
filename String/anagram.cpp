#include<bits/stdc++.h>
using namespace std;

// P: Check if two strings are anagrams
// TC: O(n)
// SC: O(1)

int main(){
    string s1 = "listen";
    string s2 = "silent";

    if(s1.size() != s2.size()){
        cout << "Not Anagram";
        return 0;
    }

    unordered_map<char,int> mp;

    for(char c : s1){
        mp[c]++;
    }

    for(char c : s2){
        if(mp.count(c) == 0){
            cout << "Not Anagram";
            return 0;
        }
        mp[c]--;
    }

    bool val = true;
    for(auto it : mp){
        if(it.second != 0){
            val = false;
            break;
        }
    }

    if(val) cout << "Anagram";
    else cout << "Not Anagram";
}
