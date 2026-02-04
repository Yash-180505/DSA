#include<bits/stdc++.h>
using namespace std;
void Reverse(vector<int>&arr){
       int i=0;
       int j=arr.size()-1;
       while(i<j){
          swap(arr[i],arr[j]);
          i++;
          j--;
       }
}
int main(){
   vector<int>arr={1,2,3,4,5};
   Reverse(arr);
   for(int i: arr){
      cout<<i<<" ";
   }
}