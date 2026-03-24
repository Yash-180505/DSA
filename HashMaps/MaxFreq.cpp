#include <bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int>& arr) {

    unordered_map<int,int> mp;
    int maxFreq = 0;
    int maxAns = 0;

    for(int x : arr){
        mp[x]++;
        maxFreq = max(maxFreq, mp[x]);
    }

    for(int x : arr){
        if(mp[x] == maxFreq){
            return x;
        }
    }

    return -1;
}

int main() {

    vector<int> arr = {1,2,3,1,2};

    int ans = maxFrequency(arr);

    cout << "Element with maximum frequency: " << ans << endl;

    return 0;
}