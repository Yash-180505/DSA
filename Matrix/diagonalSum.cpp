#include<bits/stdc++.h>
using namespace std;

// P: Find sum of primary and secondary diagonals of a square matrix
// TC: O(n)
// SC: O(1)

int main(){
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int sum = 0;
    int n = mat.size();

    for(int i = 0; i < n; i++){
        sum += mat[i][i];
    }

    for(int i = 0; i < n; i++){
        sum += mat[i][n-i-1];
    }

    if(n % 2 == 1){
        sum -= mat[n/2][n/2];
    }

    cout << sum;
}
