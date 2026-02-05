#include<bits/stdc++.h>
using namespace std;
  void combinationK(int idx ,int k,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans){ 
    if(temp.size()==k){
          ans.push_back(temp);
          return;
    }


      for(int i=idx;i<arr.size();i++){
           temp.push_back(arr[i]);
           combinationK(i+1,k,arr,temp,ans);
           temp.pop_back();
      }
  }


int main(){
   int n=4;
   int k=2;


    vector<int>arr;
    for(int i=1;i<=n;i++){
          arr.push_back(i);
    }

    vector<int>temp;
    vector<vector<int>>ans;
   
combinationK(0,k,arr,temp,ans);
    for(auto x: ans){
         for(auto i:x){
              cout<<i<<" ";
         }
         cout<<endl;
    }


}