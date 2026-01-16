#include<bits/stdc++.h>
using namespace std;

// P: Find the largest and second largest element in an array
// TC: O(n)
// SC: O(1)

int main(){
    vector<int> arr = {1,4,2,3,5};
    
    int maxVal = arr[0];
    for(int x : arr){
        if(x > maxVal){
            maxVal = x;
        }
    }

    int second_max = INT_MIN;
    for(int x : arr){
        if(x > second_max && x < maxVal){
            second_max = x;
        }
    }

    cout << maxVal << " " << second_max;
}
