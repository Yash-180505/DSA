#include<bits/stdc++.h>
using namespace std;

int KthSmallestElement(vector<int>&arr,int k){
     priority_queue<int>max_heap;
     for(int i=0;i<k;i++){
   max_heap.push(arr[i]);
     }

     for(int i=k;i<arr.size();i++){
          if(max_heap.top()>arr[i]){
               max_heap.pop();
               max_heap.push(arr[i]);
          }
     }

      return max_heap.top();

}
int main(){

     vector<int>arr={7,10,4,3,20,15};

     int ans=KthSmallestElement(arr,3);

     cout<<ans;

}