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

    int zeroCount=0;
    int non_zeroCount=0;
      for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
            if(matrix[i][j]==0) zeroCount++;
            else non_zeroCount++;
       }

    }

    if(zeroCount>non_zeroCount)cout<<"Sparse Matrix"<<endl;
    else cout<<"Not Sparse Matrix"<<endl;
   
} 