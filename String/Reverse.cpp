#include<bits/stdc++.h>
using namespace std;

// P: Reverse a string using two pointers
// TC: O(n)
// SC: O(1)

int main(){
    string s = "yash";
    
    int i = 0;
    int j = s.size() - 1;

    while(i < j){
        swap(s[i], s[j]);
        i++;
        j--;
    }

    cout << s;
}
