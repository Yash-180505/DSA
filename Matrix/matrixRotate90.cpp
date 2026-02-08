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

 if(n != m){
    cout << "Rotation not possible for non-square matrix";
    return 0;
}

vector<vector<int>> result(m, vector<int>(n));

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        result[j][i] = matrix[i][j];
    }
}

   cout<<" Transpose of Matrix-->"<<endl;
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        cout << result[i][j] << " ";
    }
    cout << endl;
}

for(int i=0;i<m;i++){
    int l=0;
     int r=n-1;
     while(l<r){
         swap(result[i][l],result[i][r]);
         l++;
         r--;
     }

}

   cout<<" Rotate Matrix 90 degree-->"<<endl;
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        cout << result[i][j] << " ";
    }
    cout << endl;
}

   
} 