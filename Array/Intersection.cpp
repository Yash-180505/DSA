#include<bits/stdc++.h>
using namespace std;
vector<int> IntersectionArray(vector<int> arr1, vector<int> arr2){


    vector<int> ans;
    int i = 0, j = 0;
    int n = arr1.size();
    int m = arr2.size();

    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            if(ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int>arr1={1,2,3,4,4};
    vector<int>arr2={2,4,5,6,7};
    vector<int>ans=IntersectionArray(arr1,arr2);
    for(int i: ans){
         cout<<i<<" ";
    }
}