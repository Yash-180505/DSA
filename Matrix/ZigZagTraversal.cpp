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


 cout<<"Matrix"<<endl;
  for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cout<<matrix[i][j]<<" ";
       }cout<<endl;

 }

 cout<<"Zig Zag Traversal:"<<endl;
   for(int i=0;i<n;i++){
      if(i%2==0){
         for(int j=0;j<m;j++){
              cout<<matrix[i][j]<<" ";
         }
         cout<<endl;
      }
      else{
         for(int j=m-1;j>=0;j--){
              cout<<matrix[i][j]<<" ";
         }
         cout<<endl;
      }
   }

   



        
}
  


