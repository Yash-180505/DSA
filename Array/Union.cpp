#include<bits/stdc++.h>
using namespace std;
vector<int>UinonArray(vector<int>arr1,vector<int>arr2){
    int i=0;
    int j=0;
    int n=arr1.size();
    int m=arr2.size();
    vector<int>ans;
    while(i<n&&j<m){
        if(arr1[i]==arr2[j] ){
            if(ans.empty() || ans.back()!=arr1[i])
             {   ans.push_back(arr1[i]);}
             i++;
             j++;
        }
        else if(arr1[i]<arr2[j] ){
             if(ans.empty() || ans.back()!=arr1[i])
             {   ans.push_back(arr1[i]);}
             i++;
             
        }
        else{
            
             if(ans.empty() || ans.back()!=arr2[j])
             {   ans.push_back(arr2[j]);}
          j++;
        }

    }
    while(i<n){
        if( ans.back()!=arr1[i])
             {   ans.push_back(arr1[i]);}
             i++;
    }
    while(j<m){
        if(ans.back()!=arr2[j])
             {   ans.push_back(arr2[j]);}
          j++;
    }
    return ans;
}


int main(){
     vector<int>arr1={1,2,2,3,5};
     vector<int>arr2={2,2,4,5,6};

     vector<int>ans=UinonArray(arr1,arr2);
     cout<<"Union of Array:"<<endl;
     for(int i: ans){
         cout<<i<<" ";
     }

}