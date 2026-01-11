#include<bits/stdc++.h>
using namespace std;
// P: Find the majority element in an array (appears more than n/2 times)
// TC: O(n)
// SC: O(1)
//1
int majorityElement(vector<int>& arr) {
    int candidate = 0;
    int count = 0;

    for(int x : arr) {
        if(count == 0) {
            candidate = x;
            count = 1;
        }
        else if(x == candidate) {
            count++;
        }
        else {
            count--;
        }
    }
    return candidate;
}

 int main() {
       vector<int>arr={2,2,1,1,2,2,2};
       int n=arr.size();
       //2 O(n),O(n)
       unordered_map<int,int>mp;
       for(int i=0;i<arr.size();i++){
          mp[arr[i]]++;
       }
       for(auto it: mp){
          if(it.second>n/2){
              cout<<it.first<<" ";
          }
       }
    



       
    return  0;

 }