#include<bits/stdc++.h>
using namespace std;

// P: Find the first non-repeating character in a string
// TC: O(n)
// SC: O(1)

int main(){
    string s = "aabbccd";
    unordered_map<char,int> mp;

    for(char c : s){
        mp[c]++;
    }

    char ans = '\0';

    for(char c : s){
        if(mp[c] == 1){
            ans = c;
            break;
        }
    }

    if(ans == '\0')
        cout << -1;
    else
        cout << ans;

    return 0;
}
