#include<bits/stdc++.h>
using namespace std;

void permute(vector<int>&arr,int l,int r,vector<vector<int>>&ans){

    if(l==r){
          ans.push_back(arr);
          return;
    }

    for(int i=l;i<=r;i++){
          swap(arr[l],arr[i]);
          permute(arr,l+1,r,ans);
          swap(arr[l],arr[i]);
    }
   
 }
int main(){
   vector<int>arr={1,2,3};
   int n=arr.size();
   vector<vector<int>>ans;
   permute(arr,0,n-1,ans);


   for(auto x: ans){
      for(auto i:x){
          cout<<i<<" ";
      }
      cout<<endl;
   }
}