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
        cout << "Not Lower Triangular Matrix!!";
        return 0;
    }

 bool lowerTriangular=true;
  for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
    if(j>i && matrix[i][j]!=0) {lowerTriangular=false; break;}

       }}

       if(lowerTriangular) cout<<"Lower Triangular Matrix!!"<<endl;
       else cout<<"Not Lower Triangular Matrix!!"<<endl;
 

}