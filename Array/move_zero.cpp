#include<bits/stdc++.h>
using namespace std;

// P: Move all zeros to the end of array while maintaining order
// TC: O(n)
// SC: O(1)

int main(){
    vector<int> arr = {0,1,0,3,12};
    int n = arr.size();

    int j = 0;  

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }

    while(j < n){
        arr[j] = 0;
        j++;
    }

    for(int x : arr){
        cout << x << " ";
    }
}
