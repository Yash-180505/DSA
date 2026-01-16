#include<bits/stdc++.h>
using namespace std;

// P: Check whether an array is sorted in ascending order
// TC: O(n)
// SC: O(1)

int main(){
    vector<int> arr = {1,4,2,3,5};
    int n = arr.size();
    bool isSorted = true;

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;
        }
    }

    if(isSorted)
        cout << "Sorted";
    else
        cout << "Not Sorted";
}
