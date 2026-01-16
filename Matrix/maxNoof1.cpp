#include<bits/stdc++.h>
using namespace std;

// P: Find the row index with maximum number of 1's in a sorted binary matrix
// TC: O(n + m)
// SC: O(1)

int main(){
    vector<vector<int>> mat = {
        {0,0,1,1},
        {0,1,1,1},
        {0,0,0,1},
        {0,0,0,0}
    };

    int maxRow = -1;
    int n = mat.size();
    int m = mat[0].size();

    int i = 0;
    int j = m - 1;

    while(i < n && j >= 0){
        if(mat[i][j] == 1){
            maxRow = i;
            j--;
        } else {
            i++;
        }
    }

    cout << "Row with maximum 1's: " << maxRow;
}
