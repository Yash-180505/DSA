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
        cout << "Not Symmetric Matrix!!";
        return 0;
    }

 bool isSymmetric=true;
  for(int i=0;i<n;i++){
       for(int j=i+1;j<m;j++){
    if(matrix[i][j]!=matrix[j][i]) {isSymmetric=false; break;}

       }}

       if(isSymmetric) cout<<"Symmetric Matrix!!"<<endl;
       else cout<<"Not Symmetric Matrix!!"<<endl;
 

}