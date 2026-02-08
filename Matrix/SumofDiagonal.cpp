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
    cout << "Diagonal sum not possible";
    return 0;
}

 
 cout<<"Sum of Diagonal:"<<endl;
  
 int sum=0;
 for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          if(i==j){
              sum+=matrix[i][j];
          }
      }
 }

 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i+j==n-1){
               sum+=matrix[i][j];
        }
    }
 }

 if(n%2==1){
       sum-=matrix[n/2][n/2];
 }
 cout<<sum;
   
} 