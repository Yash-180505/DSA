#include<bits/stdc++.h>
using namespace std;
void moveAllNegative(vector<int>&arr){

    int i=0;
    int j=arr.size()-1;
    while(i<j){
         if(arr[i]<0){
              i++;
         }
         else if( arr[j]>0){
              j--;
         }
         else{
              swap(arr[i],arr[j]);
              i++;
              j--;
         }
    }
}
int main(){
     vector<int>arr={-1,2,-3,4,-5,6};
     moveAllNegative(arr);
     for(int i: arr)
     {
         cout<<i<<" ";
     }
}