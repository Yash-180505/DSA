#include<bits/stdc++.h>
using namespace std;

// P: Rotate array to the right by K positions
// TC: O(n)
// SC: O(1)

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int k = 2;

    
    int i = 0, j = n-1;
    while(i < j){
        swap(arr[i], arr[j]);
        i++; j--;
    }


    i = 0; j = k-1;
    while(i < j){
        swap(arr[i], arr[j]);
        i++; j--;
    }


    i = k; j = n-1;
    while(i < j){
        swap(arr[i], arr[j]);
        i++; j--;
    }

    for(int x : arr)
        cout << x << " ";
}
