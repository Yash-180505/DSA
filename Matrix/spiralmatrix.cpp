#include<bits/stdc++.h>
using namespace std;

// P: Print a matrix in spiral order
// TC: O(n * m)
// SC: O(1)

int main(){
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int n = mat.size();
    int m = mat[0].size();

    int left = 0, right = m-1;
    int top = 0, bottom = n-1;

    while(left <= right && top <= bottom){

        for(int i = left; i <= right; i++){
            cout << mat[top][i] << " ";
        }
        top++;

        for(int i = top; i <= bottom; i++){
            cout << mat[i][right] << " ";
        }
        right--;

        if(top <= bottom){
            for(int i = right; i >= left; i--){
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        }

        if(left <= right){
            for(int i = bottom; i >= top; i--){
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }
}
