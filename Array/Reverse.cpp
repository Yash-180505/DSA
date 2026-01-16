#include<bits/stdc++.h>
using namespace std;

// P: Reverse an array in-place
// TC: O(n)
// SC: O(1)

int main(){
    vector<int> arr = {1,4,2,3,5};
    
    int i = 0;
    int j = arr.size() - 1;

    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(int x : arr){
        cout << x << " ";
    }
}
