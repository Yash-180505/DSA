#include<bits/stdc++.h>
using namespace std;

// P: Count occurrences of each character in a string
// TC: O(n)
// SC: O(1)

int main(){ 
    string s = "aabbccd";
    unordered_map<char,int> mp;

    for(char c : s){
        mp[c]++;
    }

    for(auto it : mp){
        cout << it.first << ":" << it.second << endl;
    }
}
