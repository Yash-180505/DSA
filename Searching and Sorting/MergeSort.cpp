#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>&arr,int start,int mid,int end){
     
    int i=start;
    int j=mid+1;
    vector<int>temp;
    while(i<=mid && j<=end){
         
        if(arr[i]>arr[j]){
             temp.push_back(arr[j]);
              j++;
        }
        else{
            temp.push_back(arr[i]);
             i++;
        }
    }
    while(i<=mid){
          temp.push_back(arr[i]);
        i++;
    }
     while(j<=end){
          temp.push_back(arr[j]);
        j++;
    }

   int k=0;
    for(int i=0;i<temp.size();i++){
      arr[k]=temp[i];

      k++;}

}

void  mergeSort(vector<int>&arr,int start,int end){

   
   if(start<end){
    int mid=start+(end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);

   }
}

int main(){
  vector<int>arr={5,2,3,4,6};
 int n=arr.size();
  mergeSort(arr,0,n-1);


  for(int x: arr){
      cout<<x<<" ";
  }
  
}