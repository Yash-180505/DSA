#include<bits/stdc++.h>
using namespace std;
void InsertionSort(vector<int>&arr){
    int n=arr.size();


    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]>curr){
              arr[prev+1]=arr[prev];
              prev--;
        }

        arr[prev+1]=curr;
    }
}

int main(){
  vector<int>arr={5,2,3,4,6};
  InsertionSort(arr);
  for(int x:arr){
      cout<<x<<" ";
  }

  
}