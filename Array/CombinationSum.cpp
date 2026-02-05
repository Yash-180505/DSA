#include<bits/stdc++.h>
using namespace std;
void combiantionSum(int idx,int target,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans){
       if(target==0){
          ans.push_back(temp);
          return;
       }
       if(target<0) return ;

       for(int i=idx;i<arr.size();i++){
            temp.push_back(arr[i]);
            combiantionSum(i,target-arr[i],arr,temp,ans);
            temp.pop_back();
       }
}

int main(){

    vector<int>arr={2,3,6,7};
    int target=7;
    vector<int>temp;
    vector<vector<int>>ans;

    combiantionSum(0,target,arr,temp,ans);
    

    for(auto x:  ans){
           for(auto i : x){
               cout<<i<<" ";
           }

           cout<<endl;
    }
}