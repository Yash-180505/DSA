#include<bits/stdc++.h>
using namespace std;

int main(){
 int n,m;
 cout<<"Enter the rows and column"<<endl;
 cin>>n>>m;

 vector<vector<int>>matrix(n,vector<int>(m));

 cout<<"Enter the matrix Element:"<<endl;
 for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin>>matrix[i][j];
       }

 }

  cout<<"Matrix-->"<<endl;
  for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cout<<matrix[i][j]<<" ";
       }

       cout<<endl;

 }

vector<vector<int>> transpose(m, vector<int>(n));

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        transpose[j][i] = matrix[i][j];
    }
}

   cout<<" Transpose of Matrix-->"<<endl;
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        cout << transpose[i][j] << " ";
    }
    cout << endl;
}


}