#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> matrixSub(int n, int m,
                              vector<vector<int>> matrix1,
                              vector<vector<int>> matrix2) {
    vector<vector<int>> result(n, vector<int>(m, 0));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    return result;
}


int main() {
    int n, m;
     cout<<"Enter the number of rows And column:"<<endl;
    cin >> n >> m;

    vector<vector<int>> matrix1(n, vector<int>(m));
    vector<vector<int>> matrix2(n, vector<int>(m));
    cout<<"Enter the elements of Matrix1:"<<endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix1[i][j];
cout<<"Enter the elements of Matrix2:"<<endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix2[i][j];

    vector<vector<int>> result = matrixSub(n, m, matrix1, matrix2);
cout<<"Resultant Matrix:"<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
}
