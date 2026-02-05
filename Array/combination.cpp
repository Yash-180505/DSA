#include<bits/stdc++.h>
using namespace std;
  void combination(int idx ,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans){ 
      ans.push_back(temp);


      for(int i=idx;i<arr.size();i++){
           temp.push_back(arr[i]);
           combination(i+1,arr,temp,ans);
           temp.pop_back();
      }
  }

  int main(){
 

    vector<int>arr={1,2,3,4};

    vector<int>temp;
    vector<vector<int>>ans;

    combination(0,arr,temp,ans);


    for(auto x:ans){
          for(auto i:x){ 
              cout<<i<<" ";
          }

          cout<<endl;
    }

  }