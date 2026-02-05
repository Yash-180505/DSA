#include<bits/stdc++.h>
using namespace std;
void mergeTwoArray(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
   int  gap=(n+m+1)/2;

    while(gap>0){
          int i=0;
          int j=gap;
          while(j<n+m){
              if(i<n &&j<n){
                if(arr1[i]>arr1[j]){
                      swap(arr1[i],arr1[j]);
                }
              }
              else if(i<n && j>=n){
                   if(arr1[i]>arr2[j-n]){
                     swap(arr1[i],arr2[j-n]);

                   }
              }
              else {
                  if(arr2[i-n]>arr2[j-n]){
                      swap(arr2[i-n],arr2[j-n]);
                  }
              }
              i++;
              j++;
          }
          if(gap==1)return;
          gap=(gap+1)/2;
    }
}
int main(){
    vector<int>arr1={2,3,4};
    vector<int>arr2={1,5,6};
    mergeTwoArray(arr1,arr2);

    for(int i: arr1){
          cout<<i<<" ";
    }
    for(int i:arr2){
          cout<<i<<" ";
    }

}