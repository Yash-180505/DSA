#include<bits/stdc++.h>
using namespace std;

// P: Check whether a string is palindrome
// TC: O(n)
// SC: O(1)

int main(){
    string s = "radar";
    
    int i = 0;
    int j = s.size() - 1;
    bool val = true;

    while(i < j){
        if(s[i] != s[j]){
            val = false;
            break;
        }
        i++;
        j--;
    }

    if(val) cout << "Palindrome";
    else cout << "Not Palindrome";
}
