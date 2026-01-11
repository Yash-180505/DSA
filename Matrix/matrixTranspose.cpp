#include<bits/stdc++.h>
using namespace std;

// P: Transpose a square matrix in-place
// TC: O(n^2)
// SC: O(1)

int main(){

    vector<vector<int>> mat = {
        {2,1,3},
        {4,5,6},
        {7,8,9}
    };
 
    int n = mat.size();
    int m = mat[0].size();

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < m; j++){
            swap(mat[j][i], mat[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
