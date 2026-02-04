#include<bits/stdc++.h>
using namespace std;
void RotateByK(vector<int>&arr,int k){
    int n=arr.size();
    int i=0;
    int j=n-1;
    while(i<j){
          swap(arr[i],arr[j]);
          i++;
          j--;

    }

    i=0;
    j=k-1;
     while(i<j){
          swap(arr[i],arr[j]);
          i++;
          j--;

    }

    i=k;
    j=n-1;
     while(i<j){
          swap(arr[i],arr[j]);
          i++;
          j--;

    }



}
int main(){
   vector<int>arr={1,2,3,4,5,6,7};
   int  k=2;
   RotateByK(arr,k);
   for(int i:arr){
      cout<<i<<" ";
   }
}