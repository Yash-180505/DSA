#include<bits/stdc++.h>
using namespace std;
 

vector<int> prevSmaller(vector<int>arr){
     int n=arr.size();
     stack<int>s;
     s.push(-1);
     vector<int>ans(n);
   for(int i=0;i<n;i++){
      int curr=arr[i];
      while(s.top()!=-1 && curr<=s.top()){
            s.pop();
      }
      ans[i]=s.top();
      s.push(curr); //2 ,1

   }
return ans;
}  
int main(){


    vector<int>arr={2,1,3,4};
    for(int x :prevSmaller(arr)){
          cout<<x<<" ";
    }
}