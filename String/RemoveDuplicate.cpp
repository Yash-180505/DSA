#include<bits/stdc++.h>
using namespace std;

// P: Remove all duplicate characters from a string
// TC: O(n)
// SC: O(1)

int main(){
    string s = "aabbccdd";
    vector<bool> seen(256, false);
    string ans = "";

    for(char c : s){
        if(!seen[c]){
            ans += c;
            seen[c] = true;
        }
    }

    cout << ans;
}
