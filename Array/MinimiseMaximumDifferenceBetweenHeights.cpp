#include<bits/stdc++.h>
using namespace std;

int minimumDifference(vector<int>arr,int k){
    sort(arr.begin(),arr.end());

    int n=arr.size();
  int ans=arr[n-1]-arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-k<0) continue;
        int minh=min(arr[0]+k,arr[i+1]-k);
        int maxh=max(arr[i]+k,arr[n-1]-k);

        ans=min(ans,maxh-minh);
    }
    return ans;

}
int main(){
    vector<int>arr={1,5,8,10};
    int k=2;
    int ans=minimumDifference(arr,k);

    cout<<"Minimum Difference between Heights:"<<ans<<endl;

}