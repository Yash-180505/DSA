#include<bits/stdc++.h>
using namespace std;


void combination(int idx,int k,int target,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans){
       if(temp.size()==k && target==0){
          ans.push_back(temp);
          return;
       }
       if(target<0) return ;

       for(int i=idx;i<arr.size();i++){
            temp.push_back(arr[i]);
            combination(i+1,k,target-arr[i],arr,temp,ans);
            temp.pop_back();
       }
}


int main() {
         vector<int>arr={1,2,3,4,5,6,7,8,9};
         vector<int>temp;
         vector<vector<int>>ans;
     int k=3;
     int n=9;
        combination(0,k,n,arr,temp,ans);

    for(auto x: ans){
          for(auto i:x){ 
              cout<<i<<" ";


          }
          cout<<endl;
    }
        
      

    }
