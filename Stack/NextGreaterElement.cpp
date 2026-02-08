#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr){
        int n=arr.size();
    vector<int>ans(n);

    stack<int>s;
    for(int i=n-1;i>=0;i--){
         while(!s.empty() && s.top()<=arr[i])
             s.pop();
           ans[i]=s.empty()?-1:s.top();
           s.push(arr[i]);
    
    
            }

            return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> ans = nextGreaterElement(arr);

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

    return 0;
}
