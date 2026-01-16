#include<bits/stdc++.h>
using namespace std;

// P: Find maximum subarray sum and print the subarray
// TC: O(n)
// SC: O(1)

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    int maxSum = arr[0];
    int currSum = arr[0];

    int start = 0, end = 0, tempStart = 0;

    for(int i = 1; i < arr.size(); i++) {

        if(currSum < 0) {
            currSum = arr[i];
            tempStart = i;
        } else {
            currSum += arr[i];
        }

        if(currSum > maxSum) {
            maxSum = currSum;
            start = tempStart;
            end = i;
        }
    }

    cout << maxSum << endl;
    for(int i = start; i <= end; i++){
        cout << arr[i] << " ";
    }
}
