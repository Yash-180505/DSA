#include<bits/stdc++.h>
using namespace std;

// P: Find indices of two numbers whose sum equals target (Two Sum)
// TC: O(n)
// SC: O(n)

int main(){
    vector<int> arr = {2,7,6,15};
    int target = 9;

    unordered_map<int,int> mp;

    for(int i = 0; i < arr.size(); i++){
        int rem = target - arr[i];

        if(mp.count(rem)){
            cout << mp[rem] << " " << i;
            break;
        }
        mp[arr[i]] = i;
    }

    return 0;
}
