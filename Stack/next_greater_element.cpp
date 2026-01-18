#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreater(vector<int> arr){
    vector<int> ans;
    int n=arr.size();

    for(int i=0;i<n;i++){
        int next=-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                next=arr[j];
                break;
            }
        }
        ans.push_back(next);
    }
    return ans;
}//O(n^2)


vector<int> nextGreaterOptimal(vector<int> arr){
    int n = arr.size();
    vector<int> ans(n);
    stack<int> s;

    for(int i=n-1;i>=0;i--){
        while(!s.empty() && s.top()<=arr[i])
            s.pop();

        if(s.empty()) ans[i]=-1;
        else ans[i]=s.top();

        s.push(arr[i]);
    }
    return ans;
}//O(n)

int main(){
    vector<int> arr = {4,5,2,25,7,8};

    vector<int> brute = nextGreater(arr);
    vector<int> optimal = nextGreaterOptimal(arr);

    cout<<"Brute Force Output: ";
    for(int x: brute) cout<<x<<" ";
    cout<<endl;

    cout<<"Stack Optimized Output: ";
    for(int x: optimal) cout<<x<<" ";
    cout<<endl;

    return 0;
}
