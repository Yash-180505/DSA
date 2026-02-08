#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p;
        cout<<"Enter the number of rows And columns(eg- 2 3 2):"<<endl;
    cin >> n >> m >> p;

    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(m, vector<int>(p));
    vector<vector<int>> C(n, vector<int>(p, 0));


      cout<<"Enter the elements of Matrix1:"<<endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> A[i][j];
  cout<<"Enter the elements of Matrix2:"<<endl;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < p; j++)
            cin >> B[i][j];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
cout<<"Resultant Matrix:"<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
