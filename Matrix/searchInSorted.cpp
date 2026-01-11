#include<bits/stdc++.h>
using namespace std;

// P: Search an element in a row-wise and column-wise sorted matrix
// TC: O(n + m)
// SC: O(1)

int main(){
    vector<vector<int>> mat = {
        {1,4,7},
        {2,5,8},
        {3,6,9}
    };

    int target = 5;
    int n = mat.size();
    int m = mat[0].size();

    bool value = false;
    int i = 0;
    int j = m - 1;

    while(i < n && j >= 0){
        if(mat[i][j] == target){
            value = true;
            break;
        }
        else if(mat[i][j] > target){
            j--;
        }
        else{
            i++;
        }
    }

    if(value){
        cout << "Element present";
    }
    else{
        cout << "Not present";
    }
}
