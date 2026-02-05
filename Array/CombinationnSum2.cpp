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
            combiantionSum(i+1,target-arr[i],arr,temp,ans);
            temp.pop_back();
       }
}

int main(){

    vector<int>arr={10,1,2,7,6,1,5};
    int target=8;
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