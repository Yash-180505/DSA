#include<bits/stdc++.h>
using namespace std;

// P: Find longest common prefix among array of strings
// TC: O(n * m)
// SC: O(1)

int main(){
    vector<string> strs = {"flower","flow","flight"};

    string prefix = strs[0];

    for(int i = 1; i < strs.size(); i++){
        while(strs[i].find(prefix) != 0){
            prefix = prefix.substr(0, prefix.size()-1);
            if(prefix == ""){
                cout << -1;
                return 0;
            }
        }
    }

    cout << prefix;
}
