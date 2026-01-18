#include<bits/stdc++.h>
using namespace std;
vector<int> nextgreaterElementLeft(vector<int> arr){
    int n=arr.size();
    vector<int>ans(n);
    stack<int>s;
    for(int i=0;i<n;i++){
     
          while(!s.empty() && s.top()<arr[i]){
               s.pop();
          }
          if(s.empty())ans[i]=-1;
          else{
              ans[i]=s.top();
          }
          s.push(arr[i]);
    }

  return ans;
}//O(n)
int main(){
    vector<int> arr = {4,5,2,25,5};

    vector<int> res = nextgreaterElementLeft(arr);

    for(int x: res) cout<<x<<" ";
    return 0;
}
