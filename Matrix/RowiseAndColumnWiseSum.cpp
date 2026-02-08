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

cout<<"Row Sum:"<<endl;
 for(int i=0;i<n;i++){
      int rowSum=0;
      for(int j=0;j<m;j++){
           rowSum+=matrix[i][j];
      }
      cout<<rowSum<<endl;

 }

 cout<<"Column Sum:"<<endl;
 for(int j=0;j<m;j++){
      int colSum=0;
      for(int i=0;i<n;i++){
         colSum+=matrix[i][j];
      }
      cout<<colSum<<endl;
 }

}