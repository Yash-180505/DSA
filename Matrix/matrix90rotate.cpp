#include<bits/stdc++.h>
using namespace std;

// P: Rotate a square matrix by 90 degrees clockwise
// TC: O(n^2)
// SC: O(1)

int main(){
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int n = mat.size();
    int m = mat[0].size();

    // Transpose
    for(int i=0; i<n; i++){
        for(int j=i+1; j<m; j++){
            swap(mat[j][i], mat[i][j]);
        }
    }

    // Reverse each row
    for(int i=0; i<n; i++){
        int left = 0;
        int right = n-1;
        while(left < right){
            swap(mat[i][left], mat[i][right]);
            left++;
            right--;
        }
    }

    // Print
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
