#include<bits/stdc++.h>
using namespace std;

// P: Find missing number from 1 to N
// TC: O(n)
// SC: O(1)

int main(){
    vector<int> arr = {1,2,4,5};
    int N = arr.size() + 1;

    int sum = N * (N + 1) / 2;

    for(int x : arr){
        sum -= x;
    }

    cout << sum;
}
