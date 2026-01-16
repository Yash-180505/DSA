#include<bits/stdc++.h>
using namespace std;

// P: Remove duplicates from sorted array and return new length
// TC: O(n)
// SC: O(1)

int main(){
    vector<int> arr = {1,1,2,2,3,4,4};
    
    int j = 0;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }

    cout << j+1 << endl;
    
    for(int i = 0; i <= j; i++){
        cout << arr[i] << " ";
    }
}
