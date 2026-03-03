#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& image, int r, int c, int originalColor, int color){
    
    int n = image.size();
    int m = image[0].size();

    if(r < 0 || c < 0 || r >= n || c >= m) return;
    if(image[r][c] != originalColor) return;

    image[r][c] = color;

    dfs(image, r+1, c, originalColor, color);
    dfs(image, r-1, c, originalColor, color);
    dfs(image, r, c+1, originalColor, color);
    dfs(image, r, c-1, originalColor, color);
}

vector<vector<int>> FloodFill(vector<vector<int>>& image, int sr, int sc, int color){ 
    
    int originalColor = image[sr][sc];

    if(originalColor == color)
        return image;

    dfs(image, sr, sc, originalColor, color);

    return image;
}

int main(){

    vector<vector<int>> image = {
        {1,1,1},
        {1,1,0},
        {1,0,1}
    };

    int sr = 1;
    int sc = 1;
    int newColor = 2;

    vector<vector<int>> result = FloodFill(image, sr, sc, newColor);

    cout << "After Flood Fill:\n";
    for(auto row : result){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}