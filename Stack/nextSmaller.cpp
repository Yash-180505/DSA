#include<bits/stdc++.h>
using namespace std;

vector<int> Nextsmaller(vector<int>arr){
    int n=arr.size();  //2,1,4,3
    vector<int>ans(n);
     stack<int>st;
     st.push(-1);
     for(int i=n-1;i>=0;i--){
        int curr=arr[i];
         while(st.top()!=-1 && st.top()>=curr){
            st.pop();
         }
         ans[i]=st.top();
         st.push(curr);
     }

return ans;
}
int main(){
 
     vector<int>arr={2,1,4,3};
     for(int x: Nextsmaller(arr)){
          cout<<x<<" ";
     }
}