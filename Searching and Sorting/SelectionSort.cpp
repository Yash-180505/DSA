#include<bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int>&arr){
    int n=arr.size();
      for(int i=0;i<n-1;i++){
         int smallestidx=i;
      for(int j=i+1;j<n;j++){
          if(arr[j]<arr[smallestidx]){
              smallestidx=j;
          }
      }
       swap(arr[i],arr[smallestidx]);
      }
}

int main(){
  vector<int>arr={5,2,3,4,6};
  SelectionSort(arr);
  for(int x:arr){
     cout<<x<<" ";
  }
  
}