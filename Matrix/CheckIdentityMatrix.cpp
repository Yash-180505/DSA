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

bool identity=true;
if(n!=m) identity=false;
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          if(i==j && matrix[i][j]!=1) identity=false;
          if(i!=j && matrix[i][j]!=0) identity=false;

      }
  }

if(identity) cout<<"Identity matrix!!"<<endl;
else  cout<<"Not Identity matrix!!"<<endl;

}