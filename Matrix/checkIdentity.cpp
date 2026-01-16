#include<bits/stdc++.h>
using namespace std;

// P: Check whether a matrix is an identity matrix
// TC: O(n^2)
// SC: O(1)

int main(){
    vector<vector<int>> mat = {
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };

    int n = mat.size();
    bool isIdentity = true;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j && mat[i][j] != 1)
                isIdentity = false;
            if(i != j && mat[i][j] != 0)
                isIdentity = false;
        }
    }

    if(isIdentity)
        cout << "Identity Matrix";
    else
        cout << "Not Identity Matrix";
}
