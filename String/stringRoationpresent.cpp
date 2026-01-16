#include<bits/stdc++.h>
using namespace std;

// P: Check if one string is rotation of another
// TC: O(n)
// SC: O(n)

int main(){
    string s1 = "abcd";
    string s2 = "cdab";

    if(s1.size() != s2.size()){
        cout << "Not Rotation";
        return 0;
    }

    string temp = s1 + s1;

    if(temp.find(s2) != string::npos)
        cout << "Rotation";
    else
        cout << "Not Rotation";
}
